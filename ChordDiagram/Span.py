class Span(list):
    '''Represents a segment of a planar diagram between nodes.
       An ordered pair of nodes - the end points of the span
       While the implementation is similar to Chord, conceptually they are
         different.  A Chord is the intersection of two nodes.  A Span is the
         segment(s) between two or more nodes.
    '''

    def __init__(self, node1, node2=None):
        '''Constructor - Ensure ordering of node pair
           Valid forms:  Span(list), Span(int, int)
           Original node order is saved as: (first, last)
           Nodes of list are kept in sorted order

           Args:
               node1: int, tuple or list
               node2: Must be an in if node1 is an int
                      Ignored when node1 is tuple or list
           Returns:
               A new Span
           Raises:
               None

        '''
        super(Span, self).__init__()

        # Fake polymorphism in constructor
        if isinstance(node1, (list, tuple)):
            self.append(node1[0])
            self.append(node1[1])
        else: # Treat as two integers
            self.append(node1)
            self.append(node2)

        # Save original node order
        self.first = self[0]
        self.last = self[1]

        # Ensure sorted node order
        if self[0] > self[1]:
            (self[1], self[0]) = self

    def low(self):
        '''Return the low valued node of the span

           Args:
               None
           Returns:
               Return the low valued node of the span
           Raises:
               None
        '''
        return self[0]

    def high(self):
        '''Return the high valued node of the span

           Args:
               None
           Returns:
               Return the high valued node of the span
           Raises:
               None
        '''
        return self[1]

    def other_node(self, node):
        '''Return the span node not matching the specified node

           Args:
               node: Int specifying node not to be returned
           Returns:
               Return the node not matching the specified node
           Raises:
               Exception: original node not found in span
        '''
        if self[0] == node:
            return self[1]
        elif self[1] == node:
            return self[0]
        else:
            raise Exception("Node {} not found in span{}".format(node, self))

    def length(self):
        '''Return the length of the span, i.e. number nodes along the span minus 1

           Args:
               None
           Returns:
               Returns the difference between the high and low nodes.
           Raises:
               None
        '''
        return self[1] - self[0]

    def minus(self, span):
        '''Return remaining portions(s) of self after removing span
           Always returns a span list.  Removing the middle of an existing span
             results in two distinct spans
           Endpoint nodes of subtracted span are not removed

           Args:
               span: Segment to remove from self
           Returns:
               Returns a list of 1 or 2 remaining spans
           Raises:
               None
        '''

        # Any overlap?
        if (span.high() <= self.low()) or (span.low() >= self.high()):
            return [self] # No overlap, return original

        # Complete overlap?
        if (span.low() <= self.low()) and (span.high() >= self.high()):
            return [] # Total overlap, nothing remaining in self to return

        # Partial overlap, completely within original? (results in 2 spans)
        if (self.low() < span.low()) and (span.high() < self.high()):
            return [Span(self.low(), span.low()), Span(span.high(), self.high())]

        # Partial overlap from one end or the other
        if span.low() <= self.low():
            return [Span(span.high(), self.high())] # Remove low end
        else:
            return [Span(self.low(), span.low())] # Remove high end

    def contains_span(self, span):
        '''Return True if self entirely contains specified span

           Args:
               span: Span for comparison
           Returns:
               Returns True if self contains or equals specified span
           Raises:
               None
        '''
        return (self[0] <= span[0] <= self[1] and
                self[0] <= span[1] <= self[1])

    def contains_node(self, node):
        '''Return True if node is on self's span

           Args:
               node: Node for comparison
           Returns:
               Returns True if self.low <= node <= self.high
           Raises:
               None
        '''
        return self[0] <= node <= self[1]
