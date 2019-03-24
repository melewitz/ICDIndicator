#!/usr/bin/env python

import sys
import getopt
import time
from multiprocessing import cpu_count

from ICDIndicator import gen_possible_diagrams
from ICDIndicator import get_possible_chords
from ICDIndicator import contains_two_move, contains_three_move
from ICDIndicator import chord_length
from ICDIndicator import get_other_node
from ICDIndicator import get_compressed_diagram

def timestamp():
    return time.strftime("%m/%d/%Y %H:%M:%S")

def diagram_filter(diagram):
    '''
    Filter function that gets passed into gen_possible_diagrams to filter
      at generation time.
    The filter applies two basic tests:
    1. Skip diagrams containing 2 or 3 moves
    2. Skip if other-ends of chords with adjacent nodes are 1 or 2 nodes apart
       This test is known as the parallel with defect 3 test.

    Closure arguments:
        filter_two_moves: Filter out two moves when True
        filter_three_moves: Filter out three moves when True
    Arguments:
        diagram: Diagram to check.  Assumption: diagram is compressed, i.e.
                 all 1..2*n_chords nodes are part of a chord.
    Returns:
        True (keep diagram) if the diagram meets the requirements
        False (discard diagram) if the diagram fails either test
    Raises:
        None
    '''

    # Allow access to globals set in main.  Necessary with multiprocessing.Pool
    global filter_two_moves
    global filter_three_moves
    global max_parallel_defect

    # Remove diagram nodes with no chord
    compressed_diag = get_compressed_diagram(diagram)

    # Filter out 2 and 3 moves.  One moves are pre-filtered in chord list
    if (filter_two_moves and contains_two_move(compressed_diag) or
        filter_three_moves and contains_three_move(compressed_diag)):
        return False # Skip diagram

    # Filter out parallel chords with defect
    chords_by_node = { node:chord for chord in diagram for node in chord}
    n_nodes = len(chords_by_node)
    for node1 in range(1, n_nodes+1):
        node2 = node1 % n_nodes + 1 # Adjacent chord
        chord1 = chords_by_node[node1]
        chord2 = chords_by_node[node2]
        if chord_length((get_other_node(chord1, node1),
                get_other_node(chord2, node2)), n_nodes) < max_parallel_defect:
            return False # Skip diagram
    return True # Keep diagram


def usage(progname, msg=""):
    ''' Prints the program usage help-text, followed by any passed msg,
        and terminates
    '''
    usage_msg = '''
Print the list of all possible diagrams, with the specified number of chords,
that meet all criteria specified on the command line.

  usage: {} -n <n-chords> [<options>..] [<diagram-file>...]

      Where valid options are:
        [-1] [-2] [-3] [-l <min-chord-len>] [-s <scale>]
        [-d <max-parallel-defect>] [-p <count>] [-h]
        [-c <max-cpus>] [-b <block-size> -i <block-item>]
        [-f <base-filename>]

-n <n-chords>: Requests testing of all diagrams with the specified chord count.
              Not valid in combination with "-d".
-l <min-chord-length>: Default=1.  Chords with less than min-chord-length will
              not be included in any generated diagrams.
-1:           Do not generate diagrams containing Reidemeister one moves.
              As an optimization, chords with adjacent nodes are removed
              from the list of all possible chords prior to diagram generation.
              This option reduces the total number of generated diagrams, it
              does not merely filter diagrams, but prevents generation of
              non-qualifying diagrams.
              Note: This option overrides min-chord-length.  When specified, the
              min-chord-length will be adjusted to be at least 2.
-2:           Do not print diagrams containing Reidemeister two moves
-3:           Do not print diagrams containing Reidemeister three moves
-d <max-parallel-defect>: Default=1. Specifies the maximum node distance between
              the complement nodes of two chords with adjacent nodes.  For
              example, a diagram containing the two chords (1, 8) and (2, 11),
              will only be generated with a max-parallel-defect of 3 or greater.
-s <scale>:   Default=1. Factor to multiply by each node when generating to
              leave room between nodes for additional extension chords. A scale
              factor of 2, leaves a single open node between each node with a
              chord.
-c <max-cpus>: Maximum number of CPUs (processes) on the current machine.
              Max-CPUs defaults to 1. A value of zero uses all CPU cores as
              returned by multiprocessing.cpu_count(). For larger diagrams,
              max-CPUs=0 results in the best performance, and will use 100% of
              each CPU core.  When multiple processes are created, each process
              is assigned an initial chord, and constructs all diagrams starting
              with the assigned chord , i.e. (1,3) vs (1,4) vs (1,5). When
              max-CPUs != 1, output is written to the file
              "<base-filename>_<assigned-chord>", i.e. base-1_3 vs base-1_4.
              When max-cpus==1, output diagrams are written to stdout.
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
-f <base-filename>: Default="".  Base filename that is prepended to the assigned
              chord as "<base-filename>-<chord>".  For example, with a
              base-filename of "/home/elewitz/diags", the file for diagrams with
              an initial chord of (1,4) is "/home/elewitz/diags-1_4".
-p <count>: Default=100000.  Print status output to stderr every <count> number
              of generated diagrams.  The number of diagrams found matching the
              specified filters is also displayed.  A count of zero disable
              status output.
-h:           Print this usage help-text.

  Examples:
    gen_diagrams.py -n 8 > 8_chord.diags
        Write all 8-chord diagrams to the file 8_chord.diags.
    gen_diagrams.py -n 8 -1 -2 -3 -p 0 | find_planarable.py -p 100 >out.diags
        This unix pipeline generates all 8-chord diagrams without one, two, or
        three moves and prints all diagram planar diagrams to the file
        out.diags.  A status line is written to stderr every 100 diagrams
        checked for planarity.


  usage: {} -n <n-chords> [<options>..] [<diagram-file>...]

      Where valid options are:
        [-1] [-2] [-3] [-l <min-chord-len>] [-s <scale>]
        [-d <max-parallel-defect>] [-p <count>] [-h]
        [-c <max-cpus>] [-b <block-size> -i <block-item>]
        [-f <base-filename>]

'''
    print >>sys.stderr, usage_msg.format(progname, progname)
    print >>sys.stderr, msg
    sys.exit(1)

