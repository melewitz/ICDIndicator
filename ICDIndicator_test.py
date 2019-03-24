#!/usr/bin/env python

import unittest
from ICDIndicator import *
from ChordDiagram.Utility import diagram_to_key, key_to_diagram

class TestICDIndicator(unittest.TestCase):
    "Test basic operations"

    # Adjacency functions
    def test_adjacent_values(self):
        "Verify adjacency various cases"
        self.assertTrue(adjacent(1, 2, 6))
        self.assertTrue(adjacent(2, 1, 6))
        self.assertTrue(adjacent(1, 6, 6)) # Boundary test
        self.assertTrue(adjacent(6, 1, 6)) # Reverse boundry test

    def test_chord_length(self):
        self.assertEqual(1, chord_length((1,2), 6))
        self.assertEqual(1, chord_length((2,1), 6))
        self.assertEqual(1, chord_length((1,6), 6))
        self.assertEqual(1, chord_length((6,1), 6))
        self.assertEqual(1, chord_length((3,4), 6))
        self.assertEqual(1, chord_length((4,3), 6))
        self.assertEqual(0, chord_length((6,6), 6))
        self.assertEqual(2, chord_length((2,4), 6))
        self.assertEqual(2, chord_length((4,2), 6))

    def test_two_move(self):
        # No 2-moves
        diag = [(1, 7), (2, 12), (3, 5), (4, 10), (6, 8), (9, 11)]
        self.assertFalse(contains_two_move(diag))
        self.assertEqual(get_two_moves(diag), [])

        diag = [[1, 3], [2, 4], [5, 7], [6, 8]]
        self.assertTrue(contains_two_move(diag))
        two_moves = get_two_moves(diag)
        self.assertEqual(two_moves, [[[1, 3], [2, 4]], [[5, 7], [6, 8]]])

        diag = [[1, 6], [2, 11], [3, 8], [4, 9], [5, 7], [10, 12]]
        self.assertTrue(contains_two_move(diag))
        two_moves = get_two_moves(diag)
        self.assertEqual(two_moves, [[[3, 8], [4, 9]]])

        applied_two_move_diag = apply_two_moves(diag, two_moves)
        new_diag = [[1, 6], [2, 11], [4, 8], [3, 9], [5, 7], [10, 12]]
        self.assertEqual(applied_two_move_diag, new_diag)

    def test_two_move_regression_1(self):
        diag = [[3, 12], [6, 36], [9, 30], [15, 42], [18, 27], [21, 39], [24, 33]]
        comp = get_compressed_diagram(diag)
        self.assertTrue(adjacent(1, 14, 14))
        self.assertTrue(contains_two_move(comp))

    def test_get_possible_chords_3(self):
        actual = get_possible_chords(3)
        expect = [
            [[1, 2], [1, 3], [1, 4], [1, 5], [1, 6]],
                    [[2, 3], [2, 4], [2, 5], [2, 6]],
                            [[3, 4], [3, 5], [3, 6]],
                                    [[4, 5], [4, 6]],
                                            [[5, 6]]]
        self.assertEqual(actual, expect)

    def test_get_possible_chords_sparse_eplist(self):
        node_list = [1, 3, 5, 7, 9, 11]
        actual = get_possible_chords(node_list=node_list)
        expect = [
            [[1, 3], [1, 5], [1, 7], [1, 9], [1, 11]],
                    [[3, 5], [3, 7], [3, 9], [3, 11]],
                            [[5, 7], [5, 9], [5, 11]],
                                    [[7, 9], [7, 11]],
                                            [[9, 11]] ]
        self.assertEqual(actual, expect)

    def test_get_possible_chords_8(self):
        actual = get_possible_chords(8)
        expect = [
          [[1, 2], [1, 3], [1, 4], [1, 5], [1, 6], [1, 7], [1, 8], [1, 9], [1, 10], [1, 11], [1, 12], [1, 13], [1, 14], [1, 15], [1, 16]],
                  [[2, 3], [2, 4], [2, 5], [2, 6], [2, 7], [2, 8], [2, 9], [2, 10], [2, 11], [2, 12], [2, 13], [2, 14], [2, 15], [2, 16]],
                          [[3, 4], [3, 5], [3, 6], [3, 7], [3, 8], [3, 9], [3, 10], [3, 11], [3, 12], [3, 13], [3, 14], [3, 15], [3, 16]],
                                  [[4, 5], [4, 6], [4, 7], [4, 8], [4, 9], [4, 10], [4, 11], [4, 12], [4, 13], [4, 14], [4, 15], [4, 16]],
                                          [[5, 6], [5, 7], [5, 8], [5, 9], [5, 10], [5, 11], [5, 12], [5, 13], [5, 14], [5, 15], [5, 16]],
                                                  [[6, 7], [6, 8], [6, 9], [6, 10], [6, 11], [6, 12], [6, 13], [6, 14], [6, 15], [6, 16]],
                                                          [[7, 8], [7, 9], [7, 10], [7, 11], [7, 12], [7, 13], [7, 14], [7, 15], [7, 16]],
                                                                  [[8, 9], [8, 10], [8, 11], [8, 12], [8, 13], [8, 14], [8, 15], [8, 16]],
                                                                          [[9, 10], [9, 11], [9, 12], [9, 13], [9, 14], [9, 15], [9, 16]],
                                                                                  [[10, 11], [10,12],[10, 13],[10, 14],[10, 15],[10, 16]],
                                                                                            [[11,12],[11, 13],[11, 14],[11, 15],[11, 16]],
                                                                                                    [[12, 13],[12, 14],[12, 15],[12, 16]],
                                                                                                             [[13, 14],[13, 15],[13, 16]],
                                                                                                                      [[14, 15],[14, 16]],
                                                                                                                               [[15, 16]]]
        self.assertEqual(actual, expect)

