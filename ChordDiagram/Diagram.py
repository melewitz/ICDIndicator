from copy import deepcopy

from Chord import Chord
from Span import Span

class Diagram(list):
    "Represents the chord diagram as a list of Chords"

    MAX_NODE_LIMIT = 2**64 # Arbitrarily large number

    def __init__(self, chords):
        super(Diagram, self).__init__()
        self.chords_by_node = {}
        self.init_from_chord_list(chords) # Call reusable initializer

    def init_from_chord_list(self, chords):
        del self[:] # Empty the current chord list
        for chord in chords:
            chord = Chord(chord) # Make a copy, and convert list/tuple to Chord
            self.append(chord)
            # Bookkeeping to allow chord lookup by either node
            self.chords_by_node[chord[0]] = chord
            self.chords_by_node[chord[1]] = chord

    def size(self):
        "Returns the number of chords in the diagram"
        return len(self)

    def get_chord_by_node(self, node):
        "Return the chord containing the specified node"
        try:
            result = self.chords_by_node[node]
        except KeyError:
            raise Exception("Invalid diagram.  Missing node: {}".format(node))
        return result

    def get_post_intersection_region(self, node, new_region, boundaries):
        '''Return region after crossing an intersection, i.e. locator region.
           Finds the region on a span through node that includes new_region
             and returns the opposite region.
        '''
        region_tuples = boundaries.get_regions_for_node(node)
        region = None
        for regions in region_tuples:
            if new_region in regions:
                if regions[0] == new_region:
                    region = regions[1]
                else:
                    region = regions[0]

        assert region != None, "No post intersection region determined"
        return region

    def get_node_complement(self, node):
        "Return the opposite end of the chord containing specified node"
        return self.get_chord_by_node(node).get_other_node(node)

    def get_span_complement(self, span):
        '''Each span node is the node of a chord.
           Return the span comprised of the opposite node of each end's chord.
        '''
        return Span(self.get_node_complement(span[0]),
                    self.get_node_complement(span[1]))

    def scale(self, factor=2):
        "Scale all nodes by factor to allow for additional chords"
        for chord in self:
            chord[0] *= factor
            chord[1] *= factor

    def compress(self):
        'Renumber nodes, removing node numbers that are not used in a chord'
        sparse_diagram = self  # Current sparse chord list
        # Create set of used nodes
        nodes_set = set()
        for chord in self:
            nodes_set.add(chord[0])
            nodes_set.add(chord[1])

        # Create map of original node to new node number
        i = 1
        node_map = {}
        for node in sorted(nodes_set):
            node_map[node] = i
            i += 1

        # Create new compacted diagram with translated nodes
        chords = []
        for chord in sparse_diagram:
            chords.append((node_map[chord[0]], node_map[chord[1]]))

        self.init_from_chord_list(chords) # Re-init object from new list

    def remove_one_moves(self):
        '''Delete any 1-move chords and compress the diagram to ensure
             contiguous nodes
           Removing a 1-move can create a new 1-move.  So iterate until all
             all 1-moves are removed.
        '''
        # Iterate removing 1-move chords until none found
        # Note that removing a 1-move chord can create a new 1-move chord
        while True:
            chords_to_remove = []
            for chord in self:
                # 1-move chords have length=1, including the (1, n*2) chord
                if ((chord[1] - chord[0] == 1) or
                    (chord[1] == len(self)*2 and chord[0] == 1)):
                    chords_to_remove.append(chord)

            # Remove 1-move chords from diag - can't modify loop control list above
            for chord in chords_to_remove:
                self.remove(chord)

            self.compress()

            if len(chords_to_remove) == 0:
                break

    def is_planarable(self):
        '''Return True if the diagram is planarable

           Initiate recursive algorithm that searches for a planar
           representation for the current chord diagram.

        '''

        # Reduce diagram - One moves have no effect on planarability
        self.remove_one_moves()
        if self.size() == 0:
            return True # Empty diagram, original was only 1-moves

        # Mark all chords to initially separate outside from outside
        from ChordDiagram.BoundaryTracker import BoundaryTracker
        boundaries = BoundaryTracker()
        outside = boundaries.region_factory.get_next_region_id()
        boundaries.add(Span(1, self.size()*2), outside, outside)

        locator = outside  # Current location

        # Kick off recursion
        return self._is_planarable(locator, boundaries)[0]

    def _is_planarable(self, locator, boundaries, node1=1):
        '''As though manually drawing the planar diagram from the chord diagram
           add one chord at a time, tracking changes to the region boundaries.

           Each recursive step adds an additional chord to the diagram and
           progresses to the next step for each potential definition of the new
           boundary.  Recursion allows backtracking so that each successive
           potential boundary can be tested.

           Arguments:
               self: The current Diagram instance
               locator: Region ID after crossing the most recently added node
               boundaries: BoundaryTracker object
               node1: Starting node for the next chord to be applied
           Returns:
               The return value is a 3-tuple containing:
                 is_planar: True if planar version of diagram is found
                 Locator: Region ID after the final crossing.
                          None is returned when is_planar==False.
                 BoundaryTracker:  BoundaryTracker object describing the
                          boundaries of the planar diagram.  None is returned
                          when is_planar==False.
           Raises:
               None
        '''
        # Finished the diagram yet?
        if node1 > self.size()*2:
            if locator == boundaries.get_base_region(self):
                return (True, locator, boundaries)
            else:
                return (False, locator, boundaries)

        chord = self.get_chord_by_node(node1)
        if chord.get_lower_node() == node1:
            result = self._is_planarable(
                            deepcopy(locator), deepcopy(boundaries), node1+1)
            return result

        # This is the high end of the chord - use it to close a region
        node2 = chord.get_lower_node()

        # Is locator on boundary with node?
        # i.e. Can it get to node without an illegal boundary crossing?
        if not boundaries.is_node_on_region(node2, locator, self):
            return (False, None, None)

        # Determine span to complete addition of current chord
        new_region = boundaries.region_factory.get_next_region_id()
        if node2 > boundaries.max_node_closed: # It's a 1-move if both nodes > any used
            # It's a 1-move loop - new span is the chord itself
            span = Span(chord)
            # Add span to connect loop to existing diagram
            if boundaries.max_node_closed > 0: # Any existing diagram?
                boundaries.add(Span(boundaries.max_node_closed, node2), locator, locator)

            # Add boundary: new_region in loop vs current region outside
            boundaries.add(span, locator, new_region, chord)

            # Update regions on lowest unused and highest unused nodes
            boundaries.update_dangling_spans(locator, self)

            return  self._is_planarable(
                            deepcopy(locator), deepcopy(boundaries), node1+1)

        else:
            span = Span(boundaries.max_node_closed, node1) # From last to high node
            # Add new span as a boundary between current region and new region
            boundaries.add(span, locator, new_region, chord)

            # Determine spans that close the new region
            for (boundaries, _) in boundaries.gen_region_bounds(
                                span, span.high(), locator, new_region, self):

                # Update locator to new region after (node1,node2) crossing
                locator = self.get_post_intersection_region(
                                    node2, new_region, boundaries)

                # Update regions on lowest unused and highest unused nodes
                boundaries.update_dangling_spans(locator, self)

                return self._is_planarable(
                            deepcopy(locator), deepcopy(boundaries), node1+1)

            return (False, None, None) # No boundaries found
