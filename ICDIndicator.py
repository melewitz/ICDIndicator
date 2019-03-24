#!/usr/bin/env python

import sys
import itertools
from copy import deepcopy
from ChordDiagram.Utility import timestamp, adjacent

def error(msg):
    sys.stderr.write(msg)
    sys.stderr.write('\n')
    exit(1)

def chord_length(chord, n_nodes):
    '''Returns the distance between the chord nodes
       Size is the number of nodes in the diagram
       Chord length is never over 1/2 the number nodes as it's
         then shorter to go the other way around the diagram.
    '''
    delta = (chord[0]-chord[1]) % n_nodes
    if delta > n_nodes // 2:
        delta = n_nodes - delta
    return delta

def get_other_node(chord, node):
    '''Returns the chord's node that was not specified, also known as the
       complement node.
    '''
    if chord[0] == node:
        return chord[1]
    elif chord[1] == node:
        return chord[0]
    else:
        raise Exception("Node {} not found in chord {}".format(node, chord))

def contains_one_move(diagram):
    '''Return true if diagram contains a one-move.
       i.e. if the nodes of any chord are adjacent'''
    node_count = len(diagram) * 2
    for chord in diagram:
        if adjacent(chord[0], chord[1], node_count):
            return True  # Found a one-move
    return False

def contains_two_move(diagram):
    '''Return true if diagram contains a two-move.
       i.e. if any two chords have adjacent nodes'''
    n_chords = len(diagram)
    n_nodes = n_chords * 2

    # Create dictionary of chords indexed by node
    chord_by_node = {}
    for chord in diagram:
        chord_by_node[chord[0]] = chord
        chord_by_node[chord[1]] = chord

    chords_seen = []
    for node1 in range(1, n_nodes+1): # Node number
        node2 = node1 % n_nodes + 1  # Node number of next adjacent chord

        chord1 = chord_by_node[node1]
        chord2 = chord_by_node[node2]

        if chord1 in chords_seen and chord2 in chords_seen:
            continue # Skip, it's jut the other end of chords already checked
        chords_seen.append(chord1)
        chords_seen.append(chord2)

        # Is it a 2-move?
        # By design low ends are adjacent, check high ends
        if adjacent(get_other_node(chord1,node1), get_other_node(chord2, node2), n_nodes):
            return True
    return False

def get_two_moves(diagram):
    '''Return list of chord pairs that form two moves.
       i.e. if any two chords have adjacent nodes'''
    n_chords = len(diagram)
    n_nodes = n_chords * 2

    # Create dictionary of chords indexed by node
    chord_by_node = {}
    for chord in diagram:
        chord_by_node[chord[0]] = chord
        chord_by_node[chord[1]] = chord

    chords_seen = []
    two_moves = []
    for node1 in range(1, n_nodes+1): # Node number
        node2 = node1 % n_nodes + 1  # Node number of next adjacent chord

        chord1 = chord_by_node[node1]
        chord2 = chord_by_node[node2]

        if chord1 in chords_seen and chord2 in chords_seen:
            continue # Skip, it's jut the other end of chords already checked
        chords_seen.append(chord1)
        chords_seen.append(chord2)

        # Is it a 2-move?
        # By design low ends are adjacent, check high ends
        if adjacent(chord1[1], chord2[1], n_nodes):
            two_moves.append([chord1, chord2])
    return two_moves

def apply_two_moves(diagram, two_moves):
    diag = deepcopy(diagram) # Copy for edit
    for two_move in two_moves:
        chord1 = diag[diag.index(two_move[0])]
        chord2 = diag[diag.index(two_move[1])]

        # Swap one pair of adjacent nodes between the two chords
        if adjacent(chord1[0], chord2[0], len(diagram)*2):
            chord1[0], chord2[0] = chord2[0], chord1[0]
        else:
            chord1[0], chord2[1] = chord2[1], chord1[0]
    return diag

def contains_three_move(diagram):
    '''Return true if diagram contains a one-move.
       i.e. if three cords form an adjacency loop - our put another way:
       each chord node is adjacent to another chord's node to form a
       closed loop containing three chords.'''
    n = len(diagram) * 2
    triples = itertools.combinations(diagram, 3)
    for (a, b, c) in triples:

