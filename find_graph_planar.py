#!/usr/bin/env python

'''
This module depends on the Boost library to test for graph planarity.  Boost
can be downloaded from: http://www.boost.org

Graph planar is a term from graphing theory, and is different than testing
whether a chord diagram can be written as a valid planar diagram.
'''

import sys
import getopt
import time
from multiprocessing import Pool, cpu_count
from itertools import chain

from ICDIndicator import chord_length
from ChordDiagram.Utility import load_diagrams_from_files
from Graph import diagram_to_graph

from graph_tool.topology import is_planar

def timestamp():
    return time.strftime("%m-%d-%Y %H:%M:%S")

def get_parallel_extension(chord, n_nodes):
    '''Return a new chord that's parallel to the specified chord'''
    if chord_length(chord, n_nodes=n_nodes) == 1:
        raise Exception(
          "Cannot create parallel chord to chord with adjacent nodes: {}".format(chord))
    return [chord[0]+1, chord[1]-1]

def check_graph_planar(diagram):
    '''Returns True if diagram is graph planar, otherwise returns false.

       Arguments:
           diagram: Diagram to test
       Returns:
           Returns True if specified diagram is graph planar, else returns False
       Raises:
           None
    '''
    graph = diagram_to_graph(diagram)
    return (is_planar(graph), diagram)

def find_graph_planars(diag_gen, max_cpus=0):
    '''Leverage multiprocessing to optimize graph planar testing.

       Arguments:
           diag_gen: An iterable that returns diagrams to be tested.
           max_cpus: Default=0. The workload is split over the number of CPUs
               specified.  Zero means use all available CPU cores.
       Yields:
           A tuple (graph_planar, diagram), where graph_planar is True iff the
           diagram is graph planar.
       Raises:
           None
    '''

    # Begin searching, use process pool to check diagrams - parallel checking
    if max_cpus == 0:
        CPUs = cpu_count() # Use all CPUs/cores available
    else:
        CPUs = max_cpus #  Value specified on cmdline
    print >>sys.stderr, "Using {:,} of {:,} CPUs".format(CPUs, cpu_count())

    pool = Pool(CPUs)
    iterator_chunk_size = 1
    count = 0
    found = 0
    for result in pool.imap(check_graph_planar, diag_gen, iterator_chunk_size):
        count += 1
        if result[0]:
            found += 1
            print >>sys.stderr, result[1]
        if count % 10000 == 0:
            print >>sys.stderr, "Diagrams checked: {:,} graph planar: {:,}".format(count, found)
        yield result
    print >>sys.stderr, "Complete: Diagrams checked: {:,} graph planar: {:,}".format(count, found)

def usage(progname, msg=""):
    usage_msg = '''
Print all graph planar diagrams to stdout.

    usage: {} [-d <diagram>] [<options>] [<diagram-file>...]

Where valid options are:

-d <diagram>: Passes a diagram on the command line.  Option -d can be specified
              multiple times.
-c <max-cpus>: Maximum number of CPUs (processes) on the current machine.
              Max-CPUs defaults to 1. A value of zero uses all CPU cores as
              returned by multiprocessing.cpu_count(). Max-CPUs=0 results in the
              best performance, and will use 100% of each CPU core.
-b <block-size>: Default=1. When distributing the work between multiple running
              instances, this is the total number of instances planned to run
              concurrently.
              Block-size is typically used to distribute the load over multiple
              machines.  On a single machine, the max-cpus option is optimally
              efficient.
-i <block-item>: Default=1. When distributing the work between multiple running
              instances, this specifies which slice of each block is to be
              processed by this instance.  Example: block-size=4, block-item=3
              causes this instance to process the 3rd item of each 4 item block,
              i.e. diagram numbers: 3, 7, 11, ...
              This option should always be specified with option block-size.
-p <count>: Default=100000.  Print status output to stderr every <count> number
              of generated diagrams.
-h:           Print this usage help-text.
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

    diag_files = args
    if len(diag_files) == 0 and not diagrams:
        diag_files.append(None) # Read from stdin

    # Do the work
    diag_gen = chain(diagrams,
                     load_diagrams_from_files(diag_files, status_diagrams,
                                              block_size, block_item))
    for result in find_graph_planars(diag_gen, max_cpus):
        if result[0]:
            print result[1]


if __name__ == "__main__":
    main(sys.argv)
