#!/usr/bin/env python

import sys
import getopt
import time
from itertools import combinations
from multiprocessing import Pool, cpu_count

from ChordDiagram.Diagram import Diagram
from ICDIndicator import gen_possible_diagrams
from ICDIndicator import get_possible_chords
from ICDIndicator import get_invariant_chords_for_diagram
from ICDIndicator import chord_length
from ICDIndicator import get_compressed_diagram
from ICDIndicator import contains_one_move, contains_two_move, contains_three_move

def timestamp():
    return time.strftime("%m/%d/%Y %H:%M:%S")

def diagram_filter(orig_sparse_diag, extension_chord, extended_sparse_diag):
    diag = Diagram(extended_sparse_diag)
    diag.compress()
    if (contains_one_move(diag) or
        contains_three_move(diag)):
        return False # Skip this diagram
    return True # Use this diagram

def check_diagram(sparse_diagram, ext_possible_chords, ext_min, ext_max):

    # Skip diagrams with 1, 2 or 3 moves
    compressed_diag = get_compressed_diagram(sparse_diagram)
    if (contains_one_move(compressed_diag) or
        contains_two_move(compressed_diag) or
        contains_three_move(compressed_diag)):
        return (sparse_diagram, [], [])

    # Find the permitted single chord extensions
    invariant_chords = get_invariant_chords_for_diagram(
            sparse_diagram, ext_possible_chords, diagram_filter=diagram_filter,
            doScale=False)
    if len(invariant_chords) == 0:
        # Skip diagrams with no invariant chords
        return (sparse_diagram, invariant_chords, [])

    # Test planarability of sparse_diag plus combinations of min..max chords
    planarable_extension_sets = []
    for n_extensions in range(ext_min, ext_max+1):
        for extensions in combinations(invariant_chords, n_extensions):
            # Skip extension chord pair if they share any nodes
            uniq_nodes = {node for ext in extensions for node in ext}
            if len(uniq_nodes) != n_extensions * 2:
                continue
            diag = Diagram(sparse_diagram + list(extensions))
            if diag.is_planarable():
                planarable_extension_sets.append((timestamp(), extensions))

    return (sparse_diagram, invariant_chords, planarable_extension_sets)

# Globals used by Multiprocessing.Pool's init function below
ext_possible_chords = None
ext_min = 0
ext_max = 0

def init(_ext_possible_chords, _ext_min, _ext_max):
    '''Initializer for the Multiprocessing.Pool to ensure access to the shared
       resources by all processes
    '''
    # Save allocated Counter object globally
    global ext_possible_chords
    global ext_min
    global ext_max

    # Save values for reference by pool function passed to imap
    ext_possible_chords = _ext_possible_chords
    ext_min = _ext_min
    ext_max = _ext_max

def check_diagram_wrapper(sparse_diagram):
    '''Wrapper function that's aware of the globals to make a proper call
       to check_diagram, where check_diagram isn't aware of globals.
    '''
    global ext_possible_chords
    global ext_min
    global ext_max
    return check_diagram(sparse_diagram, ext_possible_chords, ext_min, ext_max)

def gen_all_diagrams(n_chords, ext_min, ext_max):

    # Create possible chords structure for sparse base diagram
    diag_node_list = range(2, n_chords*4+1, 2) # 1st 2n even numbers: 1..4n
    diag_possible_chords = get_possible_chords(node_list=diag_node_list)

    def chord_filter_len_2(chord):
        '''Goal: Filter length 2 chords.
           Filters return True to use a node, False to discard.
           Note: Uses closure for n_chords
        '''
        return chord_length(chord, n_chords) != 2

    # Create possible chords structure for extension chords
    ext_node_list = range(1, n_chords*4, 2) # 1st 2n odd numbers: 1..4n
    ext_possible_chords = get_possible_chords(node_list=ext_node_list,
                                              filter=chord_filter_len_2)

    # Begin searching, use process pool to check diagrams - parallel checking
    CPUs = cpu_count()
    print "Using {} of {} CPUs".format(CPUs, cpu_count())
    pool = Pool(CPUs, initializer=init, initargs=(
                                      ext_possible_chords, ext_min, ext_max))
    iterator_chunk_size = 1
    for (sparse_diag, invariant_chords, extensions) in pool.imap(
                        check_diagram_wrapper,
                        gen_possible_diagrams(n_chords, diag_possible_chords),
                        iterator_chunk_size):
        if invariant_chords and extensions:
            yield (sparse_diag, invariant_chords, extensions)

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

-x <ext-min>: (required) Specifies the number of extension chords to add to the
              base diagram for testing.  When used in conjunction with the "-y"
              option, "-x <ext-min" defines the minimum range on the number of
              extension chords to add.

-y <ext-mac>: (optional) Specifies the high end of a range of chord counts
              (<ext-min>...<ext-max>) to test against the base diagram.


  usage: %s {-n <nchords> | -d '<diag>'} -x <ext-min> [-y <ext-max]

'''
    print >>sys.stderr, usage_msg % (progname)
    print >>sys.stderr, msg
    sys.exit(1)

def main(argv):
    "Process command line arguments and kick things off"
    progname = argv[0].split('/')[-1]
    n_chords = 0  # Cmdline option '-n'
    ext_min = 0
    ext_max = 0
    diag_strs = []

    # Parse command line options
    try:
        (opts, args) = getopt.getopt(argv[1:], "hn:x:y:d:")
    except getopt.GetoptError as err:
        print >>sys.stderr, str(err)
        usage(progname)
    for opt, arg in opts:
        if opt == '-d':
            diag_strs.append(arg)
        if opt == '-n':
            n_chords = int(arg)
        elif opt == '-x':
            ext_min = int(arg)
        elif opt == '-y':
            ext_max = int(arg)

    # Validate command line options
    if n_chords != 0 and len(diag_strs) > 0:
        usage(progname, "Error: Options -n and -d are mutually exclusive")
    if n_chords == 0 and len(diag_strs) == 0:
        usage(progname, "Error: Option '-n' or '-d' must be specified")

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

    if n_chords < 1:
        print "n_chords:", n_chords
        usage(progname, "Error: Number of chords must be greater than zero: {}".format(n_chords))
    if ext_min and ext_min < 1:
        usage(progname, "-x (extension count low-end) must be > 0")
    if ext_max and ext_max < ext_min:
        usage(progname, "-y (extension count high-end) must be >= -x")
    if not ext_min:
        usage(progname, "Missing required option: -x (ext_min)")
    if ext_min > n_chords or ext_max > n_chords:
        usage(progname, "Entire low..high extension range must be <= n_chords")

    # Default unspecified options
    if not ext_max:
        ext_max = ext_min # Only check the one extension count


    if ext_min != ext_max:
        print "Check {}-chord diagrams using {} to {} extension chords".format(
                                                   n_chords, ext_min, ext_max)
    else:
        print "Check {}-chord diagrams using {} extension chords".format(
                                                             n_chords, ext_min)

    # Do the work


    last_sparse_diagram = None
    for (sparse_diagram, inv_chords, extensions) in gen_all_diagrams(
                                                  n_chords, ext_min, ext_max):
        if len(extensions) == 0:
            continue # No interesting extensions found

        # Print diagram header if needed
        if sparse_diagram != last_sparse_diagram:
            print
            print timestamp()
            print "Diagram:", sparse_diagram
            print "Invariant chords:", inv_chords
            for (timestamp_str, ext_chord) in extensions:
                print "{} Planarable: {}".format(timestamp_str, ext_chord)


if __name__ == "__main__":
    main(sys.argv)
