#!/usr/bin/env python

import sys
import getopt

from ICDIndicator import get_compressed_diagram
from ICDIndicator import get_rotated_diagram
from ChordDiagram.Utility import load_diagrams_from_files


def usage(progname, msg=""):
    usage_msg = '''
Print each input diagram to stdout if it is not rotationally equivalent to any
previous input diagrams.

Note: Not suitable for extremely large sets of input diagrams as each rotation
of each diagram is held in memory.

    usage: {} [-h]
'''
    print >>sys.stderr, usage_msg.format(progname)
    if len(msg):
        print >>sys.stderr, msg
    sys.exit(1)

def main(argv):
    "Process command line arguments and kick things off"
    progname = argv[0].split('/')[-1]

    # Parse command line options
    try:
        (opts, args) = getopt.getopt(argv[1:], "hk")
    except getopt.GetoptError as err:
        print >>sys.stderr, str(err)
        usage(progname)
    for opt, _ in opts:
        if opt == '-h':
            usage(progname)

    diag_files = args
    if len(diag_files) == 0:
        diag_files.append(None) # Read from stdin

    # Do the work
    diags = set()
    diag_gen = load_diagrams_from_files(diag_files)
    for diagram in diag_gen:
        comp_diag = get_compressed_diagram(diagram)
        if str(comp_diag) not in diags:
            print diagram
            for rots in range(0, len(comp_diag)*2):
                rot_diag = get_rotated_diagram(comp_diag, rots)
                diags.add(str(rot_diag))


if __name__ == "__main__":
   main(sys.argv)
