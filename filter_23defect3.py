#!/usr/bin/env python

import sys
import getopt
import time

from ICDIndicator import contains_two_move, contains_three_move
from ICDIndicator import chord_length
from ICDIndicator import get_other_node
from ChordDiagram.Utility import load_diagrams_from_files

def timestamp():
    return time.strftime("%m/%d/%Y %H:%M:%S")

def diagram_filter(diagram):
    # Skip diagrams with 2 or 3 moves
    # or if other ends of chords with adjacent nodes are too close

    # Filter out 2 and 3 moves.  One moves are pre-filtered in chord list
    if (contains_two_move(diagram) or
        contains_three_move(diagram)):
        return False # Skip diagram

    # Filter out parallel chords with defect
    defect_length = 3
    chords_by_node = { node:chord for chord in diagram for node in chord}
    n_nodes = len(chords_by_node)
    for node1 in range(1, n_nodes+1):
        node2 = node1 % n_nodes + 1 # Adjacent chord
        chord1 = chords_by_node[node1]
        chord2 = chords_by_node[node2]
        if chord_length((get_other_node(chord1, node1),
                         get_other_node(chord2, node2)), n_nodes) < defect_length:
            return False # Skip diagram
    return True # Keep diagram


def usage(progname, msg=""):
    usage_msg = '''
Print the list of all possible diagrams with the specified number of chords.

-n <nchords>: Requests testing of all diagrams with the specified chord count.
              Not valid in combination with "-d".

-s <scale>:   Factor to multiply by each node when generating.  This leaves
              room between nodes for extension chords.  A scale factor of 2,
              leaves a single open node between each node with a chord.

-h:           Print the usage text.




  usage: %s {-n <nchords> | -d '<diag>'}

'''
    print >>sys.stderr, usage_msg % (progname)
    print >>sys.stderr, msg
    sys.exit(1)

def main(argv):
    "Process command line arguments and kick things off"
    progname = argv[0].split('/')[-1]
    n_chords = 0  # Cmdline option '-n'
    scale = 1 # Default Cmdline option '-s'
    min_chord_length = 1 # Cmdline option '-l'
    print_status = 100000 # Cmdline option '-p'
    max_cpus = 1 # Default to single processing. Cmdline option '-c'
    block_size = 1 # Number of items in a block.
    block_item = 1 # Which item in block to process - trivial multinode support
    base_fname = "" # Output filename. Leading chord is '-#_#' appended to name

    # Parse command line options
    try:
        (opts, args) = getopt.getopt(argv[1:], "hn:s:l:p:c:b:i:f:")
    except getopt.GetoptError as err:
        print >>sys.stderr, str(err)
        usage(progname)
    for opt, arg in opts:
        if opt == '-b':
            block_size = int(arg)
        elif opt == '-h':
            usage()
        elif opt == '-i':
            block_item = int(arg)
        elif opt == '-p':
            print_status = int(arg)

    # Determine input sources, if any
    diag_files = args
    if len(diag_files) == 0:
        diag_files.append(None) # Read from stdin

    count = 0
    found = 0
    for diag in load_diagrams_from_files(diag_files,print_status, block_size, block_item):
        count += 1
        if diagram_filter(diag):
            found += 1
            print diag
        if print_status and count % print_status == 0:
            print >>sys.stderr, "{} Count: {:,}  Found: {:,}".format(timestamp(), count, found)
    print >>sys.stderr, "{} Complete! Count: {:,}  Found: {:,}".format(timestamp(), count, found)

if __name__ == "__main__":
    main(sys.argv)
