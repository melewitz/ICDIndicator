from copy import deepcopy

from Chord import Chord
from Span import Span
from ChordDiagram.Diagram import Diagram
from RegionFactory import RegionFactory


def ordered(val_a, val_b):
    '''Return a tuple containing the two parameters in sorted order
       Args:
           a, b: The two values to be returned in the ordered tuple.
       Returns:
           Tuple containing a & b in sorted order,
       Raises:
           None
    '''
    if val_a <= val_b:
        return (val_a, val_b)
    else:
        return (val_b, val_a)

class BoundaryTracker(object):
    '''Tracks boundary info

       Each boundary is maintained as a region pair with the list of spans
       along that boundary. The boundary name is a conjunction of the region
       names from each side of the span.  BoundaryTracker holds a dictionary of
       boundaries, indexed by boundary name.
    '''
    def __init__(self):
        '''BoundaryTracker constructor

           Args:
               None
           Returns:
               Returns a new BoundaryTracker object
           Raises:
               None
        '''
        # Structure holds list of boundary ranges between regions
        # Indexed by string "Region1_Region2" where region1 always sorts before Region2
        super(BoundaryTracker, self).__init__()
        self.boundaries = {} # Indexed by boundary name, holds span list
        self.intersections = set() # Set of used(crossed) nodes
        self.min_node_closed = Diagram.MAX_NODE_LIMIT # Lowest used node
        self.max_node_closed = 0 # Highest used/crossed node
        self.region_factory = RegionFactory()
        self.last_region_closed = self.region_factory.get_first_region_id() # Most recent new region
        self.regions = set(self.last_region_closed) # Set of existing regions

    @staticmethod
    def name(region1_, region2_):
        '''Returns the canonical boundary name for specified regions

           Args:
               region1, region2: Region IDs to combine into a name
           Returns:
               A name for the boundary along both region1 and region2.
           Raises:
               None
        '''
        (region1, region2) = ordered(region1_, region2_)
        return region1 + "_" + region2

    @staticmethod
    def name_to_regions(name):
        '''Returns the region IDs that comprise the boundary name

           Args:
               name: Boundary name
           Returns:
               Returns the two region IDs for specified boundary name
           Raises:
               None
        '''
        return name.split('_')

    def get(self, region1, region2):
        '''Returns the list of boundary spans between the specified regions.
           An empty list is returned if no spans exist on specified regions.

           Args:
               region1, region2: Regions on boundary of interest
           Returns:
               Returns the list of spans on the specified boundary.
           Raises:
               None
        '''
        return self.boundaries.setdefault(self.name(region1, region2), [])

    def add(self, new_span, region1, region2, chord=None):
        '''Add new boundary span and note intersection if chord is specified

           Args:
               new_span: Span whose boundary has changed
               region1, region2: Regions on the sides of new_span
               chord (optional): Chord marking a new intersection.  Typically,
                                 passed only for the first span on a new region.
           Returns:
               None
           Raises:
               None
        '''
        if new_span[0] == new_span[1]:
            return # No work to do

        # Remove boundary range from any existing boundary
        touched_boundaries = set()
        for (boundary_name, spans) in self.boundaries.iteritems():
            new_spans = []
            for existing_span in spans:
                result_spans = existing_span.minus(new_span)
                new_spans += result_spans
                touched_boundaries.add(boundary_name)
            self.boundaries[boundary_name] = new_spans

        # Add new boundary
        new_boundary_name = self.name(region1, region2)
        spans = self.boundaries.setdefault(new_boundary_name, [])
        spans.append(Span(new_span))
        touched_boundaries.add(new_boundary_name)

        # Merge adjacent spans on updated boundaries
        for name in touched_boundaries:
            spans = self.boundaries[name]
            if len(spans) == 0: # Remove names with no remaining spans
                self.boundaries.pop(name)
                continue

            sorted_spans = sorted(spans, key=lambda span: span[0])
            new_spans = []
            last_span = None
            for span in sorted_spans:
                if last_span == None or last_span[1] != span[0]:
                    new_spans.append(span)
                    last_span = span
                else:
                    # Extend last span to include current span
                    last_span[1] = span[1]

            self.boundaries[name] = new_spans

        # General intersections/regions bookkeeping
        if chord != None:
            self.min_node_closed = min(chord[0], self.min_node_closed)
            self.max_node_closed = chord[1]
            self.intersections |= set(chord)

            regionset = set([region1, region2])
            self.last_region_closed = regionset.difference(self.regions).pop()
            self.regions |= regionset

    def update_regions(self, span, old_region, new_region):
        '''Update the region on span, replacing old_region with new_region

           Args:
               span: Span for boundary update
               old_region: Region to be replaced
               new_region: Replacement region
           Returns:
               Returns a region list of resulting regions along specified span
           Raises:
               Exception: Region not found
        '''
        # Get existing regions for span
        regions = self.get_regions_for_nodes(span[0], span[1])
        assert regions != None, "No regions found for span %s.\n boundaries: %s" % (span, self)

        # Determine new regions
        if regions[0] == old_region:
            regions[0] = new_region
        elif regions[1] == old_region:
            regions[1] = new_region
        else:
            raise Exception(
                "update_regions(%s, old=%s, new=%s): Region '%s' not found" %
                (regions, old_region, new_region, old_region))

        # Do the actual update
        self.add(span, regions[0], regions[1])

        return regions

    def get_regions_for_node(self, node):
        '''Return list of region tuples matching node. Else return None.
           Note: At an intersection, 4 possible spans can each contain node.

           Args:
               node: Node for comparison
           Returns:
               Returns a list of region tuples, the region pairs on each span
               containing specified node.
           Raises:
               Exception: No boundary found containing node

        '''
        region_tuples = []
        for name, spans in self.boundaries.iteritems():
            for span in spans:
                if span.contains_node(node):
                    region_tuples.append(self.name_to_regions(name))
        if len(region_tuples) == 0:
            raise Exception("get_regions_for_node: "
                            "No boundary found containing node: %s" % node)
        return region_tuples

    def get_regions_for_nodes(self, node1, node2):
        '''Return regions list from span containing nodes

           Args:
               node1, node2: Nodes for comparison
           Returns:
               Returns the pair of regions along the span containing both nodes
           Raises:
               Exception: No boundary found containing nodes
        '''
        for name, spans in self.boundaries.iteritems():
            for span in spans:
                if (span.contains_node(node1) and
                    ((node2 is None) or (span.contains_node(node2)))):
                    return self.name_to_regions(name)
        raise Exception("BoundaryTracker: No boundary found containing nodes: %s, %s"
                        % (node1, node2))

    def get_region_count(self):
        '''Return the number of defined regions

           Args:
               None
           Returns:
               Returns the number of defined regions
           Raises:
               None
        '''
        # TODO: Rewrite as part of RegionFactory object??
        regions = set()
        for name in self.boundaries.iterkeys():
            for region in self.name_to_regions(name):
                regions.add(region)
        return len(regions)

    def is_span_on_region(self, match_region, span):
        '''Return True if any boundary contains specified span on specified region

           Args:
               match_region: Region for comparison
           Returns:
               Returns True if boundary is found matching both region and span.
               Otherwise, return False.
           Raises:
               None
        '''
        for (name, spans) in self.boundaries.iteritems():
            if match_region in self.name_to_regions(name):
                for s in spans:
                    if s.contains_span(span):
                        return True
        return False

    def is_node_on_region(self, node, region, diagram):
        '''Return true if node is within or on border of specified region'''
        lowest_intersection = min(self.min_node_closed, Diagram.MAX_NODE_LIMIT)

        result = False
        if node < lowest_intersection:
            node_region = self.get_base_region(diagram)
            result = region == node_region
        else:
            for region_tuple in self.get_regions_for_node(node):
                if region in region_tuple:
                    result = True
        return result

    @staticmethod
    def get_spans_from_node(node, diagram, max_node, turn=True):
        '''Return up to two spans emanating from the intersection at node.
           Spans returned are either parallel or perpendicular to span
             containing node, as controlled by the argument: turn.
             Parallel spans: (node, node +/- 1)
             Perpendicular spans: (node_complement, node_comp +/- 1)
           Filter out spans with a node less than 1 or greater than
              last_assigned_node (high node so far in diagram)

           Args:
               node: Node for comparison
               diagram: Diagram for chord (node complement) info
               max_node: Highest valued node crossed at this point
               turn: When "turn" is True, perpendicular spans
                     are returned, else, parallel spans are returned.
           Returns:
               Returns up to two spans coming out of the intersection at span,
                 in the direction specified by the argument 'turn'.
           Raises:
               None
        '''
        #TODO Remove max_node parameter, use self.max_node_closed instead
        node_complement = diagram.get_node_complement(node)
        spans = []

        if turn: # only include spans from the node complement
            # Span 1: Complement to complement+1
            spans.append(Span(node_complement, node_complement+1))

            # Span 2: Complement to complement-1
            span = Span(node_complement, node_complement-1)
            if span not in spans:
                spans.append(span)
        else:  # Only include spans from the node itself
            # Span 3: Node to node+1
            span = Span(node, node+1)
            if span not in spans:
                spans.append(span)

            # Span 4: Node to node-1
            span = Span(node, node-1)
            if span not in spans:
                spans.append(span)

        # Filter out invalid spans
        spans = [span for span in spans
                     if span.high() <= max_node and span.low() >= 1]

        spans.reverse() # Reverse so they'll be used in order added
        return spans

    @staticmethod
    def order_spans_in_closed_loop(spans, diagram):
        '''Verify that spans can be arranged to form a closed region (loop)
             where nodes of adjacent spans are either equal or complements.
           Return ordered set of spans or None (if they're not a closed loop)

           Args:
               spans: List of Spans to verify.
               diagram: Source diagram for spans.
           Returns:
               Returns the list of spans in adjacency order.
           Raises:
               None
        '''
        unused_spans = list(spans)  # Copy to allow changing the list
        span = unused_spans.pop()  # Pick a starting span
        span_loop = [span]  # Keep ordered list of complete loop
        terminal_node = span[0]  # End at low side of first span

        node = span[1] # Start at high side of first span
        node_complement = diagram.get_node_complement(node)

        # Check for 1-move loop
        if Span(node, node_complement) == span and len(unused_spans) == 0:
            return span_loop

        # Line up spans back to back, until back at terminal_node
        while len(unused_spans) > 0:
            # Find matching span for current node and move on to next node
            span = None
            for temp_span in unused_spans:
                if node in temp_span:
                    node = temp_span.other_node(node)
                    span = temp_span
                    break
                elif node_complement in temp_span:
                    node = temp_span.other_node(node_complement)
                    span = temp_span
                    break
            # No matching span
            if span is None:
                return None

            unused_spans.remove(span)
            span_loop.append(span)
            node_complement = diagram.get_node_complement(node)

            # Node and node_complement are now for the other end of matched span
            # Done yet?
            if node == terminal_node or node_complement == terminal_node:
                return span_loop

        # Ran out of spans without closing the loop
        return None

    def validate_all_regions_closed(self, diagram):
        '''Verify that spans on each region boundary form a closed loop

           Args:
               diagram: Source diagram for self/boundaries
           Returns:
               Returns True if all regions are closed, otherwise returns False
           Raises:
               None
        '''

        # Convert Boundaries to a per region spanlist
        spans_by_region = {}
        for (name, spans) in self.boundaries.iteritems():
            regions = BoundaryTracker.name_to_regions(name)
            if regions[0] == regions[1]:
                # Ignore spans, they're not connected yet
                continue

            # Add spans to spanlist for each region in name, excluding duplicates
            for region in regions:
                region_spans = spans_by_region.setdefault(region, [])
                for region_span in spans:
                    if region_span not in region_spans:
                        region_spans.append(region_span)

        # Verify closed loop of spans for each region, i.e. a closed region
        for (region, spans) in spans_by_region.iteritems():
            if region == self.region_factory.get_first_region_id():
                continue # Region == outside isn't always closed
            if self.order_spans_in_closed_loop(spans, diagram) == None:
                return False

        return True

    def gen_region_bounds(
           self, initial_span, max_node, locator, new_region, diagram):
        '''Yields a list of possible boundaries for the new region, including
             initial_span.
           Concept: For both the high and low nodes of the initial span, walk
             all adjacent spans until either the opposite end of the initial
             span is found, or its complement is found.

            Args:
                initial_span: Newly added span that created region 'region'.
                max_node: Highest node in diagram that's been added to
                          boundaries.
                locator: Region containing locator prior to adding initial_span
                new_region: Region created by adding span initial_span.
                diagram: Source diagram for boundaries
            Yields:
                All viable boundaries to form the new region.  Each yielded
                boundary is a list of bounding spans, starting with
                initial_span.
            Raises:
                None
        '''
        # Attempt to close the region starting from each end of the new span
        for start_node in initial_span:
            final_chord = Chord([
                initial_span.other_node(start_node),
                diagram.get_node_complement(initial_span.other_node(start_node))
                ])
            chord_forms_loop = self.node_forms_loop(final_chord[0], diagram)
            for final_node in final_chord:
                if final_node in initial_span and not chord_forms_loop:
                    # Skip: 1st and last spans of boundary will not be perpendicular
                    continue
                for (boundaries, bounding_spans) in self._gen_region_bounds(
                    start_node, [initial_span], [], locator, new_region,
                    diagram, max_node, final_node):
                    yield (boundaries, bounding_spans)

    def _gen_region_bounds(
            self, node, bounding_spans, visited_nodes, locator, new_region,
            diagram, max_node, final_node):
        '''Given the initial bounding_spans working toward a full boundary for
             region, _gen_region_bounds attempts to close the region using each
             potential span from the current node, and recursively calling
             itself to complete the search for all possible boundaries around
             region.
           Recursion is used to allow backtracking, so that spans in each
             direction from node can be checked, going all around the boundary.
           gen_region_bounds sets up the recursion for this internal method.

           Args:
               node: The end node of the most recent span added to
                     bounding_spans.  It's the current node from which new spans
                     will be considered for addition.
               bounding_spans: The list of spans comprising the region boundary
                               under consideration.
               visited_nodes: A set containing all nodes used by spans in
                              bounding_spans.
               locator: Region containing the locator prior to adding new span.
               new_region: Region created by adding new span.
               diagram: The Diagram represented by self/boundaries.
               max_node: Highest node in diagram that's been added to
                         boundaries.
               final_node: The starting node (or its complement) of the first
                           span in bounding spans. When this node is reached,
                           a new region boundary has been found.
        '''
        node_complement = diagram.get_node_complement(node)

        region_boundaries = [] # Contains a list of spans for each way to close the region
        new_boundaries = None # Contains the current BoundaryTracker when correct closing spans found
        turn = node in self.intersections # Don't include spans across intersection
        spans_to_check = self.get_spans_from_node(
                                  node, diagram, max_node, turn)
        for span in spans_to_check:
            # Skip duplicate spans
            if len([s for s in bounding_spans if s.contains_span(span)]) > 0:
                continue

            # Skip if span is not on desired region
            if not self.is_span_on_region(locator, span):
                continue

            # Does it close the region?
            if span.last == final_node:
                # Yes, it closes the region, validate & bottom out recursion
                boundaries_copy = deepcopy(self) # Copy for destructive tests
                region_count_before = boundaries_copy.get_region_count()

                # Update regions on candidate bounding_spans
                # Skip initial span, updated when found
                for temp_span in bounding_spans[1:] + [span]:
                    boundaries_copy.update_regions(
                                               temp_span, locator, new_region)

                # Verify new boundary doesn't reduce the number of regions
                if region_count_before != boundaries_copy.get_region_count():
                    continue

                # Verify all regions remain closed
                if not boundaries_copy.validate_all_regions_closed(diagram):
                    continue

                region_boundaries = bounding_spans + [span]
                yield (boundaries_copy, region_boundaries)

            else:
                # No, using span, search for additional spans to close region

                # Passing thru closing intersection?
                # TODO: Does final node code need to change after high level final node backtrack?
                final_node_complement = diagram.get_node_complement(final_node)
                if span.last == final_node_complement:
                    # Swap final node, so it stops after/if going around loop
                    new_final_node = final_node_complement
                else:
                    new_final_node = final_node

                # Report each solution found based on current bounding_spans
                for (new_boundaries,
                     region_boundaries) in self._gen_region_bounds(
                        span.last, bounding_spans+[span],
                        visited_nodes+[node, node_complement], locator,
                        new_region, diagram, max_node, new_final_node):
                    yield (new_boundaries, region_boundaries)

    def node_forms_loop(self, node, diagram):
        '''Return True if the chord containing node forms a closed loop with
           no other intersections along the loop.  Note that the loop can have
           length greater than one.

           Args
               node: Node to check
               diagram: Diagram represented by self/boundaries.
           Returns:
               Returns True if the chord forms a loop where any other nodes on
               the loop are not yet intersected.
           Raises:
               None
        '''
        chord = diagram.get_chord_by_node(node)
        if chord.length() == 1:
            return True  # It's a regular 1-move
        for n in range(chord.get_lower_node()+1, chord.get_upper_node()):
            if n in self.intersections:
                return False # Found in intersection on the span - not a loop
        return True # No intersections found

    def update_dangling_spans(self, locator, diagram):
        '''Update regions along spans above the top intersection, and below
             the lowest intersection that does not form a loop without
             additional intersections.
           In other words, unallocated spans at the high end are marked to be
             in the new locator region.  Spans at the low end, from the base
             up past any loops with no other intersections are marked to be in
             the new base region.

           Args:
               locator: The new locator region after the last span was added.
               diagram: Source diagram for the current boundaries.
           Returns:
               None
           Raises:
               assert: Internal error: Unexpected sorted regions length.

        '''
        # Update regions on lowest unused and highest unused nodes
        # Update spans below lowest intersected node
        base_region = self.get_base_region(diagram)
        if self.min_node_closed > 1:
            self.add(Span(1, self.min_node_closed), base_region, base_region)

        # Update nodes along loop, if any, and connector to next intersection
        node = self.min_node_closed
        connector_span = None
        while node < diagram.size()*2 and self.node_forms_loop(node, diagram):
            # TODO: Does this need to update external spans of any shape
            #       lower than low end of last span added, not just low loops?
            chord = diagram.get_chord_by_node(node) # Endpoints of span to edit
            # Determine the inside region of the loop
            # get_regions_for_node returns 2 tuples i.e. 4 values.
            # For loops 3 values are region outside loop, 1 is the inside region
            sorted_regions = sorted(
                [region for pair in self.get_regions_for_node(node)
                        for region in pair])
            if len(sorted_regions) == 2:
                # It's a unit length 1-move, so 2 values in sorted_regions
                if sorted_regions[0] == base_region:
                    inside_region = sorted_regions[1]
                else:
                    inside_region = sorted_regions[0]
            elif len(sorted_regions) == 4:
                # It's a longer loop, so 4 values in sorted_regions
                if sorted_regions[0] == sorted_regions[1]:
                    inside_region = sorted_regions[-1]
                else:
                    inside_region = sorted_regions[0]
            else:
                assert False, "Internal error: "\
                    "Unexpected sorted_regions length: %s" % sorted_regions
            self.add(Span(chord), base_region, inside_region)

            # Update connector span from loop to next highest intersection
            node = chord.get_upper_node() + 1
            while node < diagram.size()*2 and node not in self.intersections:
                node += 1
            connector_span = Span(chord.get_upper_node(), node)
            self.add(connector_span, base_region, base_region)

        # Update spans above highest intersected node
        high_end_span = Span(self.max_node_closed, diagram.size()*2)
        if connector_span is None or high_end_span != connector_span:
            self.add(high_end_span, locator, locator)

    def get_base_region(self, diagram):
        '''Returns the region containing the lowest nodes that have not
           been crossed.

           Args:
               diagram: Source diagram for self/boundaries.
           Returns:
               Returns the region containing the lowest nodes that have not
                 been crossed.
           Raises:
               Assert: Internal error: Wrong number of base regions"
               Assert: Internal error: Needs investigation.
        '''
        if len(self.intersections) == 0: # No intersections, so return outside
            return self.region_factory.get_first_region_id()

        # Find lowest intersection node that is not on a loop containing no
        #   other intersections
        diag_max_node = diagram.size()*2
        node = self.min_node_closed
        while (node < diag_max_node and (node not in self.intersections
               or self.node_forms_loop(node, diagram))):
            node += 1
        # TODO: Does this need to go up to base connector of current sub-diagram
        #       to ensure getting the correct base region?

        base_regions = {region for pair in self.get_regions_for_node(node)
                                 for region in pair}
        if node == diag_max_node:
            # Diagram is nothing but a loop
            return base_regions.pop() # Return sole region in set

        complement_node = diagram.get_node_complement(node)
        complement_boundaries = self.get_regions_for_node(complement_node)
        complement_regions = {region for pair in complement_boundaries
                                     for region in pair}
        if len(complement_boundaries) == 2:  # It's a full crossing
            # Return region found in both lists
            regions1 = set(complement_boundaries[0])
            regions2 = set(complement_boundaries[1])
            base_regions = regions1.intersection(regions2)
            assert len(base_regions) == 1,\
                "Internal error: Wrong number of base regions #1"
            base_region = base_regions.pop()
        elif len(complement_boundaries) == 1: # Final crossing stops at low node
            assert base_regions == complement_regions,\
                "Internal error: Base and complement regions not equal"\
                " - verify diagram is valid".format(
                base_regions, complement_regions)
            base_regions.remove(self.last_region_closed)
            assert len(base_regions) == 1, "Wrong number of base regions #2"
            base_region = base_regions.pop()
        else:
            assert False, "Internal error: Needs investigation"

        return base_region

    def __str__(self):
        "Return the string format of the BoundaryTracker object"
        bound_str = ""
        for (name, spans) in sorted(self.boundaries.iteritems(),
                                    key=lambda pair: pair[0]):
            if len(bound_str) > 0:
                bound_str += "\n"
            bound_str += "%s: %s" % (name, spans)
        return bound_str
