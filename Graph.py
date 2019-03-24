from graph_tool import Graph

def diagram_to_graph(diagram):
    '''Convert specified chord diagram to the equivalent graph.
       Construct the graph with a vertex for each diagram chord, and an edge
       from the vertex for each node to the next greater node as though manually
       drawing the planar diagram from the chord diagram, such that edges go
       from nodes (1 -> 2), (2 -> 3),..., (n-1 -> n), (n -> 1).

       Arguments:
           diagram: A list of chords, where each chord is a node tuple.
       Returns:
           Returns the graph corresponding to the input diagram.
       Raises:
           None
    '''
    graph = Graph()

    # Create a vertex for each chord - same vertex stored for each node of chord
    vertex_by_node = {}
    for chord in diagram:
        vertex = graph.add_vertex()
        vertex_by_node[chord[0]] = vertex
        vertex_by_node[chord[1]] = vertex

    # As though drawing the planar diagram from the chord diagram by hand,
    # add an edge from 1st node to 2nd, 2nd to 3rd, and so on, until closing
    # the loop back to the 1st node.
    nodes = vertex_by_node.keys()
    n_nodes = len(nodes)
    for i in range(0, len(nodes)):
        j = (i + 1) % n_nodes
        graph.add_edge(vertex_by_node[nodes[i]], vertex_by_node[nodes[j]])

    return graph