#   Full enumeration
#     1   a0c0 a1b0 b1c1  starting point
#     2   a0c0 a1b1 b0c1  1 swap b
#     3   a0c1 a1b0 b1c0  1 swap c
#     4   a0c1 a1b1 b0c0  1 swap b and c
#
#     5   a1c0 a0b0 b1c1  1 swap a
#     6   a1c0 a0b1 b0c1  5 swap b
#     7   a1c1 a0b0 b0c0  5 swap c
#     8   a1c1 a0b1 b0c0  5 swap b and c

        adj = adjacent # Shorthand for adjacent()

        if ( (adj(a[0],c[0],n) and adj(a[1],b[0],n) and adj(b[1],c[1],n)) or
             (adj(a[0],c[0],n) and adj(a[1],b[1],n) and adj(b[0],c[1],n)) or
             (adj(a[0],c[1],n) and adj(a[1],b[0],n) and adj(b[1],c[0],n)) or
             (adj(a[0],c[1],n) and adj(a[1],b[1],n) and adj(b[0],c[0],n)) or

             (adj(a[1],c[0],n) and adj(a[0],b[0],n) and adj(b[1],c[1],n)) or
             (adj(a[1],c[0],n) and adj(a[0],b[1],n) and adj(b[0],c[1],n)) or
             (adj(a[1],c[1],n) and adj(a[0],b[0],n) and adj(b[1],c[0],n)) or
             (adj(a[1],c[1],n) and adj(a[0],b[1],n) and adj(b[0],c[0],n)) ):
            return True

    return False

def get_possible_chords(chord_count=None, node_list=None, filter=None):
    ''' For node_list=(1, 2, 3, 4), return list of lists like:
        [ [(1,2), (1,3), (1,4)],
                 [(2,3), (2,4)],
                        [(3,4)] ]
    '''
    # Default node_list, if one is not supplied
    if ( (chord_count == None and node_list == None) or
         (chord_count != None and node_list != None) ):
        error('get_possible_chords expects exactly one of: chord_count or node_list')
    if node_list == None:
        nodes = range(1, 2*chord_count+1) # Each chord has 2 nodes
    else:
        nodes = node_list
        chord_count = len(nodes)

    # Enumerate the chords - allowing for gaps in node numbers
    chords = []
    for i in xrange(0, len(nodes)-1):
        chord_list = []
        for j in xrange(i+1, len(nodes)):
            chord = [nodes[i], nodes[j]]

            # Apply chord filter
            if filter is not None and not filter(chord):
                continue

            chord_list.append(chord)
        chords.append(chord_list)

    return chords



def gen_possible_diagrams(
            n_chords, possible_chords=None, diagram_filter=None,
            print_status=100000, max_cpus=1,
            base_fname=None, block_size=1, block_item=1):
    ''' Generate all n_chord diagrams.
        Status output is written to stderr.

        Arguments:
          n_chords: Number of chords in generated diagrams.
                    possible_chords: Structure created by gen_possible_chords.
          diagram_filter: Function reference.  Generated diagrams are only
                    returned if diagram_filter(diagram) returns True.
                        Prototype for diagram filter:
                          filter(diagram)
                          Returns True: Keep diagram, False: Skip diagram
          print_status: Number of lines between printing status output.
          max-cpus: Maximum number of CPUs (processes) on the current machine.
              Max-CPUs defaults to 1. A value of zero uses all CPU cores as
              returned by multiprocessing.cpu_count(). For larger diagrams,
              max-CPUs=0 results in the best performance, and will use 100% of
              each CPU core.  When multiple processes are created, each process
              is assigned an initial chord, and constructs all diagrams starting
              with the assigned chord , i.e. (1,3) vs (1,4) vs (1,5). When
              max-CPUs != 1, output is written to the file
              "<base-filename>_<assigned-chord>", i.e. base-1_3 vs base-1_4.
              When max-cpus==1, output diagrams are written to stdout.
          block-size: Default=1. When distributing the work between multiple
              running instances, this is the total number of instances planned
              to run concurrently.
              Block-size is typically used to distribute the load over multiple
              machines.  On a single machine, the max-cpus option is optimally
              efficient.
          block-item: Default=1. When distributing the work between multiple
              running instances, this specifies which slice of each block is to
              be processed by this instance.
              Example: block-size=4, block-item=3 causes this instance to
              process the 3rd item of each 4 item block, i.e. diagram numbers:
              3, 7, 11, ...
              This option should always be specified with option block-size.
          base-fname: Default="".  Base filename that is prepended to the
              assigned chord as "<base-fname>-<chord>".  For example, with a
              base-filename of "/home/elewitz/diags", the file for diagrams with
              an initial chord of (1,4) is "/home/elewitz/diags-1_4".

    '''
    if print_status:
        print >>sys.stderr, "{} Start generating diagrams".format(timestamp())
    if possible_chords is None:  # Auto-generate nodes list based on n-chords
        possible_chords = get_possible_chords(n_chords)

    # Multiprocessing version or not?
    add_chords = _add_chords_to_diag if max_cpus == 1 else _add_chords_to_diag_mp
    return add_chords(
          n_chords, possible_chords, max_cpus=max_cpus,
          diagram_filter=diagram_filter,
          base_fname=base_fname, block_size=block_size, block_item=block_item)