# Disabled the gen_possible_diagrams tests after converting it to
# write solely to a file for efficiency in a multiprocessing run.
# TODO: Allow a stream to be passed in to receive the data and enable the tests.
#     def test_gen_possible_diagrams_3_nofilter(self):
#         actual = [ diag for diag in gen_possible_diagrams(3)]
#         expect = [[[1, 2], [3, 4], [5, 6]],
#                   [[1, 2], [3, 5], [4, 6]],
#                   [[1, 2], [3, 6], [4, 5]],
#                   [[1, 3], [2, 4], [5, 6]],
#                   [[1, 3], [2, 5], [4, 6]],
#                   [[1, 3], [2, 6], [4, 5]],
#                   [[1, 4], [2, 3], [5, 6]],
#                   [[1, 4], [2, 5], [3, 6]],
#                   [[1, 4], [2, 6], [3, 5]],
#                   [[1, 5], [2, 3], [4, 6]],
#                   [[1, 5], [2, 4], [3, 6]],
#                   [[1, 5], [2, 6], [3, 4]],
#                   [[1, 6], [2, 3], [4, 5]],
#                   [[1, 6], [2, 4], [3, 5]],
#                   [[1, 6], [2, 5], [3, 4]]]
#         self.assertEqual(actual, expect)
#
#     def test_gen_possible_diagrams_5_uniqueness(self):
#         diags = {}
#         for diag in gen_possible_diagrams(6):
#             sdiag = str(diag)
#             self.assertIsNone(diags.get(sdiag))
#             diags[sdiag] = True

    def test_diagram_sorting_diag1(self):
        "Verify diagram sorting 1"
        diag =   [(6, 8), (2, 5), (7, 10), (4, 9), (1, 3)]
        expect = [(1, 3), (2, 5), (4,  9), (6, 8), (7, 10)]
        self.assertEqual(get_sorted_diagram(diag), expect)

    def test_diagram_sorting_diag2(self):
        "Verify diagram sorting 2"
        diag =   [(4, 7), (6, 8), (2, 9), (5, 10), (1, 3) ]
        expect = [(1, 3), (2, 9), (4, 7), (5, 10), (6, 8)]
        self.assertEqual(get_sorted_diagram(diag), expect)

    def test_get_rotated_diagram(self):
        diag = [(1, 6), (2, 5), (3, 4)]
        actual = get_rotated_diagram(diag, 4)
        expect = [[1, 2], [3, 6], [4, 5]]
        self.assertEqual(actual, expect)

    def test_get_scaled_diagram(self):
        diag = [[1,2], [3,4], [5, 6]]
        actual = get_scaled_diagram(diag, factor=2)
        expect = [ [2,4], [6,8], [10,12]]
        self.assertEqual(actual, expect)

    def test_get_compressed_diagram(self):
        sparse_diag = [ [1,7], [2, 20], [4,8], [6,16], [10,12], [14,18]]
        compressed_diag = get_compressed_diagram(sparse_diag)
        expect = [[1,5], [2,12], [3,6], [4,10], [7,8], [9,11]]
        self.assertEqual(compressed_diag, expect)

    def test_get_symetric_diagram(self):
        diag = [(1, 3), (2, 6), (4, 9), (5, 7), (8,10)]
        mirror_diag = get_symetric_diagram(diag)
        expect = [(1, 3), (2, 7), (4, 6), (5, 9), (8, 10)]
        self.assertEqual(mirror_diag, expect)

    def test_get_symetric_diagram_double_mirror(self):
        'Verify that mirror of mirror equals the original'
        diag1 = [(1, 4), (2, 10), (3, 6), (5, 9), (7,8)] # Diag without symmetry
        double_mirror=get_symetric_diagram(get_symetric_diagram(diag1))
        self.assertEqual(diag1, double_mirror)

    def test_equal_rotated_diagrams_equal_self(self):
        diag1 = [(1, 3), (2, 6), (4, 9), (5, 7), (8,10)]
        self.assertTrue(diag1, diag1)

    def test_equal_rotated_diagrams_rotated2(self):
        diag1 = [(1, 3), (2, 6), (4, 9), (5, 7), (8,10)]
        rot2_diag = get_rotated_diagram(diag1, 2)
        self.assertTrue(equal_rotated_diagrams(diag1, rot2_diag))
        self.assertTrue(equal_rotated_diagrams(rot2_diag, diag1))

    def test_equal_rotated_diagrams_all_rotations(self):
        diag1 = [(1, 7), (2, 10), (3, 9), (4,6), (5,8)]
        diag2 = diag1
        for _ in range(0, len(diag1)+1):
            self.assertTrue(equal_rotated_diagrams(diag1, diag2))
            diag2 = get_rotated_diagram(diag1, 1)

    def test_equal_symetric_diagrams_equal_neagtive_test(self):
        diag1 = [(1, 4), (2, 10), (3, 6), (5, 9), (7,8)] # Diag without symmetry
        self.assertFalse(equal_symetric_diagrams(diag1, diag1))

    def test_equal_symetric_diagrams_equal_positive_test(self):
        diag1 = [(1, 4), (2, 10), (3, 6), (5, 9), (7,8)] # Diag without symmetry
        mirror_diag = get_symetric_diagram(diag1)
        self.assertTrue(equal_symetric_diagrams(diag1, mirror_diag))

    def test_diagram_to_key(self):
        from math import log, ceil
        diag = [[1, 2], [3, 4], [5, 6]]
        bits = int(ceil(log(len(diag) * 2, 2)))
        key = diagram_to_key(diag, bits)
        diag2 = key_to_diagram(key, bits)
        self.assertEqual(diag, diag2)


