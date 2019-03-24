#!/usr/bin/env python

import sys
import getopt
import time
from itertools import chain
from multiprocessing import Pool, cpu_count

from ChordDiagram.Diagram import Diagram
from ChordDiagram.Utility import load_diagrams_from_files

def timestamp():
    return time.strftime("%m-%d-%Y %H:%M:%S")

def check_planarable(diagram):
    # Test planarability of diagram
    diag = Diagram(diagram)
    rv = diag.is_planarable()

    return (diagram, rv)

def find_planarable_diags(diag_gen, max_cpus=0):

    # Begin searching, use process pool to check diagrams - parallel checking
    if max_cpus == 0:
        CPUs = cpu_count() # Use all CPUs/cores available
    else:
        CPUs = max_cpus
    print >>sys.stderr, "Using {} of {} CPUs".format(CPUs, cpu_count())
    pool = Pool(CPUs)
    iterator_chunk_size = 100
    for (diagram, match) in pool.imap(
          check_planarable,
          diag_gen,
          iterator_chunk_size):
        if match:
            yield diagram

def usage(progname, msg=""):
    usage_msg = '''
Print all planar input diagrams to stdout.

    usage: {} [-c <max-cpus>] [-h] [-d <diagram>]... [<diagram-file>...]

-d <diagram>: Passes a diagram on the command line.  Option -d can be specified
              multiple times.
-c <max-cpus>: Maximum number of CPUs (processes) on the current machine.
              Max-CPUs defaults to 0. A value of zero uses all CPU cores as
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
              of planar diagrams.  A count of zero disable status output.
-h:           Print this usage help-text.
'''
    print >>sys.stderr, usage_msg.format(progname)
    print >>sys.stderr, msg
    sys.exit(1)

def main(argv):
    "Process command line arguments and kick things off"
    progname = argv[0].split('/')[-1]
    max_cpus = 0 # Default - use actual cpu_count
    diag_strs = []
    block_size = 1
    block_item = 1
    print_status = 10000

    # Parse command line options
    try:
        (opts, args) = getopt.getopt(argv[1:], "b:c:d:hi:p:")
    except getopt.GetoptError as err:
        print >>sys.stderr, str(err)
        usage(progname)
    for opt, arg in opts:
        if opt == '-b':
            block_size = int(arg)
        elif opt == '-c':
            max_cpus = int(arg)
        elif opt == '-d':
            diag_strs.append(arg)
        elif opt == '-h':
            usage(progname)
        elif opt == '-i':
            block_item = int(arg)
        elif opt == '-p':
            print_status = int(arg)

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
    diag_gen = chain(diagrams,
                     load_diagrams_from_files(diag_files, print_status,
                                              block_size, block_item))

    # Do the work
    for diagram in find_planarable_diags(diag_gen, max_cpus):
        print diagram


if __name__ == "__main__":
   main(sys.argv)
