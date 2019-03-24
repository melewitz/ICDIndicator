
#include "nuitka/prelude.hpp"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *const_dict_empty;
PyObject *const_int_0;
PyObject *const_int_neg_1;
PyObject *const_int_pos_1;
PyObject *const_int_pos_2;
PyObject *const_int_pos_4;
PyObject *const_str_chr_64;
PyObject *const_str_digest_03937373fabec6b1a26cee54a73d4917;
PyObject *const_str_digest_15f0a4f97fb019bc7f8b105e94b87f86;
PyObject *const_str_digest_210c42986c757d95434453911933e7fe;
PyObject *const_str_digest_6d045f0b566740bd12df732b6badafaf;
PyObject *const_str_digest_dc2a0cea0cc8765646e6551215b10eac;
PyObject *const_str_empty;
PyObject *const_str_plain_BoundaryTracker;
PyObject *const_str_plain_Chord;
PyObject *const_str_plain_ChordDiagram;
PyObject *const_str_plain_Diagram;
PyObject *const_str_plain_MAX_NODE_LIMIT;
PyObject *const_str_plain_RegionFactory;
PyObject *const_str_plain_Span;
PyObject *const_str_plain__;
PyObject *const_str_plain___all__;
PyObject *const_str_plain___builtins__;
PyObject *const_str_plain___class__;
PyObject *const_str_plain___cmp__;
PyObject *const_str_plain___delattr__;
PyObject *const_str_plain___dict__;
PyObject *const_str_plain___doc__;
PyObject *const_str_plain___enter__;
PyObject *const_str_plain___exit__;
PyObject *const_str_plain___file__;
PyObject *const_str_plain___getattr__;
PyObject *const_str_plain___import__;
PyObject *const_str_plain___init__;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain___module__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___setattr__;
PyObject *const_str_plain_add;
PyObject *const_str_plain_append;
PyObject *const_str_plain_boundaries;
PyObject *const_str_plain_chord;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_compress;
PyObject *const_str_plain_contains_node;
PyObject *const_str_plain_contains_span;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_deepcopy;
PyObject *const_str_plain_exc_traceback;
PyObject *const_str_plain_exc_type;
PyObject *const_str_plain_exc_value;
PyObject *const_str_plain_first;
PyObject *const_str_plain_format;
PyObject *const_str_plain_gen_region_bounds;
PyObject *const_str_plain_get;
PyObject *const_str_plain_get_base_region;
PyObject *const_str_plain_get_chord_by_node;
PyObject *const_str_plain_get_first_region_id;
PyObject *const_str_plain_get_lower_node;
PyObject *const_str_plain_get_next_region_id;
PyObject *const_str_plain_get_node_complement;
PyObject *const_str_plain_get_other_node;
PyObject *const_str_plain_get_regions_for_node;
PyObject *const_str_plain_get_regions_for_nodes;
PyObject *const_str_plain_get_span_complement;
PyObject *const_str_plain_get_spans_from_node;
PyObject *const_str_plain_get_upper_node;
PyObject *const_str_plain_high;
PyObject *const_str_plain_indent;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain_int;
PyObject *const_str_plain_is_node_on_region;
PyObject *const_str_plain_is_planarable;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_last;
PyObject *const_str_plain_len;
PyObject *const_str_plain_length;
PyObject *const_str_plain_list;
PyObject *const_str_plain_locator;
PyObject *const_str_plain_long;
PyObject *const_str_plain_low;
PyObject *const_str_plain_max_node_closed;
PyObject *const_str_plain_minus;
PyObject *const_str_plain_name;
PyObject *const_str_plain_name_to_regions;
PyObject *const_str_plain_new_region;
PyObject *const_str_plain_node;
PyObject *const_str_plain_node1;
PyObject *const_str_plain_node2;
PyObject *const_str_plain_object;
PyObject *const_str_plain_open;
PyObject *const_str_plain_order_spans_in_closed_loop;
PyObject *const_str_plain_other_node;
PyObject *const_str_plain_outside;
PyObject *const_str_plain_range;
PyObject *const_str_plain_region;
PyObject *const_str_plain_region_factory;
PyObject *const_str_plain_region_tuples;
PyObject *const_str_plain_regions;
PyObject *const_str_plain_remove;
PyObject *const_str_plain_remove_one_moves;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_result;
PyObject *const_str_plain_self;
PyObject *const_str_plain_site;
PyObject *const_str_plain_size;
PyObject *const_str_plain_sorted;
PyObject *const_str_plain_span;
PyObject *const_str_plain_spans;
PyObject *const_str_plain_staticmethod;
PyObject *const_str_plain_type;
PyObject *const_str_plain_update_dangling_spans;
PyObject *const_str_plain_update_regions;
PyObject *const_str_plain_validate_all_regions_closed;
PyObject *const_str_plain_xrange;
PyObject *const_tuple_empty;
PyObject *const_tuple_none_tuple;
PyObject *const_tuple_str_plain_BoundaryTracker_tuple;
PyObject *const_tuple_str_plain_Chord_tuple;
PyObject *const_tuple_str_plain_Diagram_tuple;
PyObject *const_tuple_str_plain_RegionFactory_tuple;
PyObject *const_tuple_str_plain_Span_tuple;
PyObject *const_tuple_str_plain_deepcopy_tuple;
PyObject *const_tuple_str_plain_self_str_plain_node1_str_plain_node2_tuple;
PyObject *const_tuple_str_plain_self_str_plain_node_tuple;
PyObject *const_tuple_str_plain_self_str_plain_span_tuple;
PyObject *const_tuple_str_plain_self_tuple;

