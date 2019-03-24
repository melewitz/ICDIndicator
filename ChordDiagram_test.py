#!/usr/bin/env python

import unittest
from ChordDiagram.Diagram import Diagram
from ChordDiagram.Chord import Chord
from ChordDiagram.Span import Span
from ChordDiagram.RegionFactory import RegionFactory
from ChordDiagram.BoundaryTracker import BoundaryTracker

class TestRegion(unittest.TestCase):
    def test_get_ids(self):
        region_factory = RegionFactory()
        self.assertEqual('@', region_factory.get_next_region_id())
        self.assertEqual('A', region_factory.get_next_region_id())
        self.assertEqual('B', region_factory.get_next_region_id())

class TestSpan(unittest.TestCase):
    "Test basic span operations"

    def test_constructor(self):
        self.assertEqual(3, Span([10, 3]).low()) # From list
        self.assertEqual(3, Span((10, 3)).low()) # From tuple
        self.assertEqual(3, Span(10, 3).low())   # From integer pair
        self.assertEqual(3, Span(3, 10).first)
        self.assertEqual(10, Span(3, 10).last)

    def test_minus(self):
        "Test Span minus operation"
        self.assertEqual( [Span(6, 10)], Span(6, 10).minus(Span(1, 4)))
        self.assertEqual( [Span(6, 10)], Span(6, 10).minus(Span(1, 6)))
        self.assertEqual( [Span(7, 10)], Span(6, 10).minus(Span(1, 7)))
        self.assertEqual( [],            Span(6, 10).minus(Span(1,10)))
        self.assertEqual( [],            Span(6, 10).minus(Span(1,11)))
        self.assertEqual( [Span(7,10)],  Span(6, 10).minus(Span(6, 7)))
        self.assertEqual( [],            Span(6, 10).minus(Span(6,10)))
        self.assertEqual( [Span(6, 7), Span(8,10)],
                                         Span(6, 10).minus(Span(7, 8)))
        self.assertEqual( [Span(6, 7)],  Span(6, 10).minus(Span(7, 10)))
        self.assertEqual( [Span(6, 7)],  Span(6, 10).minus(Span(7, 12)))
        self.assertEqual( [Span(6, 10)], Span(6, 10).minus(Span(11, 14)))

