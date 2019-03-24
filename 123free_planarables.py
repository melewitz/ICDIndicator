#!/usr/bin/env python

import sys
import getopt
import time
from multiprocessing import Pool, cpu_count

from ChordDiagram.Diagram import Diagram
from ICDIndicator import gen_possible_diagrams
from ICDIndicator import get_possible_chords
from ICDIndicator import contains_one_move, contains_two_move, contains_three_move
from ChordDiagram.Utility import key_to_diagram

def timestamp():
    return time.strftime("%m-%d-%Y %H:%M:%S")

def check_123_planarable(diagram):

    # Skip diagrams with 1, 2 or 3 moves
    if (contains_one_move(diagram) or
        contains_two_move(diagram) or
        contains_three_move(diagram)):
        return (diagram, False)

    # Test planarability of sparse_diag
    diag = Diagram(diagram)
    rv = diag.is_planarable()

    return (diagram, rv)

def gen_all_123free_planarable_diags(diag_gen):

    # Begin searching, use process pool to check diagrams - parallel checking
    CPUs = cpu_count()
    print "Using {} of {} CPUs".format(CPUs, cpu_count())
    pool = Pool(CPUs)
    iterator_chunk_size = 1
    for (diagram, match) in pool.imap(
          check_123_planarable,
          diag_gen,
          iterator_chunk_size):
        if match:
            yield diagram


def get_diag_from_gen_all(n_chords):
    print >>sys.stderr, "Processing all {}-chord diagrams".format(n_chords)

    # Create possible chords structure for sparse base diagram
    diag_node_list = range(1, n_chords*2+1) # 1..n_chords*2
    diag_possible_chords = get_possible_chords(node_list=diag_node_list)

    for diag in gen_possible_diagrams(n_chords, diag_possible_chords):
        yield diag

def usage(progname, msg=""):
    usage_msg = '''
For each diagram requested, display the list of chords that add no 1, 2, or 3
moves, and the combinations of these chords that extend the original diagram
without adding any 1 or 3 moves and result in a planarable diagram.

-n <nchords>: Requests testing of all diagrams with the specified chord count.
              Not valid in combination with "-d".

-d '<diag>':  Requests testing of the specified diagram.  Note that this option
              can be specified any number of times.  Not valid in combination
              with "-n" option.

  usage: %s {-n <nchords> | -d '<diag>'}

'''
    print >>sys.stderr, usage_msg % (progname)
    print >>sys.stderr, msg
    sys.exit(1)

def main(argv):
    "Process command line arguments and kick things off"
    progname = argv[0].split('/')[-1]
    n_chords = 0  # Cmdline option '-n'
    diag_strs = []
    diag_files = []

    # Parse command line options
    try:
        (opts, args) = getopt.getopt(argv[1:], "hn:d:")
    except getopt.GetoptError as err:
        print >>sys.stderr, str(err)
        usage(progname)
    for opt, arg in opts:
        if opt == '-d':
            if arg.find('(') >= 0 or arg.find('[') >= 0:
                # It's a diagram string
                diag_strs.append(arg)
            else:
                # It's a diagram filename
                diag_files.append(arg)
        elif opt == '-n':
            n_chords = int(arg)


    # Validate command line options
    if n_chords != 0 and (len(diag_strs) > 0 or len(diag_files) > 0):
        usage(progname, "Error: Options -n and -d are mutually exclusive")
    if n_chords == 0 and len(diag_strs) == 0 and len(diag_files) == 0:
        usage(progname, "Error: Option '-n' or '-d' must be specified")


    # TODO: Finish support for cmdline diagrams
    # Convert diagram strings to diagrams
    diagrams = []
    if len(diag_strs) > 0:
        for diag_str in diag_strs:
            # TODO: regex validate diag str to prevent code injection attack
            try:
                diagrams.append(eval(diag_str))
                if n_chords < len(diagrams[-1]):
                    n_chords = len(diagrams[-1])
            except Exception:
                usage(progname,"Error: Invalid diagram:" + diag_str)

    # Choose a diagram generator
    diag_gen = None
    if n_chords > 0:
        diag_gen = get_diag_from_gen_all(n_chords)
    elif len(diag_files) > 0:
        diag_gen = get_diags_from_file(diag_files, diag_fmt_key)
    else:
        print >>sys.stderr, "No diag_gen found"
        sys.exit(1)

    # Do the work
    count = 0
    for diagram in get_diags_from_file(diag_files, diag_fmt_key):
        count += 1
        print "{}: {}".format(count, diagram)
        if count > 10:
            sys.exit(1)
    for diagram in gen_all_123free_planarable_diags(diag_gen):
        print "Planarable:", diagram


if __name__ == "__main__":
   main(sys.argv)