def _add_chords_to_diag(
            n_chords, possible_chords, partial_diagram=[], used_eps=set(),
            max_cpus=1, diagram_filter=None, base_fname=None, out_file=None,
            block_size=1, block_item=1, indent=0):
    # Recursively constructs all diagrams starting the chords in partial_diagram.
    #
    # This is used directly for the non-multi-processing version, and is
    # called from the multi-processing wrapper to do the work within a single
    # process.
    used_chord_from_level = False
    for chord in possible_chords[0]:
        # Make a new copy of the list so we can edit without destroying original
        current_diagram = list(partial_diagram)
        current_used_eps = set(used_eps)

        # Skip chord if either node is already used
        (ep1, ep2) = chord
        if ep1 in current_used_eps:
            break # All chords at level share same ep1, skip entire level

        if ep2 in current_used_eps:
            continue  # Try next chord

        # Not used, so add chord to diagram and mark nodes as used
        current_diagram.append(chord)
        current_used_eps.add(ep1)
        current_used_eps.add(ep2)

        # Holding a complete diagram, i.e. holding n chords?
        if len(current_diagram) == n_chords:
            used_chord_from_level = True
            if (not diagram_filter or diagram_filter(current_diagram)):
                print >>out_file, current_diagram
        elif len(possible_chords) > 1: # More levels to choose from?
            # Add more chords from deeper levels
            used_chord_from_level = _add_chords_to_diag(
                    n_chords, possible_chords[1:], current_diagram,
                    current_used_eps, diagram_filter=diagram_filter,
                    out_file=out_file)

    # Add diagrams that don't use current level (possible_chords[0])
    if not used_chord_from_level and len(possible_chords) > 1:
        # More levels to choose from
        used_chord_from_level = _add_chords_to_diag(
                    n_chords, possible_chords[1:], partial_diagram, used_eps,
                    diagram_filter=diagram_filter, out_file=out_file)

    return used_chord_from_level

# Globals required for multiprocessing.Pool
_n_chords = 0
_possible_chords = []
_diagram_filter = None
_out_files = {}

def _add_chords_to_diag_wrapper(chord):
    # Runs non-multi-processing add_chords for diags starting with specified chord
    # The odd globals structure is requied to pass parameters when using
    # multiprocessing.Pool.
    used_eps = set()
    used_eps.add(chord[0])
    used_eps.add(chord[1])
    out_file = _out_files[str(chord)]
    print >>sys.stderr, "{} Starting chord: {}".format(timestamp(), chord)
    return _add_chords_to_diag(
            _n_chords, _possible_chords, [chord], used_eps, out_file=out_file,
            diagram_filter=_diagram_filter)


def _add_chords_to_diag_mp(
            n_chords, possible_chords, partial_diagram=[], used_eps=set(),
            max_cpus=1, diagram_filter=None, base_fname=None,
            block_size=1, block_item=1, indent=0):
    "Kicks off the multi-processing support for add_chords"
    from multiprocessing import Pool, cpu_count

    global _n_chords
    global _possible_chords
    global _diagram_filter
    global _out_files
    _n_chords = n_chords
    _possible_chords = possible_chords[1:]
    _diagram_filter = diagram_filter

    # Slice current level chords by block size/item
    if block_size > 1:
        print >>sys.stderr, "Processing item {} of each {} item block".format(block_item, block_size)
        chords = possible_chords[0][block_item-1: len(possible_chords[0]): block_size]
    else:
        chords = possible_chords[0]

    # Setup output stream for each 1st level chord (each individual process)
    for chord in chords:
        fname = "{}_{}-{}_{}".format(base_fname, n_chords, chord[0], chord[1])
        _out_files[str(chord)] = open(fname, 'w')

    # Create pool at requested size
    if max_cpus > 1:
        print >>sys.stderr, "Using {} of {} processors".format(max_cpus, cpu_count())
    pool = Pool(max_cpus)
    for _ in pool.imap(_add_chords_to_diag_wrapper, chords):
        pass # Results are written to file when found, not passed back here