class TestBoundaryTracker(unittest.TestCase):
    def test_BoundaryTracker_name(self):
        self.assertEqual('A_B', BoundaryTracker.name('B', 'A'))

    def test_BoundaryTracker_name_to_regions(self):
        self.assertEqual(['A', 'B'], BoundaryTracker.name_to_regions('A_B'))

    def test_BoundaryTracker_add(self):
        bounds = BoundaryTracker()
        region_factory = RegionFactory()

        outside = region_factory.get_next_region_id()
        regionA = region_factory.get_next_region_id()
        regionB = region_factory.get_next_region_id()

        bounds.add(Span(1, 4), outside, regionA)
        self.assertEqual( [Span(1, 4)], bounds.get(regionA, outside))
        self.assertEqual( [Span(1, 4)], bounds.get(outside, regionA))

        bounds.add(Span(6, 9), outside, regionB)
        self.assertEqual( [Span(1, 4)], bounds.get(regionA, outside))
        self.assertEqual( [Span(6, 9)], bounds.get(outside, regionB))

        bounds.add(Span(3, 8), regionA, regionB)
        self.assertEqual( [Span(1, 3)], bounds.get(regionA, outside))
        self.assertEqual( [Span(8, 9)], bounds.get(outside, regionB))
        self.assertEqual( [Span(3, 8)], bounds.get(regionA, regionB))

    def test_BoundaryTracker_get_spans_from_node(self):
        # Setup boundaries for 1st three chords in diagram
        diag = Diagram([(1, 4), (2, 5), (3, 8), (6, 7)])

        bounds = BoundaryTracker()
        region_factory = RegionFactory()

        outside = region_factory.get_next_region_id()
        bounds.add(Span(1, 8), outside, outside) # Initially all nodes outside

        # Add chord (1,4)
        regionA = region_factory.get_next_region_id()
        bounds.add(Span(1, 4), outside, regionA)

        # Add chord (2,5) - segment (4,5)
        regionB = region_factory.get_next_region_id()
        bounds.add(Span(4, 5), outside, regionB)
        # Test available spans to close (4,5) regionB
        spans = bounds.get_spans_from_node(4, diag, 5)
        self.assertEqual(spans, [[1, 2]])
        bounds.add(Span(1,2), regionA, regionB)

        # Add chord (6, 7) (next in numeric order) span(6,7)
        # It's a 1-move loop, region is already closed
        regionC = region_factory.get_next_region_id()
        bounds.add(Span(6,7), regionA, regionC)
        bounds.add(Span(5,6), regionA, regionA)

        # Add chord(3, 8), span(7, 8)
        regionD = region_factory.get_next_region_id()
        bounds.add(Span(7,8), regionA, regionD)
        # Test available spans to close (7,8) regionD
        spans = bounds.get_spans_from_node(7, diag, 8)
        self.assertEqual(spans, [[5, 6], [6, 7]])

    def test_BoundaryTracker_get_regions_for_node(self):

        diag = Diagram([(1, 4), (2, 5), (3, 8), (6, 7)])

        bounds = BoundaryTracker()
        region_factory = RegionFactory()

        outside = region_factory.get_next_region_id()
        bounds.add(Span(1, 8), outside, outside) # Initially all nodes outside

        # Add chord (1,4)
        regionA = region_factory.get_next_region_id()
        bounds.add(Span(1, 4), outside, regionA)

        # Add chord (2,5) - segment (4,5)
        regionB = region_factory.get_next_region_id()
        bounds.add(Span(4, 5), outside, regionB)
        bounds.add(Span(1,2), regionA, regionB)

        self.assertEqual( ([['A', 'B'], ['@', 'A']]), bounds.get_regions_for_node(2))
        with self.assertRaisesRegexp(Exception, "get_regions_for_node: No boundary found containing node: 17"):
            bounds.get_regions_for_node(17)

    def test_BoundaryTracker_get_regions_for_nodes(self):
        bounds = BoundaryTracker()
        regionA = "A"
        regionB = "B"

        bounds.add(Span(1, 4), regionA, regionB)
        self.assertEqual(['A', 'B'], bounds.get_regions_for_nodes(2, 1))
        with self.assertRaisesRegexp(Exception, "BoundaryTracker: No boundary found containing nodes: 7, 8"):
            bounds.get_regions_for_nodes(7, 8)

    def test_Boudnaries_update_regions(self):
        bounds = BoundaryTracker()
        region_factory = RegionFactory()

        outside = region_factory.get_next_region_id()
        bounds.add(Span(1, 8), outside, outside) # Initially all nodes outside

        # Add chord (1,4)
        regionA = region_factory.get_next_region_id()
        bounds.add(Span(1, 4), outside, regionA)

        # Change boundary on span (2,3) from out_A to out_B
        regionB = region_factory.get_next_region_id()
        bounds.update_regions(Span(2, 3), regionA, regionB)
        self.assertEqual([outside, regionB], bounds.get_regions_for_nodes(2, 3))

    def test_BoundaryTracker_order_spans_in_closed_loop(self):
        diag = Diagram([(1, 4), (2, 5), (3, 8), (6, 7)])
        spans = (Span(1,2), Span(2, 3), Span(3, 4))
        self.assertEqual(BoundaryTracker.order_spans_in_closed_loop(spans, diag),
                    [[3, 4], [1, 2], [2, 3]])

        spans = (Span(3,4), Span(1, 2), Span(7,8), Span(5,6))
        self.assertEqual(BoundaryTracker.order_spans_in_closed_loop(spans, diag),
                         [[5, 6], [7, 8], [3, 4], [1, 2]])

        spans = [Span(6,7)]
        self.assertEqual(BoundaryTracker.order_spans_in_closed_loop(spans, diag),
                         [[6, 7]])

        spans = [Span(1, 2), Span(5, 6)]  # Incomplete loop
        self.assertEqual(BoundaryTracker.order_spans_in_closed_loop(spans, diag),
                         None)

        spans = [Span(1, 2), Span(4, 5), Span(2, 3)] # Loop plus extra span
        self.assertEqual(BoundaryTracker.order_spans_in_closed_loop(spans, diag),
                         None)

    def test_BoundaryTracker_validate_all_regions_closed(self):
        # Validate regions after adding boundaries for each chord
        diag = Diagram([(1, 4), (2, 5), (3, 8), (6, 7)])
        bounds = BoundaryTracker()
        region_factory = RegionFactory()

        outside = region_factory.get_next_region_id()
        bounds.add(Span(1, 8), outside, outside) # Initially all nodes outside
        self.assertTrue(bounds.validate_all_regions_closed(diag))

        # Add chord (1,4)
        regionA = region_factory.get_next_region_id()
        bounds.add(Span(1, 4), outside, regionA)
        self.assertTrue(bounds.validate_all_regions_closed(diag))

        # Add chord (2,5) - segment (4,5)
        regionB = region_factory.get_next_region_id()
        bounds.add(Span(4, 5), outside, regionB)
        bounds.add(Span(1,2), regionA, regionB)
        self.assertTrue(bounds.validate_all_regions_closed(diag))

        # Add chord (6, 7) (next in numeric order) span(6,7)
        # It's a 1-move loop, region is already closed
        regionC = region_factory.get_next_region_id()
        bounds.add(Span(6,7), regionA, regionC)
        bounds.add(Span(5,6), regionA, regionA)
        self.assertTrue(bounds.validate_all_regions_closed(diag))

        # Add chord(3, 8), span(7, 8)
        regionD = region_factory.get_next_region_id()
        bounds.add(Span(7,8), regionA, regionD)
        self.assertFalse(bounds.validate_all_regions_closed(diag))
        bounds.add(Span(5, 6), regionA, regionD)
        self.assertFalse(bounds.validate_all_regions_closed(diag))
        bounds.add(Span(2, 3), outside, regionD)
        self.assertTrue(bounds.validate_all_regions_closed(diag))

    def test_BoundaryTracker_validate_all_regions_closed_3_chord(self):
        "Verify regression on diagram: [(1, 2), (3, 6), (4, 5)]"
        diag = Diagram([(1, 2), (3, 6), (4, 5)])
        bounds = BoundaryTracker()
        region_factory = RegionFactory()

        outside = region_factory.get_next_region_id()
        regionA = region_factory.get_next_region_id()
        regionB = region_factory.get_next_region_id()
        regionC = region_factory.get_next_region_id()

        bounds.add(Span(1, 6), outside, outside)

        bounds.add(Span(1, 2), outside, regionA)
        bounds.add(Span(4, 5), outside, regionB)
        bounds.add(Span(3, 4), outside, regionC)
        bounds.add(Span(5, 6), outside, regionC)
        self.assertTrue(bounds.validate_all_regions_closed(diag))

    def test_BoundaryTracker_get_spans_along_region(self):
        "Verify get_spans_along_region used as generator"
        diag = Diagram([[1, 8], [2, 9], [3, 12], [4, 7], [5, 10], [6, 11]])
        bounds = BoundaryTracker()

        outside = bounds.region_factory.get_next_region_id()
        regionA = bounds.region_factory.get_next_region_id()
        regionB = bounds.region_factory.get_next_region_id()

        bounds.add(Span(1, 12), outside, outside)
        bounds.add(Span(4, 7), regionA, outside, Chord([4,7]))
        bounds.add(Span(7, 8), regionB, outside, Chord([1, 8]))

        locator = outside
        new_region = regionB
        generator = bounds.gen_region_bounds(
                                 Span(7,8), 8, locator, new_region, diag)
        expected = (
          # Result 1: Simple region, closed on same side
          ({'@_@': [[8, 12]], '@_A': [[4, 7]], '@_B': [[1, 4], [7, 8]]},
           [[7, 8], [3, 4], [2, 3], [1, 2]]),
          # Result 2: Complex region, up and over the top
          ({'@_@': [[8, 12]], '@_B': [[1, 4], [7, 8]], 'A_B': [[4, 7]]},
           [[7, 8], [4, 5], [5, 6], [6, 7], [3, 4], [2, 3], [1, 2]])
                  )
        count = 0
        for (result_pair, expected_pair) in zip(generator, expected):
            count += 1
            self.assertEqual(result_pair[0].boundaries, expected_pair[0])
            self.assertEqual(result_pair[1], expected_pair[1])
        self.assertEqual(count, 2)