#if defined(_WIN32) && defined(_NUITKA_EXE)
#include <Windows.h>
const unsigned char* constant_bin;
struct __initResourceConstants
{
    __initResourceConstants()
    {
        constant_bin = (const unsigned char*)LockResource(
            LoadResource(
                NULL,
                FindResource(NULL, MAKEINTRESOURCE(3), RT_RCDATA)
            )
        );
    }
} __initResourceConstants_static_initializer;
#else
extern "C" const unsigned char constant_bin[];
#endif

static void __initConstants( void )
{
    NUITKA_MAY_BE_UNUSED PyObject *exception_type, *exception_value;
    NUITKA_MAY_BE_UNUSED PyTracebackObject *exception_tb;

#ifdef _MSC_VER
    // Prevent unused warnings in case of simple programs.
    (void *)exception_type; (void *)exception_value; (void *)exception_tb;
#endif

    const_dict_empty = _PyDict_NewPresized( 0 );
    const_int_0 = PyInt_FromLong( 0l );
    const_int_neg_1 = PyInt_FromLong( -1l );
    const_int_pos_1 = PyInt_FromLong( 1l );
    const_int_pos_2 = PyInt_FromLong( 2l );
    const_int_pos_4 = PyInt_FromLong( 4l );
    const_str_chr_64 = UNSTREAM_CHAR( 64, 0 );
    const_str_digest_03937373fabec6b1a26cee54a73d4917 = UNSTREAM_STRING( &constant_bin[ 24750 ], 28, 0 );
    const_str_digest_15f0a4f97fb019bc7f8b105e94b87f86 = UNSTREAM_STRING( &constant_bin[ 24778 ], 18, 0 );
    const_str_digest_210c42986c757d95434453911933e7fe = UNSTREAM_STRING( &constant_bin[ 24796 ], 17, 0 );
    const_str_digest_6d045f0b566740bd12df732b6badafaf = UNSTREAM_STRING( &constant_bin[ 24813 ], 26, 0 );
    const_str_digest_dc2a0cea0cc8765646e6551215b10eac = UNSTREAM_STRING( &constant_bin[ 24839 ], 20, 0 );
    const_str_empty = UNSTREAM_STRING( &constant_bin[ 0 ], 0, 0 );
    const_str_plain_BoundaryTracker = UNSTREAM_STRING( &constant_bin[ 13 ], 15, 1 );
    const_str_plain_Chord = UNSTREAM_STRING( &constant_bin[ 1571 ], 5, 1 );
    const_str_plain_ChordDiagram = UNSTREAM_STRING( &constant_bin[ 3397 ], 12, 1 );
    const_str_plain_Diagram = UNSTREAM_STRING( &constant_bin[ 57 ], 7, 1 );
    const_str_plain_MAX_NODE_LIMIT = UNSTREAM_STRING( &constant_bin[ 24859 ], 14, 1 );
    const_str_plain_RegionFactory = UNSTREAM_STRING( &constant_bin[ 93 ], 13, 1 );
    const_str_plain_Span = UNSTREAM_STRING( &constant_bin[ 610 ], 4, 1 );
    const_str_plain__ = UNSTREAM_CHAR( 95, 1 );
    const_str_plain___all__ = UNSTREAM_STRING( &constant_bin[ 24873 ], 7, 1 );
    const_str_plain___builtins__ = UNSTREAM_STRING( &constant_bin[ 24880 ], 12, 1 );
    const_str_plain___class__ = UNSTREAM_STRING( &constant_bin[ 24892 ], 9, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING( &constant_bin[ 24901 ], 7, 1 );
    const_str_plain___delattr__ = UNSTREAM_STRING( &constant_bin[ 24908 ], 11, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING( &constant_bin[ 24919 ], 8, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING( &constant_bin[ 24927 ], 7, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING( &constant_bin[ 24934 ], 9, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING( &constant_bin[ 24943 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING( &constant_bin[ 24951 ], 8, 1 );
    const_str_plain___getattr__ = UNSTREAM_STRING( &constant_bin[ 24959 ], 11, 1 );
    const_str_plain___import__ = UNSTREAM_STRING( &constant_bin[ 24970 ], 10, 1 );
    const_str_plain___init__ = UNSTREAM_STRING( &constant_bin[ 3410 ], 8, 1 );
    const_str_plain___main__ = UNSTREAM_STRING( &constant_bin[ 24980 ], 8, 1 );
    const_str_plain___metaclass__ = UNSTREAM_STRING( &constant_bin[ 24988 ], 13, 1 );
    const_str_plain___module__ = UNSTREAM_STRING( &constant_bin[ 25001 ], 10, 1 );
    const_str_plain___name__ = UNSTREAM_STRING( &constant_bin[ 25011 ], 8, 1 );
    const_str_plain___setattr__ = UNSTREAM_STRING( &constant_bin[ 25019 ], 11, 1 );
    const_str_plain_add = UNSTREAM_STRING( &constant_bin[ 5835 ], 3, 1 );
    const_str_plain_append = UNSTREAM_STRING( &constant_bin[ 25030 ], 6, 1 );
    const_str_plain_boundaries = UNSTREAM_STRING( &constant_bin[ 448 ], 10, 1 );
    const_str_plain_chord = UNSTREAM_STRING( &constant_bin[ 1666 ], 5, 1 );
    const_str_plain_compile = UNSTREAM_STRING( &constant_bin[ 25036 ], 7, 1 );
    const_str_plain_compress = UNSTREAM_STRING( &constant_bin[ 16915 ], 8, 1 );
    const_str_plain_contains_node = UNSTREAM_STRING( &constant_bin[ 25043 ], 13, 1 );
    const_str_plain_contains_span = UNSTREAM_STRING( &constant_bin[ 25056 ], 13, 1 );
    const_str_plain_copy = UNSTREAM_STRING( &constant_bin[ 1957 ], 4, 1 );
    const_str_plain_deepcopy = UNSTREAM_STRING( &constant_bin[ 1953 ], 8, 1 );
    const_str_plain_exc_traceback = UNSTREAM_STRING( &constant_bin[ 25069 ], 13, 1 );
    const_str_plain_exc_type = UNSTREAM_STRING( &constant_bin[ 25082 ], 8, 1 );
    const_str_plain_exc_value = UNSTREAM_STRING( &constant_bin[ 25090 ], 9, 1 );
    const_str_plain_first = UNSTREAM_STRING( &constant_bin[ 7800 ], 5, 1 );
    const_str_plain_format = UNSTREAM_STRING( &constant_bin[ 10416 ], 6, 1 );
    const_str_plain_gen_region_bounds = UNSTREAM_STRING( &constant_bin[ 3848 ], 17, 1 );
    const_str_plain_get = UNSTREAM_STRING( &constant_bin[ 3797 ], 3, 1 );
    const_str_plain_get_base_region = UNSTREAM_STRING( &constant_bin[ 25099 ], 15, 1 );
    const_str_plain_get_chord_by_node = UNSTREAM_STRING( &constant_bin[ 25114 ], 17, 1 );
    const_str_plain_get_first_region_id = UNSTREAM_STRING( &constant_bin[ 25131 ], 19, 1 );
    const_str_plain_get_lower_node = UNSTREAM_STRING( &constant_bin[ 25150 ], 14, 1 );
    const_str_plain_get_next_region_id = UNSTREAM_STRING( &constant_bin[ 25164 ], 18, 1 );
    const_str_plain_get_node_complement = UNSTREAM_STRING( &constant_bin[ 25182 ], 19, 1 );
    const_str_plain_get_other_node = UNSTREAM_STRING( &constant_bin[ 25201 ], 14, 1 );
    const_str_plain_get_regions_for_node = UNSTREAM_STRING( &constant_bin[ 10892 ], 20, 1 );
    const_str_plain_get_regions_for_nodes = UNSTREAM_STRING( &constant_bin[ 23449 ], 21, 1 );
    const_str_plain_get_span_complement = UNSTREAM_STRING( &constant_bin[ 22224 ], 19, 1 );
    const_str_plain_get_spans_from_node = UNSTREAM_STRING( &constant_bin[ 24599 ], 19, 1 );
    const_str_plain_get_upper_node = UNSTREAM_STRING( &constant_bin[ 25215 ], 14, 1 );
    const_str_plain_high = UNSTREAM_STRING( &constant_bin[ 2568 ], 4, 1 );
    const_str_plain_indent = UNSTREAM_STRING( &constant_bin[ 2226 ], 6, 1 );
    const_str_plain_inspect = UNSTREAM_STRING( &constant_bin[ 25229 ], 7, 1 );
    const_str_plain_int = UNSTREAM_STRING( &constant_bin[ 3609 ], 3, 1 );
    const_str_plain_is_node_on_region = UNSTREAM_STRING( &constant_bin[ 25236 ], 17, 1 );
    const_str_plain_is_planarable = UNSTREAM_STRING( &constant_bin[ 16314 ], 13, 1 );
    const_str_plain_iter = UNSTREAM_STRING( &constant_bin[ 3468 ], 4, 1 );
    const_str_plain_last = UNSTREAM_STRING( &constant_bin[ 646 ], 4, 1 );
    const_str_plain_len = UNSTREAM_STRING( &constant_bin[ 4565 ], 3, 1 );
    const_str_plain_length = UNSTREAM_STRING( &constant_bin[ 4565 ], 6, 1 );
    const_str_plain_list = UNSTREAM_STRING( &constant_bin[ 5394 ], 4, 1 );
    const_str_plain_locator = UNSTREAM_STRING( &constant_bin[ 2054 ], 7, 1 );
    const_str_plain_long = UNSTREAM_STRING( &constant_bin[ 4510 ], 4, 1 );
    const_str_plain_low = UNSTREAM_STRING( &constant_bin[ 3901 ], 3, 1 );
    const_str_plain_max_node_closed = UNSTREAM_STRING( &constant_bin[ 25253 ], 15, 1 );
    const_str_plain_minus = UNSTREAM_STRING( &constant_bin[ 20028 ], 5, 1 );
    const_str_plain_name = UNSTREAM_STRING( &constant_bin[ 7 ], 4, 1 );
    const_str_plain_name_to_regions = UNSTREAM_STRING( &constant_bin[ 24526 ], 15, 1 );
    const_str_plain_new_region = UNSTREAM_STRING( &constant_bin[ 3123 ], 10, 1 );
    const_str_plain_node = UNSTREAM_STRING( &constant_bin[ 860 ], 4, 1 );
    const_str_plain_node1 = UNSTREAM_STRING( &constant_bin[ 910 ], 5, 1 );
    const_str_plain_node2 = UNSTREAM_STRING( &constant_bin[ 961 ], 5, 1 );
    const_str_plain_object = UNSTREAM_STRING( &constant_bin[ 7104 ], 6, 1 );
    const_str_plain_open = UNSTREAM_STRING( &constant_bin[ 25268 ], 4, 1 );
    const_str_plain_order_spans_in_closed_loop = UNSTREAM_STRING( &constant_bin[ 22785 ], 26, 1 );
    const_str_plain_other_node = UNSTREAM_STRING( &constant_bin[ 25205 ], 10, 1 );
    const_str_plain_outside = UNSTREAM_STRING( &constant_bin[ 17886 ], 7, 1 );
    const_str_plain_range = UNSTREAM_STRING( &constant_bin[ 5040 ], 5, 1 );
    const_str_plain_region = UNSTREAM_STRING( &constant_bin[ 174 ], 6, 1 );
    const_str_plain_region_factory = UNSTREAM_STRING( &constant_bin[ 25272 ], 14, 1 );
    const_str_plain_region_tuples = UNSTREAM_STRING( &constant_bin[ 801 ], 13, 1 );
    const_str_plain_regions = UNSTREAM_STRING( &constant_bin[ 1012 ], 7, 1 );
    const_str_plain_remove = UNSTREAM_STRING( &constant_bin[ 3071 ], 6, 1 );
    const_str_plain_remove_one_moves = UNSTREAM_STRING( &constant_bin[ 25286 ], 16, 1 );
    const_str_plain_repr = UNSTREAM_STRING( &constant_bin[ 4674 ], 4, 1 );
    const_str_plain_result = UNSTREAM_STRING( &constant_bin[ 1117 ], 6, 1 );
    const_str_plain_self = UNSTREAM_STRING( &constant_bin[ 563 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING( &constant_bin[ 3685 ], 4, 1 );
    const_str_plain_size = UNSTREAM_STRING( &constant_bin[ 25302 ], 4, 1 );
    const_str_plain_sorted = UNSTREAM_STRING( &constant_bin[ 3645 ], 6, 1 );
    const_str_plain_span = UNSTREAM_STRING( &constant_bin[ 280 ], 4, 1 );
    const_str_plain_spans = UNSTREAM_STRING( &constant_bin[ 280 ], 5, 1 );
    const_str_plain_staticmethod = UNSTREAM_STRING( &constant_bin[ 25306 ], 12, 1 );
    const_str_plain_type = UNSTREAM_STRING( &constant_bin[ 25086 ], 4, 1 );
    const_str_plain_update_dangling_spans = UNSTREAM_STRING( &constant_bin[ 25318 ], 21, 1 );
    const_str_plain_update_regions = UNSTREAM_STRING( &constant_bin[ 8191 ], 14, 1 );
    const_str_plain_validate_all_regions_closed = UNSTREAM_STRING( &constant_bin[ 23066 ], 27, 1 );
    const_str_plain_xrange = UNSTREAM_STRING( &constant_bin[ 25339 ], 6, 1 );
    const_tuple_empty = PyTuple_New( 0 );
    const_tuple_none_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_BoundaryTracker_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BoundaryTracker_tuple, 0, const_str_plain_BoundaryTracker ); Py_INCREF( const_str_plain_BoundaryTracker );
    const_tuple_str_plain_Chord_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Chord_tuple, 0, const_str_plain_Chord ); Py_INCREF( const_str_plain_Chord );
    const_tuple_str_plain_Diagram_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Diagram_tuple, 0, const_str_plain_Diagram ); Py_INCREF( const_str_plain_Diagram );
    const_tuple_str_plain_RegionFactory_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RegionFactory_tuple, 0, const_str_plain_RegionFactory ); Py_INCREF( const_str_plain_RegionFactory );
    const_tuple_str_plain_Span_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Span_tuple, 0, const_str_plain_Span ); Py_INCREF( const_str_plain_Span );
    const_tuple_str_plain_deepcopy_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_deepcopy_tuple, 0, const_str_plain_deepcopy ); Py_INCREF( const_str_plain_deepcopy );
    const_tuple_str_plain_self_str_plain_node1_str_plain_node2_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node1_str_plain_node2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node1_str_plain_node2_tuple, 1, const_str_plain_node1 ); Py_INCREF( const_str_plain_node1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node1_str_plain_node2_tuple, 2, const_str_plain_node2 ); Py_INCREF( const_str_plain_node2 );
    const_tuple_str_plain_self_str_plain_node_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_node_tuple, 1, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    const_tuple_str_plain_self_str_plain_span_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_span_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_span_tuple, 1, const_str_plain_span ); Py_INCREF( const_str_plain_span );
    const_tuple_str_plain_self_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );

    return;
}

void _initConstants( void )
{
    if ( _sentinel_value == NULL )
    {
#if PYTHON_VERSION < 300
        _sentinel_value = PyCObject_FromVoidPtr( NULL, NULL );
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New( (void *)27, "sentinel", NULL );
#endif
        assert( _sentinel_value );

        __initConstants();
    }
}
