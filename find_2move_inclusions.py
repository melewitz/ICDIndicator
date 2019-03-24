#!/usr/bin/env python

import sys
import getopt
import time
from multiprocessing import Pool, cpu_count
from itertools import chain, combinations

from ChordDiagram.Diagram import Diagram
from ChordDiagram.Utility import load_diagrams_from_files
from ICDIndicator import chord_length


def timestamp():
    return time.strftime("%m-%d-%Y %H:%M:%S")

def get_parallel_extension(chord, n_nodes):
    '''Return a new chord that's parallel to the specified chord'''
    if chord_length(chord, n_nodes=n_nodes) == 1:
        raise Exception(
          "Cannot create parallel chord to chord with adjacent nodes: {}".format(chord))
    return [chord[0]+1, chord[1]-1]

def check_planarable_2move(diagram):
    # Scale up by 3 to leave 2 open nodes between each existing node
    diagx3 = Diagram(diagram)
    diagx3.scale(3)

    # Find parallel chord to each existing chord
    n_chords = diagx3.size()
    chords = [ get_parallel_extension(chord, n_chords*2*3) for chord in diagx3 ]

    n_extensions = n_chords # Only check with 1 extension per chord
    chord_combos = combinations(chords, n_extensions)
    for chord_combo in chord_combos:
        # Append this chord_combo to new copy of diagx3
        test_diag = Diagram(diagx3)
        for chord in chord_combo:
            test_diag.append(chord)
        if test_diag.is_planarable():
            return (diagram, test_diag, chord_combo)

    return (diagram, None, None)

def find_planarable_2moves(diag_gen, max_cpus=0):
    # Begin searching, use process pool to check diagrams - parallel checking
    if max_cpus == 0:
        CPUs = cpu_count() # Use all CPUs/cores available
    else:
        CPUs = max_cpus
    print >>sys.stderr, "Using {:,} of {:,} CPUs".format(CPUs, cpu_count())

    pool = Pool(CPUs)
    iterator_chunk_size = 1
    for result in pool.imap(
          check_planarable_2move, diag_gen, iterator_chunk_size):
        yield result

def usage(progname, msg=""):
    usage_msg = '''
Each input diagram is printed to stdout if adding an additional chord,
parallel to each original chord, results in a diagram planar diagram.

The following is displayed for each output diagram:
    diag: <original input diagram>
    diagx3: <original diagram scaled by 3, plus extensions that make it planar>
    chords: <list of extension inclusions considered>

  usage: {} [<options>] [<diagram-file>]...

      Where valid options are:
            [-d <diagram>]...
            [-c <max-cpus>] [-b <block-size> -i <block-item>]
            [-p <count>] [-h]

-d <diagram>: Passes a diagram on the command line.  Option -d can be specified
              multiple times.
-p <count>:   Default=100000.  Print status output to stderr every <count>
              number of generated diagrams.
-c <max-cpus>: Default=1. Maximum number of CPUs (processes) to use on the
              current machine. A value of zero uses all CPU cores as
              returned by multiprocessing.cpu_count().  Zero is the optimal
              choice on most systems.
-b <block-size>: Default=1. When distributing the work between multiple running
              instances, this is the total number of instances planned to run
              concurrently.
              Block-size is typically used to distribute the load over multiple
              machines.  On a single machine, the max-cpus option is optimally
              efficient.
-i <block-item>: Default=1. When distributing the work between multiple running
              instances, block-item specifies which slice of each block is to be
              processed by this instance.  Example: block-size=4, block-item=3
              causes this instance to process the 3rd item of each 4 item block,
              i.e. diagram numbers: 3, 7, 11, ...
              This option should always be specified with option block-size.
'''
    print >>sys.stderr, usage_msg.format(progname)
    print >>sys.stderr, msg
    sys.exit(1)

def main(argv):
    "Process command line arguments and kick things off"
    progname = argv[0].split('/')[-1]
    max_cpus = 0 # Default - use actual cpu_count
    status_diagrams = 100000
    diag_strs = []
    block_size = 1
    block_item = 1

    # Parse command line options
    try:
        (opts, args) = getopt.getopt(argv[1:], "hc:p:d:b:i:")
    except getopt.GetoptError as err:
        print >>sys.stderr, str(err)
        usage(progname)
    for opt, arg in opts:
        if opt == '-c':
            max_cpus = int(arg)
        elif opt == '-d':
            diag_strs.append(arg)
        elif opt == '-p':
            status_diagrams = int(arg)
        elif opt == '-b':
            block_size = int(arg)
        elif opt == '-i':
            block_item = int(arg)
        elif opt == '-h':
            usage(progname)

    # Convert diagram strings to diagrams
    diagrams = []
    if len(diag_strs) > 0:
        for diag_str in diag_strs:
            # TODO: regex validate diag str to prevent code injection attack
            try:
                diagrams.append(eval(diag_str))
            except Exception:
                usage(progname,"Error: Invalid diagram in '-d' option:" + diag_str)

    # Determine input sources, if any
    diag_files = args
    if len(diag_files) == 0 and not diagrams:
        diag_files.append(None) # Read from stdin

    # Do the work
    diag_gen = chain(diagrams,
                     load_diagrams_from_files(diag_files, status_diagrams,
                                              block_size, block_item))
    count = 0
    found = 0
    print >>sys.stderr, "{} Starting find_2move_inclusions".format(timestamp())
    for result in find_planarable_2moves(diag_gen, max_cpus):
        count += 1
        if result[1]:
            found += 1
            print "diag:", result[0]
            print "diagx3", result[1]
            print "chords", result[2]
        if count % 10000 == 0:
            print >>sys.stderr, "{} Total: {:,} Found:{:,}".format(timestamp(), count, found)
    print >>sys.stderr, "{} Complete Total: {:,} Found:{:,}".format(timestamp(), count, found)


if __name__ == "__main__":
    main(sys.argv)