class TestDiagram(unittest.TestCase):
    def test_get_span_complement(self):
        diag = Diagram([(1, 4), (2, 5), (3, 8), (6, 7)])
        span = Span(4, 5)
        cspan = diag.get_span_complement(span)
        self.assertEqual(cspan, Span(1, 2))
        ccspan = diag.get_span_complement(cspan)
        self.assertEqual(span, ccspan) # Double complement returns original

    def test_get_span_complement_of_chord(self):
        diag = Diagram([(1, 4), (2, 5), (3, 8), (6, 7)])
        span = Span(1, 4)
        cspan = diag.get_span_complement(span)
        self.assertEqual(span, cspan)  # Complement of a chord is itself

    def test_compress(self):
        diag = Diagram([(2, 8), (4, 10), (6, 16), (12, 14)])
        compressed_diag = Diagram([(1, 4), (2, 5), (3, 8), (6, 7)])
        diag.compress()
        self.assertEqual(diag, compressed_diag)

    def test_remove_one_move(self):
        diag = Diagram([(1,6), (2,3), (4,7), (5,8)])
        diag.remove_one_moves()
        final_diag = Diagram([(1,4), (2,5), (3,6)])
        self.assertEqual(diag, final_diag)

    def test_Diagram_is_planarable_maindiag(self):
        diag = Diagram([(1, 4), (2, 5), (3, 8), (6, 7)])
        self.assertTrue(diag.is_planarable())

    def test_Diagram_is_planarable_2_move_crossed(self):
        "Verify that the crossed 2-move fails in all rotations"
        for _ in range(0, 4):
            diag = Diagram([(1, 3), (2, 4)])
            self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_7_chord(self):
        diag = Diagram([(1,10), (2,7), (3,6), (4,11), (5,12), (13,8), (14,9)])
        self.assertTrue(diag.is_planarable())

    def test_Diagram_is_planarable_3_chord_positive(self):
        diag = Diagram([(1,2), (3,6), (4, 5)])
        self.assertTrue(diag.is_planarable())

    def test_Diagram_is_planarable_3_chord_regression1(self):
        diag = Diagram([(1,4), (2,6), (3, 5)])
        self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_3_chord_regression3(self):
        diag = Diagram([(1,3), (2,6), (4, 5)])
        self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_3_chord_regression4(self):
        'Form region opposite the typical - but works - interesting'
        diag = Diagram([[1, 4], [6, 2], [3, 5]])
        self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_4_chord_regression1(self):
        diag = Diagram([[1, 6], [2, 5], [3, 7], [4, 8]])
        self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_4_chord_regression2(self):
        diag = Diagram([[1, 6], [2, 3], [4, 7], [5, 8]])
        self.assertTrue(diag.is_planarable())

    def test_Diagram_is_planarable_4_chord_regression3(self):
        diag = Diagram([(1,8), (2,6), (3, 5), (4, 7)])
        self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_4_chord_test1(self):
        diag = Diagram([(1,4), (2,3), (5,8), (6,7)])
        self.assertTrue(diag.is_planarable())

    def test_Diagram_is_planarable_5_chord_regression1(self):
        diag = Diagram([(1, 2), (3, 8), (4, 7), (5, 9), (6, 10)])
        self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_5_chord_regression2(self):
        "Rotation of test 5_chord_regression1"
        # This is False
        diag = Diagram([[1, 7], [2, 3], [4, 9], [5, 8], [6, 10]])
        self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_5_chord_regression3(self):
        # This is True
        diag = Diagram([[1, 8], [2, 5], [3, 10], [4, 9], [6, 7]])
        self.assertTrue(diag.is_planarable())

    def test_Diagram_is_planarable_5_chord_regression4(self):
        # This is True
        diag = Diagram([[1, 3], [2, 10], [4, 7], [5, 8], [6, 9]])
        self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_6_chord_regression1(self):
        # This is True
        diag = Diagram([[1, 8], [2, 9], [3, 12], [4, 7], [5, 10], [6, 11]])
        self.assertTrue(diag.is_planarable())

    def test_Diagram_is_planarable_6_chord_regression2(self):
        diag = Diagram([[1, 4], [2, 11], [3, 12], [5, 8], [6, 10], [7, 9]])
        self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_6_chord_regression3(self):
        diag = Diagram( [[1, 4], [2, 5], [3, 12], [6, 9], [7, 11], [8, 10]])
        self.assertFalse(diag.is_planarable())

    def test_Diagram_is_planarable_6_chord_regression4(self):
        diag = Diagram( [[1, 10], [2, 7], [3, 6], [4, 13], [5, 12], [8, 11], [9, 14]])
        self.assertTrue(diag.is_planarable())

    def test_Diagram_is_planarable_21_chord_1(self):
        diag = Diagram( [(1,42), (2,37), (3,36), (4,31), (5,30), (6,25), (7,24),
                         (8,23), (9,26), (10,29), (11,32), (12,35), (13,38),
                         (14,41), (15,40),(16,39), (17,34), (18,33), (19,28),
                         (20,27), (21,22)])
        self.assertTrue(diag.is_planarable())

if __name__ == '__main__':
    unittest.main()
