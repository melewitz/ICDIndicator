import sys
import time
from math import ceil, log

def timestamp():
    return time.strftime("%m/%d/%Y %H:%M:%S")

def adjacent(node1, node2, n_nodes):
    '''Return True if the specified nodes are adjacent in a chord diagram.

       Arguments:
           i, j: Node number to compare.
           n_nodes: The number of nodes in the diagram.
       Returns:
           True if the modular difference between node1 and node2 has an
           absolute value of 1.
       Raises:
           None
    '''
    delta = (node1 - node2) % n_nodes
    return delta==1 or delta==n_nodes-1


def diagram_to_key(diagram, bits):
    "Convert diagram to a binary compressed integer"
    key = 0
    for chord in diagram:
        for node in chord:
            key = (key << bits) + node
    return key

def key_to_diagram(key, bits):
    "Convert compressed integer representation back into a diagram"
    mask = 2**bits -1
    keybuffer = key

    def get_value(keybuffer, mask, bits):
        val = int(keybuffer & mask)
        keybuffer >>= bits
        return (val, keybuffer)

    diagram = []
    while keybuffer > 0:
        (node2, keybuffer) = get_value(keybuffer, mask, bits)
        (node1, keybuffer) = get_value(keybuffer, mask, bits)
        diagram.append([node1, node2])

    diagram.reverse()
    return diagram

def load_diagrams_from_file(filename, status_diagrams=100000, start_count=0):
    '''Load diagram from the specified file, displaying a status line every
       <status_diagrams> diagrams.  load_diagrams_from_file is a python
       generator.

       Arguments:
           filename: Name of input file
           status_diagrams: Count of number of lines between printing a status
               line.
           start_count: Initial diagram count for status output.  Provides a
               way to have consistent counting over input from multiple files.
       Yields:
           Diagrams from the input file.
       Raises:
           None
    '''
    count = start_count

    if filename:
        f_in = open(filename, 'r')
    else:
        f_in = sys.stdin

    print >>sys.stderr, "{} Start loading diagrams from file: {}".format(
                             timestamp(), filename if filename else '<stdin>')

    diag = ""
    for diag_str in f_in:
        if len(diag_str) > 0 and diag_str[0] == '#':
            continue # Skip comments
        count += 1
        if status_diagrams and count % status_diagrams == 0:
            print >>sys.stderr, "{} Diagrams loaded: {:,}".format(timestamp(), count)
        try:
            # TODO: Regex validate diagram to prevent injection attack
            diag = eval(diag_str)
        except Exception as exc:
            print >>sys.stderr, "Invalid diagram:", diag_str
            print >>sys.stderr, str(exc)
            continue
        yield diag
    print >>sys.stderr, "{} Completed Loading Diagrams: {:,}".format(timestamp(), count)

def load_diagrams_from_files(filenames, status_diagrams=100000, blocksize=1, block_item=1):
    '''Returns diagrams from each of the specified filenames.

       Arguments:
           filesnames: List of diagram files to read.
           status_diagrams: Number of diagrams between printing a status line.
               A value of 0 disabled status line printing.
           block_size: Default=1. When distributing the work between multiple
               running instances, this is the total number of instances planned
               to run concurrently.
               Block-size is used in conjunction with block-item to distribute
               the load over multiple processes or machines.
           block_item: Default=1. When distributing the work between multiple
              running instances, this specifies which slice of each block is to
              be processed by this instance. Example: block-size=4, block-item=3
              causes this instance to process the 3rd item of each 4 item block,
              i.e. diagram numbers: 3, 7, 11, ...
              Block_item must be less than or equal to block_item.
    '''
    if block_item > blocksize or block_item < 1:
        print >>sys.stderr, "Invalid block item for block size {:,}: {:,}".format(blocksize, block_item)
    if blocksize > 1:
        print >>sys.stderr, "Processing item {} within each {} item block".format(block_item, blocksize)
    block_index = block_item % blocksize

    count = 0
    for filename in filenames:
        for diagram in load_diagrams_from_file(filename, status_diagrams,
                                               start_count=count):
            count += 1
            if count % blocksize == block_index:
                yield diagram

