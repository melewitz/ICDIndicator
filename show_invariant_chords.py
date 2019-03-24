#!/usr/bin/env python

import sys
import getopt
from itertools import chain

from ICDIndicator import get_invariant_chords_for_diagram
from ICDIndicator import get_scaled_diagram
from ICDIndicator import get_possible_chords
from ICDIndicator import contains_one_move, contains_three_move

from ChordDiagram.Diagram import Diagram
from ChordDiagram.Utility import load_diagrams_from_files


def usage(progname, msg=""):
    usage_msg = '''
Prints each input diagram with the corresponding scaled diagram and the list of
inclusion chords that individually result in a diagram without 1 or 3 moves.

Assumptions:
1. Input diagrams contain no 1 or 3 moves.
2. Input diagrams are not sparse.

    usage: {} <options> [<diagram-file>]...

    Where valid options are:
        [-a] [-d <diagram>]... [-p <count>] [-b <block-size> -i <block-item>]

-a:           Print
-d <diagram>: Passes a diagram on the command line.  Option -d can be specified
              multiple times.
-p <count>:   Default=10000.  Print status output to stderr every <count>
              number of generated diagrams.
-b <block-size>: Default=1. When distributing the work between multiple running
              instances, this is the total number of instances planned to run
              concurrently.
-i <block-item>: Default=1. When distributing the work between multiple running
              instances, block-item specifies which slice of each block is to be
              processed by this instance.  Example: block-size=4, block-item=3
              causes this instance to process the 3rd item of each 4 item block,
              i.e. diagram numbers: 3, 7, 11, ...
              This option should always be specified with option block-size.

'''
    print >>sys.stderr, usage_msg % (progname)
    print >>sys.stderr, msg
    sys.exit(1)

def diagram_filter(orig_sparse_diag, extension_chord, extended_sparse_diag):
    diag = Diagram(extended_sparse_diag)
    diag.compress()
    if (contains_one_move(diag) or
        contains_three_move(diag)):
        return False # Skip this diagram
    return True # Use this diagram

def main(argv):
    "Process command line arguments and kick things off"
    progname = argv[0].split('/')[-1]
    print_all = False # Print detail on each move type
    print_status = 10000
    block_size = 1
    block_item = 1
    diag_strs = []

    # Parse command line options
    try:
        (opts, args) = getopt.getopt(argv[1:], "ab:d:hi:p:")
    except getopt.GetoptError as err:
        usage(progname)
    for opt, arg in opts:
        if opt == '-a':
            print_all = True
        elif opt == '-b':
            block_size = int(arg)
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
    for diagram in diag_gen:
        ext_possible_nodes = range(1, len(diagram)*4, 2) # Odds 1..2*n_nodes
        ext_possible_chords = get_possible_chords(node_list=ext_possible_nodes)

        sparse_diagram = get_scaled_diagram(diagram, 2)
        invariant_chords = get_invariant_chords_for_diagram(
            sparse_diagram, ext_possible_chords, diagram_filter=diagram_filter,
            doScale=False)

        if print_all or invariant_chords:
            print
            print "Orig diagram  :", diagram
            print "Sparse diagram:", sparse_diagram
            print "Invariant chords:", invariant_chords


if __name__ == "__main__":
    main(sys.argv)