def get_rotated_diagram(diagram, rotations):
    "Return the input diagram rotated by <rotations> nodes."
    diag = []
    n = len(diagram) * 2
    rots = rotations - 1
    for chord in diagram:
        c = [(chord[0] + rots) % n + 1,
             (chord[1] + rots) % n + 1]
        if c[1] < c[0]:
            (c[1], c[0]) = c
        diag.append(c)
    return get_sorted_diagram(diag)

def get_compressed_diagram(sparse_diagram):
    '''Return a diagram equal to the specified sparse_diagram, but with the
       nodes renumbered to remove nodes that are not part of a chord.
    '''
    # Create ordered list of used nodes
    nodes_set = set()
    for chord in sparse_diagram:
        nodes_set.add(chord[0])
        nodes_set.add(chord[1])

    # Create map of original ep to new ep number
    i = 1
    ep_map = {}
    for ep in sorted(nodes_set):
        ep_map[ep] = i
        i += 1

    # Create new compact diagram with translated nodes
    diag = []
    for chord in sparse_diagram:
        diag.append([ep_map[chord[0]], ep_map[chord[1]]])

    return diag

def get_sorted_diagram(diagram):
    "Return equivalent diagram with the chords in order by their 1st node."
    def get_chord_key(chord):
        return chord[0]
    return sorted(diagram, key=get_chord_key)

def equal_diagrams(diag1, diag2):
    '''Returns True if diag1 == diag2.  i.e. same chords, any order'''
    if len(diag1) != len(diag2):
        return False
    for i in xrange(0, len(diag1)):
        if diag1[i][0] != diag2[i][0] or diag1[i][1] != diag2[i][1]:
            return False
    return True

def equal_rotated_diagrams(diag1, diag2):
    "Return True if diag2 can be rotated to make it equal to diag1."
    if len(diag1) != len(diag2):
        return False

    for i in xrange(0, len(diag1)*2):
        if equal_diagrams(diag1, get_rotated_diagram(diag2, i)):
            return True

    return False

def get_scaled_diagram(diagram, factor=2):
    "Scale all nodes by factor to allow for additional chords"
    diag = []
    for chord in diagram:
        diag.append( [chord[0] * factor, chord[1] * factor] )
    return diag

def check_diagram_invariance(diagram, ext_chord, doPrint=False, doScale=True):
    '''Add chord to diagram and return True if no 1 or 3 moves are found
       Assumes input diagram is already scaled, doesn't check for node conflicts'''
    if doScale == True:
        scaled_diag = get_scaled_diagram(diagram)
    else:
        scaled_diag = diagram
    extended_diag = list(scaled_diag) # Copy before editing
    extended_diag.append(ext_chord)
    compressed_diag = get_compressed_diagram(extended_diag)
    sorted_diag = get_sorted_diagram(compressed_diag)

    if doPrint:
        print "scaled diag:", scaled_diag
        print "ext chord:", ext_chord
        print sorted_diag, "one:%s\ttwo:%s\tthree:%s" % (
            contains_one_move(sorted_diag), contains_two_move(sorted_diag), contains_three_move(sorted_diag))

    if (contains_one_move(sorted_diag) or
        contains_three_move(sorted_diag) ):
        return False

    return True

def display_moves(diagrams):
    if len(diagrams) == 0:
        print "-- no qualifying diagrams --"
    for diag in diagrams:
        print diag, "one:%s\ttwo:%s\tthree:%s" % (
            contains_one_move(diag), contains_two_move(diag), contains_three_move(diag))

def get_invariant_chords_for_diagram(
         diagram, possible_chords=None, doScale=True, diagram_filter=None):
    '''Generate extension chords to test in each diagram
       Extensions use only odd nodes
       Diagram will use only even nodes - ensures no collisions

       Prototype for diagram filter:
         filter(orig_sparse_diag, extension_chord, extended_sparse_diag)
    '''

    if doScale == True:
        scaled_diag = get_scaled_diagram(diagram)
    else:
        scaled_diag = diagram

    if possible_chords is None:
        node_list = range(1, len(diagram)*4, 2) # Odd numbers 1..2*node_count
        possible_ext_chords = get_possible_chords(node_list=node_list)
    else:
        possible_ext_chords = possible_chords

    invariant_chords = [] # List of chords that don't create one, two, or three moves
    for possible_chord_row in possible_ext_chords: # It's not just a list of chords
        for ext_chord in possible_chord_row:

            extended_diag = list(scaled_diag)  # Make a copy, then edit the copy
            extended_diag.append(ext_chord)         # Add the new chord
            extended_diag = get_compressed_diagram(extended_diag) # Remove unused nodes
            extended_diag = get_sorted_diagram(extended_diag) # Reorder

            if (diagram_filter is not None and
                not diagram_filter(scaled_diag, ext_chord, extended_diag)):
                continue

            invariant_chords.append(ext_chord)

    return invariant_chords