class TestFitsInto(unittest.TestCase):
    "Test fits into"

    def test_fitsinto_single_chord(self):
        inner_diag = [(1, 2)]
        outer_diag = [(1, 2)]
        self.assertTrue(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_too_many_input_chords(self):
        inner_diag = [(1, 2), (3, 4)]
        outer_diag = [(1, 2)]
        self.assertFalse(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_1_into_2_parallel(self):
        inner_diag = [(1, 2)]
        outer_diag = [(1, 2), (3, 4)]
        self.assertTrue(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_1_into_2_crossed(self):
        inner_diag = [(1, 2)]
        outer_diag = [(1, 3), (2, 4)]
        self.assertTrue(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_2_parallel_into_2_parallel(self):
        inner_diag = [(1, 2), (3, 4)]
        outer_diag = [(1, 2), (3, 4)]
        self.assertTrue(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_2_parallel_into_2_crossed(self):
        inner_diag = [(1, 2), (3, 4)]
        outer_diag = [(1, 3), (2, 4)]
        self.assertFalse(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_3_into_3_crossed1(self):
        inner_diag = [(1, 3), (2, 4), (5, 6)]
        outer_diag = [(1, 2), (3, 4), (5, 6)]
        self.assertFalse(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_3_into_3_crossed3_same(self):
        inner_diag = [(1, 4), (2, 5), (3, 6)]
        outer_diag = [(1, 4), (2, 5), (3, 6)]
        self.assertTrue(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_3_into_3_crossed3_rotated(self):
        inner_diag = [(1, 4), (2, 5), (3, 6)]
        outer_diag = get_rotated_diagram([(1, 4), (2, 5), (3, 6)], 1)
        self.assertTrue(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_3_into_3_crossed_rotated_all(self):
        inner_diag = [(1, 3), (2, 4), (5, 6)]
        outer_diag = inner_diag
        for _ in range(0, len(inner_diag)+1):
            self.assertTrue(fits_into_diagram(inner_diag, outer_diag))
            outer_diag = get_rotated_diagram(outer_diag, 1)

    def test_fitsinto_3_into_4_extra1(self):
        inner_diag = [(1, 4), (2, 5), (3, 6)]
        outer_diag = [(1, 6), (2, 7), (3, 8), (4, 5)]
        self.assertTrue(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_5_into_self(self):
        inner_diag = [(1, 7), (2, 10), (3, 9), (4,6), (5,8)]
        outer_diag = [(1, 7), (2, 10), (3, 9), (4,6), (5,8)]
        self.assertTrue(fits_into_diagram(inner_diag, outer_diag))

    def test_fitsinto_5_into_self_rotated5(self):
        inner_diag = [(1, 7), (2, 10), (3, 9), (4,6), (5,8)]
        outer_diag = get_rotated_diagram(inner_diag, 5)
        self.assertTrue(fits_into_diagram(inner_diag, outer_diag))

    def test_5_fitsinto_6_into_self_require_skip_unmatched(self):
        inner_diag = [(1, 7), (2, 10), (3, 9), (4,6), (5,8)]
        outer_diag = [(1, 11), (2, 7), (3, 12), (4, 9), (5, 10), (6, 8)]
        self.assertTrue(fits_into_diagram(inner_diag, outer_diag))

    def test_5_fitsinto_6_into_self_require_skip_unmatched2(self):
        inner_diag = [(1, 7), (2, 10), (3, 9), (4,6), (5,8)]
        outer_diag = [(1, 11), (2, 7), (3, 12), (4, 10), (5, 8), (6, 9)]
        for _ in range(0, len(inner_diag)+1):
            self.assertTrue(fits_into_diagram(inner_diag, outer_diag))
            outer_diag = get_rotated_diagram(inner_diag, 1)

    def test_5_fitsinto_7_into_self_require_skip_unmatched3(self):
        inner_diag = [(1, 7), (2, 10), (3, 9), (4,6), (5,8)]
        # Added to inner:                        extra                     extra
        outer_diag = [(1, 8), (2, 14), (3, 11), (4, 13), (5, 7), (6, 9), (10, 12)]
        for _ in range(0, len(inner_diag)+1):
            self.assertTrue(fits_into_diagram(inner_diag, outer_diag))
            outer_diag = get_rotated_diagram(inner_diag, 1)

    def test_5_fitsinto_7_into_self_require_skip_and_rotate(self):
        inner_diag = [(1, 7), (2, 10), (3, 9), (4,6), (5,8)]
        outer_diag = [(1, 6), (2, 12), (3, 9), (4, 11), (5, 7), (8, 10)]
        for _ in range(0, len(inner_diag)+1):
            self.assertTrue(fits_into_diagram(inner_diag, outer_diag))
            outer_diag = get_rotated_diagram(inner_diag, 1)


if __name__ == '__main__':
    print "Starting tests"
#     suite = unittest.TestLoader().loadTestsFromTestCase(TestICDIndicator)
#     unittest.TextTestRunner(verbosity=0).run(suite)
    unittest.main()
