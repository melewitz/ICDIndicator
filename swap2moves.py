#!/opt/local/bin/python

import sys
import getopt
import time
from multiprocessing import Pool, cpu_count

from ChordDiagram.Diagram import Diagram
from ICDIndicator import gen_possible_diagrams
from ICDIndicator import get_possible_chords
from ICDIndicator import contains_one_move, contains_two_move, contains_three_move
from ICDIndicator import get_two_moves
from ICDIndicator import apply_two_moves

def timestamp():
    return time.strftime("%m/%d/%Y %H:%M:%S")

def check_swap2move(diagram):
    diagram_planarable = False
    swap_diag_planarable = False
    swap_diag = []
    # Skip diagrams with 1 or 3 moves
    if (contains_one_move(diagram) or
        contains_three_move(diagram)):
        return (diagram, diagram_planarable, swap_diag, swap_diag_planarable)

    # Keep diagrams with exactly one 2-move
    two_moves = get_two_moves(diagram)
    if len(two_moves) != 1:
        return (diagram, diagram_planarable, swap_diag, swap_diag_planarable)

    # Do the two move - swap one set of adjacent endpoints
    swap_diag = apply_two_moves(diagram, two_moves)

    diagram_planarable = Diagram(diagram).is_planarable()
    swap_diag_planarable = Diagram(swap_diag).is_planarable()

    return (diagram, diagram_planarable, swap_diag, swap_diag_planarable)

def gen_all_swap2move_diags(n_chords):

    # Create possible chords structure for sparse base diagram
    diag_node_list = range(1, n_chords*2+1) # 1..n_chords*2
    diag_possible_chords = get_possible_chords(node_list=diag_node_list)

    # Begin searching, use process pool to check diagrams - parallel checking
    CPUs = cpu_count()
    print "Using {} of {} CPUs".format(CPUs, cpu_count())
    pool = Pool(CPUs)
    iterator_chunk_size = 1
    for result in pool.imap(
          check_swap2move,
          gen_possible_diagrams(n_chords, diag_possible_chords),
          iterator_chunk_size):
        if result[1] or result[3]:
            yield result

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

    # Parse command line options
    try:
        (opts, args) = getopt.getopt(argv[1:], "hn:d:")
    except getopt.GetoptError as err:
        print >>sys.stderr, str(err)
        usage(progname)
    for opt, arg in opts:
        if opt == '-d':
            diag_strs.append(arg)
        elif opt == '-n':
            n_chords = int(arg)


    # Validate command line options
    if n_chords != 0 and len(diag_strs) > 0:
        usage(progname, "Error: Options -n and -d are mutually exclusive")
    if n_chords == 0 and len(diag_strs) == 0:
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

    if n_chords <= 0:
        usage(progname, "Error: Number of chords must be greater than zero: {}".format(n_chords))


    def fmt_label(planarable):
        return "(Planarable)" if planarable else "(Not Planarable)"

    # Do the work
    print "Processing all {}-chord diagrams".format(n_chords)
    for diag, diag_planar, swap_diag, swap_planar in gen_all_swap2move_diags(n_chords):
        print "Diagram: {} {}".format(diag, fmt_label(diag_planar))
        print "Swapped: {} {}".format(swap_diag, fmt_label(swap_planar))


if __name__ == "__main__":
   main(sys.argv)