def get_symetric_diagram(diagram):
    '''Returns the mirror image diagram reflexive around the axis line between
       nodes 1 and n to between nodes n/2 and n/2+1.'''
    n = len(diagram)*2+1 # one more than number of nodes
    diag = []
    for chord in diagram:
        diag.append((n-chord[1], n-chord[0]))
    diag = get_sorted_diagram(diag)
    return diag

def equal_symetric_diagrams(diag1, diag2):
    "Returns True if the mirror image of diag1 equals any rotation of diag2"
    mirror_diag1 = get_symetric_diagram(diag1)
    return equal_rotated_diagrams(mirror_diag1, diag2)

def fits_into_diagram(inner_diag, outer_diag):
    '''Returns True if inner_diag fits into outer_diag'''

    if len(inner_diag) > len(outer_diag):
        return False

    # Number of nodes that can be skipped/ignored when matching
    skipable = (len(outer_diag) - len(inner_diag)) * 2

    # Check if it fits in any rotated orientation
    odiag = list(outer_diag)
    for _ in xrange(0, len(outer_diag)*2):
        # Create map to quickly determine other chord node and know if it's used
        i_ep_info = {}
        for chord in inner_diag:
                i_ep_info[chord[0]] = {'chord':chord, 'matched':False}
                i_ep_info[chord[1]] = i_ep_info[chord[0]]
        o_ep_info = {}
        for chord in odiag:
                o_ep_info[chord[0]] = {'inner_chord':None, 'matched':False}
                o_ep_info[chord[1]] = o_ep_info[chord[0]]

        if _do_fits_into(inner_diag, 1, odiag, 1, i_ep_info, o_ep_info, skipable):
            return True
        odiag = get_rotated_diagram(odiag, 1) # Rotate before next round in loop

    return False

def _do_fits_into(idiag, inner_next,
                 odiag, outer_next,
                 i_ep_info, o_ep_info,
                 skipable=None):
    '''Match remaining portion if idiag into odiag'''

    while inner_next <= len(idiag)+1 and outer_next<=len(odiag)+1:
        o_matched = o_ep_info[outer_next]['matched']
        i_matched = i_ep_info[inner_next]['matched']

        if  i_matched==True and o_matched==True:
            # Next chord in both inner and outer are matched.  Are they the same chord?
            if o_ep_info[outer_next]['inner_chord'] == i_ep_info[inner_next]['chord']:
                # Yes, same chord - already matched, move to next inner & outer
                inner_next += 1
                outer_next += 1
                continue
            else:
                return False

        if i_matched==False and o_matched==True:
            return False # Next inner chord won't fit into outer diagram

        if i_matched==True and o_matched==False:
            # Skip outer chord hoping to find match on subsequent chord
            if skipable > 0:
                skipable -= 1
                outer_next += 1
                continue
            else:
                return False # They don't match and can't skip any more

        if i_matched==False and o_matched==False:
            if inner_next == len(idiag)*2:
                # All chords matched - we're done - we have a match
                return True

            # Both are available, record the match
            i_ep_info[inner_next]['matched'] = True
            o_ep_info[outer_next]['matched'] = True
            # Note on outer chord which inner chord matched
            o_ep_info[outer_next]['inner_chord'] = i_ep_info[inner_next]['chord']
            inner_next += 1
            outer_next += 1
            continue
    return True

def gen_all_diagram_rotations(diagram, scale=1):
    '''Yield a list of diagrams equivalent to the specified diagram rotated
       through all orientations.
    '''
    if scale == 1:
        diag = list(diagram)
    else:
        diag = get_compressed_diagram(diagram)

    for _ in range(1, len(diagram)*2+1):
        yield get_scaled_diagram(diag, scale)
        diag = get_rotated_diagram(diag, 1)
