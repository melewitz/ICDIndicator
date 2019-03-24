class Chord(list):
    '''Represents the intersection of two nodes
       A Chord allows indexed access to the nodes, which are always sorted.
       While the implementation is similar to Span, conceptually they are
         different.  A Chord is the intersection of two nodes.  A span is the
         segment(s) between two or more nodes.
    '''
    def __init__(self, node_pair):
        '''Construct a Chord from an node list, tuple or another Chord

           Args:
               node_pair: The pair of nodes the comprise an intersection.
           Returns:
               Returns a new Chord object
           Raises:
               None
        '''
        super(Chord, self).__init__()
        self.append(node_pair[0])
        self.append(node_pair[1])
        if self[0] > self[1]:
            (self[0], self[1]) = (self[1], self[0])

    def get_lower_node(self):
        '''Return the smaller of the chord's two nodes.
           Always equivalent to chord[0].

           Args:
               None
           Returns:
               Returns the smaller of the chord's two nodes.
           Raises:
               None
        '''
        return self[0]

    def get_upper_node(self):
        '''Return the larger of the chord's two nodes.
           Always equivalent to chord[1].

           Args:
               None
           Returns:
               Returns the larger of the chord's two nodes.
           Raises:
               None
        '''
        return self[1]

    def get_other_node(self, node):
        '''Returns the node that was not specified.

           Args:
               node: The node that is not to be returned.
           Returns:
               Returns the node not specified.
           Raises:
               Exception: Node not found in chord.
        '''
        if self[0] == node:
            return self[1]
        elif self[1] == node:
            return self[0]
        else:
            raise Exception("Node {} not found in chord{}".format(node, self))


    def length(self):
        '''Returns the number of unit length spans between the chord's nodes.

           Args:
               None
           Returns:
               Returns the length of the chord.
           Raises:
               None
        '''
        return self.get_upper_node() - self.get_lower_node()
