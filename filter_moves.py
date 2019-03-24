#!/usr/bin/env python

import sys
import getopt

from ICDIndicator import contains_one_move, contains_two_move, contains_three_move
from ICDIndicator import get_compressed_diagram
from ChordDiagram.Utility import load_diagrams_from_file


def usage(progname, msg=""):
    usage_msg = '''

    usage: {} [-a] [-h] [<diag-file>]...

Print input diagrams that contain no Reidemeister 1, 2, or 3 moves to stdout.
When the -a (all) option is specified, all input diagrams are printed with a
three character status for the diagram.  A status of '-2-' means the diagram
contains a two move, while a status of '1-3' means it contains a one and three
move.

Status and errors are printed to stderr.

-a: When specified, diagrams will be printed as diagram keys.
    Otherwise, the string version of the diagram is printed.
-h: Show this help text.

Example:
    $ {} -n 2 | filter_moves.py -a
    03/12/2015 13:18:00 Start loading diagrams from file: <stdin>
    Generating all 2-chord diagrams
    03/12/2015 13:18:00 Start generating diagrams
    12-: [[1, 2], [3, 4]]
    -2-: [[1, 3], [2, 4]]
    12-: [[1, 4], [2, 3]]
    03/12/2015 13:18:00 Completed Loading Diagrams: 3
'''
    print >>sys.stderr, usage_msg.format(progname, progname)
    if len(msg):
        print >>sys.stderr, msg
    sys.exit(1)

def main(argv):
    "Process command line arguments and kick things off"
    progname = argv[0].split('/')[-1]
    print_all = False # Print detail on each move type

    # Parse command line options
    try:
        (opts, args) = getopt.getopt(argv[1:], "ha")
    except getopt.GetoptError as err:
        print >>sys.stderr, str(err)
        usage(progname)
    for opt, _ in opts:
        if opt == '-a':
            print_all = True
        if opt == '-h':
            usage(progname)

    diag_files = args
    if len(diag_files) == 0:
        diag_files.append(None) # Read from stdin

    # Do the work
    count = 0
    for diag_file in diag_files:
        diag_gen = load_diagrams_from_file(diag_file)
        for diagram in diag_gen:
            count += 1
            diag_compressed = get_compressed_diagram(diagram)
            one = contains_one_move(diag_compressed)
            two = contains_two_move(diag_compressed)
            three = contains_three_move(diag_compressed)

            if print_all:
                print "{}{}{}: {}".format(
                    '1' if one else '-',
                    '2' if two else '-',
                    '3' if three else '-', diagram)
            elif not (one or two or three):
                print diagram


if __name__ == "__main__":
    main(sys.argv)