# Globals used by diagram_filter closure.  Necessary with multiprocessing.Pool
global filter_one_moves
global filter_two_moves
global filter_three_moves
global max_parallel_defect

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

    global filter_one_moves
    global filter_two_moves
    global filter_three_moves
    global max_parallel_defect

    filter_one_moves = False
    filter_two_moves = False
    filter_three_moves = False
    max_parallel_defect = 1

    # Parse command line options
    try:
        (opts, _) = getopt.getopt(argv[1:], "hn:s:l:p:c:b:i:f:123d:")
    except getopt.GetoptError as err:
        print >>sys.stderr, str(err)
        usage(progname)
    for opt, arg in opts:
        if opt == '-b':
            block_size = int(arg)
        elif opt == '-c':
            max_cpus = int(arg)
        elif opt == '-d':
            max_parallel_defect = int(arg)
        elif opt == '-f':
            base_fname = arg
        elif opt == '-h':
            usage(progname)
        elif opt == '-i':
            block_item = int(arg)
        elif opt == '-l':
            min_chord_length = int(arg)
        elif opt == '-n':
            n_chords = int(arg)
        elif opt == '-p':
            print_status = int(arg)
        elif opt == '-s':
            scale = int(arg)
        elif opt == '-1':
            filter_one_moves = True
        elif opt == '-2':
            filter_two_moves = True
        elif opt == '-3':
            filter_three_moves = True


    # Validate command line options
    if n_chords == 0:
        usage(progname, "Error: Missing required option: -n")
    if block_size <= 0:
        usage(progname, "Error: Block size must be greater than zero: {}".format(block_size))
    if block_item <= 0:
        usage(progname, "Error: Block item must be greater than zero: {}".format(block_item))
    if min_chord_length <= 0:
        usage(progname, "Error: Minimum chord length must be greater than zero: {}".format(min_chord_length))
    if n_chords <= 0:
        usage(progname, "Error: Number of chords must be greater than zero: {}".format(n_chords))
    if scale <= 0:
        usage(progname, "Error: Scale must be greater than zero: {}".format(scale))
    if print_status <= 0:
        usage(progname, "Error: Scale must be greater than zero: {}".format(print_status))
    if max_cpus < 0:
        usage(progname, "Error: Max number of CPUs must be zero or larger: {}".format(max_cpus))

    if block_item > block_size:
        usage(progname, "Error: Block item ({}) must be in range 1..blocksize({})".format(block_item, block_size))

    if filter_one_moves and min_chord_length < 2:
        min_chord_length = 2 # Honor filter_one_moves over min_chord_length

    if max_cpus == 0:
        max_cpus = cpu_count() # Default to using all CPUs

    # Create possible chords structure for base diagram
    diag_node_list = range(scale, n_chords*2*scale+1, scale)
    diag_possible_chords = get_possible_chords(node_list=diag_node_list)

    # Remove chords that are too short, i.e. length less than min_chord_len
    possible_chords_filtered = []
    for row in diag_possible_chords:
        new_row = [chord for chord in row
           if min_chord_length <= chord_length(chord, n_nodes=n_chords*2*scale)]
        if new_row:
            possible_chords_filtered.append(new_row)

    # Do the work
    print >>sys.stderr, "Generating all {}-chord diagrams".format(n_chords)
    gen_possible_diagrams(
         n_chords, possible_chords_filtered, diagram_filter=diagram_filter,
         print_status=print_status, max_cpus=max_cpus, base_fname=base_fname,
         block_size=block_size, block_item=block_item)


if __name__ == "__main__":
    main(sys.argv)
