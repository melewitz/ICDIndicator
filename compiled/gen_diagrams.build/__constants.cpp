
#include "nuitka/prelude.hpp"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *const_dict_empty;
PyObject *const_int_0;
PyObject *const_int_neg_1;
PyObject *const_int_pos_1;
PyObject *const_int_pos_100000;
PyObject *const_int_pos_2;
PyObject *const_int_pos_3;
PyObject *const_int_pos_4;
PyObject *const_str_angle_string;
PyObject *const_str_digest_03937373fabec6b1a26cee54a73d4917;
PyObject *const_str_digest_1bcbfd703e41ba80195b5a84d610dbd4;
PyObject *const_str_digest_2bb9a0f5b8dec139c45337c05a0c4b38;
PyObject *const_str_digest_36a0ff6adef8f150baa070bcc241cce5;
PyObject *const_str_digest_dc2a0cea0cc8765646e6551215b10eac;
PyObject *const_str_empty;
PyObject *const_str_newline;
PyObject *const_str_plain_BoundaryTracker;
PyObject *const_str_plain_Chord;
PyObject *const_str_plain_Diagram;
PyObject *const_str_plain_ICDIndicator;
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
PyObject *const_str_plain___iterator;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain___module__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___setattr__;
PyObject *const_str_plain_add;
PyObject *const_str_plain_adjacent;
PyObject *const_str_plain_append;
PyObject *const_str_plain_bits;
PyObject *const_str_plain_boundaries;
PyObject *const_str_plain_ceil;
PyObject *const_str_plain_chord;
PyObject *const_str_plain_chord1;
PyObject *const_str_plain_chord2;
PyObject *const_str_plain_chord_length;
PyObject *const_str_plain_chords;
PyObject *const_str_plain_chords_by_node;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_compressed_diag;
PyObject *const_str_plain_contains_node;
PyObject *const_str_plain_contains_one_move;
PyObject *const_str_plain_contains_span;
PyObject *const_str_plain_contains_three_move;
PyObject *const_str_plain_contains_two_move;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_count;
PyObject *const_str_plain_deepcopy;
PyObject *const_str_plain_delta;
PyObject *const_str_plain_diag;
PyObject *const_str_plain_diag_fmt_key;
PyObject *const_str_plain_diag_str;
PyObject *const_str_plain_diagram;
PyObject *const_str_plain_diagram_filter;
PyObject *const_str_plain_diagram_to_key;
PyObject *const_str_plain_diagrams;
PyObject *const_str_plain_ep_list;
PyObject *const_str_plain_eval;
PyObject *const_str_plain_exc_traceback;
PyObject *const_str_plain_exc_type;
PyObject *const_str_plain_exc_value;
PyObject *const_str_plain_exit;
PyObject *const_str_plain_factor;
PyObject *const_str_plain_filter;
PyObject *const_str_plain_format;
PyObject *const_str_plain_gen_possible_diagrams;
PyObject *const_str_plain_gen_region_bounds;
PyObject *const_str_plain_get;
PyObject *const_str_plain_get_base_region;
PyObject *const_str_plain_get_chord_by_node;
PyObject *const_str_plain_get_compressed_diagram;
PyObject *const_str_plain_get_first_region_id;
PyObject *const_str_plain_get_lower_node;
PyObject *const_str_plain_get_next_region_id;
PyObject *const_str_plain_get_node_complement;
PyObject *const_str_plain_get_other_node;
PyObject *const_str_plain_get_possible_chords;
PyObject *const_str_plain_get_regions_for_node;
PyObject *const_str_plain_get_upper_node;
PyObject *const_str_plain_high;
PyObject *const_str_plain_i;
PyObject *const_str_plain_indent;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain_int;
PyObject *const_str_plain_is_node_on_region;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_itertools;
PyObject *const_str_plain_j;
PyObject *const_str_plain_key;
PyObject *const_str_plain_key_to_diagram;
PyObject *const_str_plain_last;
PyObject *const_str_plain_len;
PyObject *const_str_plain_length;
PyObject *const_str_plain_list;
PyObject *const_str_plain_locator;
PyObject *const_str_plain_log;
PyObject *const_str_plain_long;
PyObject *const_str_plain_low;
PyObject *const_str_plain_main;
PyObject *const_str_plain_math;
PyObject *const_str_plain_max_node_closed;
PyObject *const_str_plain_minus;
PyObject *const_str_plain_msg;
PyObject *const_str_plain_n;
PyObject *const_str_plain_n_chords;
PyObject *const_str_plain_n_nodes;
PyObject *const_str_plain_new_region;
PyObject *const_str_plain_node;
PyObject *const_str_plain_node1;
PyObject *const_str_plain_node2;
PyObject *const_str_plain_object;
PyObject *const_str_plain_open;
PyObject *const_str_plain_opt;
PyObject *const_str_plain_other_node;
PyObject *const_str_plain_pop;
PyObject *const_str_plain_print_status;
PyObject *const_str_plain_range;
PyObject *const_str_plain_region;
PyObject *const_str_plain_region_factory;
PyObject *const_str_plain_region_tuples;
PyObject *const_str_plain_regions;
PyObject *const_str_plain_remove;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_result;
PyObject *const_str_plain_reverse;
PyObject *const_str_plain_scale;
PyObject *const_str_plain_self;
PyObject *const_str_plain_site;
PyObject *const_str_plain_size;
PyObject *const_str_plain_sorted;
PyObject *const_str_plain_span;
PyObject *const_str_plain_sparse_diagram;
PyObject *const_str_plain_split;
PyObject *const_str_plain_staticmethod;
PyObject *const_str_plain_stderr;
PyObject *const_str_plain_strftime;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_time;
PyObject *const_str_plain_timestamp;
PyObject *const_str_plain_type;
PyObject *const_str_plain_update_dangling_spans;
PyObject *const_str_plain_xrange;
PyObject *const_tuple_empty;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_tuple_none_tuple;
PyObject *const_tuple_str_plain_Chord_tuple;
PyObject *const_tuple_str_plain_Diagram_tuple;
PyObject *const_tuple_str_plain_Span_tuple;
PyObject *const_tuple_str_plain_deepcopy_tuple;
PyObject *const_tuple_str_plain_diagram_to_key_str_plain_key_to_diagram_tuple;
PyObject *const_tuple_str_plain_diagram_tuple;
PyObject *const_tuple_str_plain_log_str_plain_ceil_tuple;
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
    const_int_pos_100000 = PyInt_FromLong( 100000l );
    const_int_pos_2 = PyInt_FromLong( 2l );
    const_int_pos_3 = PyInt_FromLong( 3l );
    const_int_pos_4 = PyInt_FromLong( 4l );
    const_str_angle_string = UNSTREAM_STRING( &constant_bin[ 33354 ], 8, 0 );
    const_str_digest_03937373fabec6b1a26cee54a73d4917 = UNSTREAM_STRING( &constant_bin[ 33362 ], 28, 0 );
    const_str_digest_1bcbfd703e41ba80195b5a84d610dbd4 = UNSTREAM_STRING( &constant_bin[ 33390 ], 20, 0 );
    const_str_digest_2bb9a0f5b8dec139c45337c05a0c4b38 = UNSTREAM_STRING( &constant_bin[ 33410 ], 17, 0 );
    const_str_digest_36a0ff6adef8f150baa070bcc241cce5 = UNSTREAM_STRING( &constant_bin[ 33427 ], 2, 0 );
    const_str_digest_dc2a0cea0cc8765646e6551215b10eac = UNSTREAM_STRING( &constant_bin[ 33429 ], 20, 0 );
    const_str_empty = UNSTREAM_STRING( &constant_bin[ 0 ], 0, 0 );
    const_str_newline = UNSTREAM_CHAR( 10, 0 );
    const_str_plain_BoundaryTracker = UNSTREAM_STRING( &constant_bin[ 13 ], 15, 1 );
    const_str_plain_Chord = UNSTREAM_STRING( &constant_bin[ 1571 ], 5, 1 );
    const_str_plain_Diagram = UNSTREAM_STRING( &constant_bin[ 57 ], 7, 1 );
    const_str_plain_ICDIndicator = UNSTREAM_STRING( &constant_bin[ 9380 ], 12, 1 );
    const_str_plain_MAX_NODE_LIMIT = UNSTREAM_STRING( &constant_bin[ 33449 ], 14, 1 );
    const_str_plain_RegionFactory = UNSTREAM_STRING( &constant_bin[ 93 ], 13, 1 );
    const_str_plain_Span = UNSTREAM_STRING( &constant_bin[ 610 ], 4, 1 );
    const_str_plain__ = UNSTREAM_CHAR( 95, 1 );
    const_str_plain___all__ = UNSTREAM_STRING( &constant_bin[ 33463 ], 7, 1 );
    const_str_plain___builtins__ = UNSTREAM_STRING( &constant_bin[ 33470 ], 12, 1 );
    const_str_plain___class__ = UNSTREAM_STRING( &constant_bin[ 33482 ], 9, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING( &constant_bin[ 33491 ], 7, 1 );
    const_str_plain___delattr__ = UNSTREAM_STRING( &constant_bin[ 33498 ], 11, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING( &constant_bin[ 33509 ], 8, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING( &constant_bin[ 33517 ], 7, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING( &constant_bin[ 33524 ], 9, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING( &constant_bin[ 33533 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING( &constant_bin[ 33541 ], 8, 1 );
    const_str_plain___getattr__ = UNSTREAM_STRING( &constant_bin[ 33549 ], 11, 1 );
    const_str_plain___import__ = UNSTREAM_STRING( &constant_bin[ 33560 ], 10, 1 );
    const_str_plain___init__ = UNSTREAM_STRING( &constant_bin[ 9406 ], 8, 1 );
    const_str_plain___iterator = UNSTREAM_STRING( &constant_bin[ 33570 ], 10, 1 );
    const_str_plain___main__ = UNSTREAM_STRING( &constant_bin[ 33580 ], 8, 1 );
    const_str_plain___metaclass__ = UNSTREAM_STRING( &constant_bin[ 33588 ], 13, 1 );
    const_str_plain___module__ = UNSTREAM_STRING( &constant_bin[ 33601 ], 10, 1 );
    const_str_plain___name__ = UNSTREAM_STRING( &constant_bin[ 33611 ], 8, 1 );
    const_str_plain___setattr__ = UNSTREAM_STRING( &constant_bin[ 33619 ], 11, 1 );
    const_str_plain_add = UNSTREAM_STRING( &constant_bin[ 5945 ], 3, 1 );
    const_str_plain_adjacent = UNSTREAM_STRING( &constant_bin[ 4595 ], 8, 1 );
    const_str_plain_append = UNSTREAM_STRING( &constant_bin[ 33630 ], 6, 1 );
    const_str_plain_bits = UNSTREAM_STRING( &constant_bin[ 3421 ], 4, 1 );
    const_str_plain_boundaries = UNSTREAM_STRING( &constant_bin[ 448 ], 10, 1 );
    const_str_plain_ceil = UNSTREAM_STRING( &constant_bin[ 3517 ], 4, 1 );
    const_str_plain_chord = UNSTREAM_STRING( &constant_bin[ 1666 ], 5, 1 );
    const_str_plain_chord1 = UNSTREAM_STRING( &constant_bin[ 4864 ], 6, 1 );
    const_str_plain_chord2 = UNSTREAM_STRING( &constant_bin[ 4916 ], 6, 1 );
    const_str_plain_chord_length = UNSTREAM_STRING( &constant_bin[ 8650 ], 12, 1 );
    const_str_plain_chords = UNSTREAM_STRING( &constant_bin[ 3009 ], 6, 1 );
    const_str_plain_chords_by_node = UNSTREAM_STRING( &constant_bin[ 8593 ], 14, 1 );
    const_str_plain_compile = UNSTREAM_STRING( &constant_bin[ 33636 ], 7, 1 );
    const_str_plain_compressed_diag = UNSTREAM_STRING( &constant_bin[ 6219 ], 15, 1 );
    const_str_plain_contains_node = UNSTREAM_STRING( &constant_bin[ 33643 ], 13, 1 );
    const_str_plain_contains_one_move = UNSTREAM_STRING( &constant_bin[ 7402 ], 17, 1 );
    const_str_plain_contains_span = UNSTREAM_STRING( &constant_bin[ 33656 ], 13, 1 );
    const_str_plain_contains_three_move = UNSTREAM_STRING( &constant_bin[ 7494 ], 19, 1 );
    const_str_plain_contains_two_move = UNSTREAM_STRING( &constant_bin[ 7448 ], 17, 1 );
    const_str_plain_copy = UNSTREAM_STRING( &constant_bin[ 1957 ], 4, 1 );
    const_str_plain_count = UNSTREAM_STRING( &constant_bin[ 2114 ], 5, 1 );
    const_str_plain_deepcopy = UNSTREAM_STRING( &constant_bin[ 1953 ], 8, 1 );
    const_str_plain_delta = UNSTREAM_STRING( &constant_bin[ 33669 ], 5, 1 );
    const_str_plain_diag = UNSTREAM_STRING( &constant_bin[ 1343 ], 4, 1 );
    const_str_plain_diag_fmt_key = UNSTREAM_STRING( &constant_bin[ 4120 ], 12, 1 );
    const_str_plain_diag_str = UNSTREAM_STRING( &constant_bin[ 4221 ], 8, 1 );
    const_str_plain_diagram = UNSTREAM_STRING( &constant_bin[ 1343 ], 7, 1 );
    const_str_plain_diagram_filter = UNSTREAM_STRING( &constant_bin[ 9259 ], 14, 1 );
    const_str_plain_diagram_to_key = UNSTREAM_STRING( &constant_bin[ 6266 ], 14, 1 );
    const_str_plain_diagrams = UNSTREAM_STRING( &constant_bin[ 4438 ], 8, 1 );
    const_str_plain_ep_list = UNSTREAM_STRING( &constant_bin[ 5398 ], 7, 1 );
    const_str_plain_eval = UNSTREAM_STRING( &constant_bin[ 33674 ], 4, 1 );
    const_str_plain_exc_traceback = UNSTREAM_STRING( &constant_bin[ 33678 ], 13, 1 );
    const_str_plain_exc_type = UNSTREAM_STRING( &constant_bin[ 33691 ], 8, 1 );
    const_str_plain_exc_value = UNSTREAM_STRING( &constant_bin[ 33699 ], 9, 1 );
    const_str_plain_exit = UNSTREAM_STRING( &constant_bin[ 33535 ], 4, 1 );
    const_str_plain_factor = UNSTREAM_STRING( &constant_bin[ 2741 ], 6, 1 );
    const_str_plain_filter = UNSTREAM_STRING( &constant_bin[ 9267 ], 6, 1 );
    const_str_plain_format = UNSTREAM_STRING( &constant_bin[ 16510 ], 6, 1 );
    const_str_plain_gen_possible_diagrams = UNSTREAM_STRING( &constant_bin[ 4535 ], 21, 1 );
    const_str_plain_gen_region_bounds = UNSTREAM_STRING( &constant_bin[ 9849 ], 17, 1 );
    const_str_plain_get = UNSTREAM_STRING( &constant_bin[ 3316 ], 3, 1 );
    const_str_plain_get_base_region = UNSTREAM_STRING( &constant_bin[ 33708 ], 15, 1 );
    const_str_plain_get_chord_by_node = UNSTREAM_STRING( &constant_bin[ 33723 ], 17, 1 );
    const_str_plain_get_compressed_diagram = UNSTREAM_STRING( &constant_bin[ 6215 ], 22, 1 );
    const_str_plain_get_first_region_id = UNSTREAM_STRING( &constant_bin[ 33740 ], 19, 1 );
    const_str_plain_get_lower_node = UNSTREAM_STRING( &constant_bin[ 33759 ], 14, 1 );
    const_str_plain_get_next_region_id = UNSTREAM_STRING( &constant_bin[ 33773 ], 18, 1 );
    const_str_plain_get_node_complement = UNSTREAM_STRING( &constant_bin[ 33791 ], 19, 1 );
    const_str_plain_get_other_node = UNSTREAM_STRING( &constant_bin[ 4965 ], 14, 1 );
    const_str_plain_get_possible_chords = UNSTREAM_STRING( &constant_bin[ 5597 ], 19, 1 );
    const_str_plain_get_regions_for_node = UNSTREAM_STRING( &constant_bin[ 9982 ], 20, 1 );
    const_str_plain_get_upper_node = UNSTREAM_STRING( &constant_bin[ 33810 ], 14, 1 );
    const_str_plain_high = UNSTREAM_STRING( &constant_bin[ 2568 ], 4, 1 );
    const_str_plain_i = UNSTREAM_CHAR( 105, 1 );
    const_str_plain_indent = UNSTREAM_STRING( &constant_bin[ 2226 ], 6, 1 );
    const_str_plain_inspect = UNSTREAM_STRING( &constant_bin[ 33824 ], 7, 1 );
    const_str_plain_int = UNSTREAM_STRING( &constant_bin[ 4640 ], 3, 1 );
    const_str_plain_is_node_on_region = UNSTREAM_STRING( &constant_bin[ 33831 ], 17, 1 );
    const_str_plain_iter = UNSTREAM_STRING( &constant_bin[ 5063 ], 4, 1 );
    const_str_plain_itertools = UNSTREAM_STRING( &constant_bin[ 5063 ], 9, 1 );
    const_str_plain_j = UNSTREAM_CHAR( 106, 1 );
    const_str_plain_key = UNSTREAM_STRING( &constant_bin[ 3212 ], 3, 1 );
    const_str_plain_key_to_diagram = UNSTREAM_STRING( &constant_bin[ 4175 ], 14, 1 );
    const_str_plain_last = UNSTREAM_STRING( &constant_bin[ 646 ], 4, 1 );
    const_str_plain_len = UNSTREAM_STRING( &constant_bin[ 8656 ], 3, 1 );
    const_str_plain_length = UNSTREAM_STRING( &constant_bin[ 8656 ], 6, 1 );
    const_str_plain_list = UNSTREAM_STRING( &constant_bin[ 5401 ], 4, 1 );
    const_str_plain_locator = UNSTREAM_STRING( &constant_bin[ 2054 ], 7, 1 );
    const_str_plain_log = UNSTREAM_STRING( &constant_bin[ 3550 ], 3, 1 );
    const_str_plain_long = UNSTREAM_STRING( &constant_bin[ 10604 ], 4, 1 );
    const_str_plain_low = UNSTREAM_STRING( &constant_bin[ 9921 ], 3, 1 );
    const_str_plain_main = UNSTREAM_STRING( &constant_bin[ 8557 ], 4, 1 );
    const_str_plain_math = UNSTREAM_STRING( &constant_bin[ 33848 ], 4, 1 );
    const_str_plain_max_node_closed = UNSTREAM_STRING( &constant_bin[ 33852 ], 15, 1 );
    const_str_plain_minus = UNSTREAM_STRING( &constant_bin[ 26219 ], 5, 1 );
    const_str_plain_msg = UNSTREAM_STRING( &constant_bin[ 31843 ], 3, 1 );
    const_str_plain_n = UNSTREAM_CHAR( 110, 1 );
    const_str_plain_n_chords = UNSTREAM_STRING( &constant_bin[ 3637 ], 8, 1 );
    const_str_plain_n_nodes = UNSTREAM_STRING( &constant_bin[ 4754 ], 7, 1 );
    const_str_plain_new_region = UNSTREAM_STRING( &constant_bin[ 3123 ], 10, 1 );
    const_str_plain_node = UNSTREAM_STRING( &constant_bin[ 860 ], 4, 1 );
    const_str_plain_node1 = UNSTREAM_STRING( &constant_bin[ 910 ], 5, 1 );
    const_str_plain_node2 = UNSTREAM_STRING( &constant_bin[ 961 ], 5, 1 );
    const_str_plain_object = UNSTREAM_STRING( &constant_bin[ 13198 ], 6, 1 );
    const_str_plain_open = UNSTREAM_STRING( &constant_bin[ 32771 ], 4, 1 );
    const_str_plain_opt = UNSTREAM_STRING( &constant_bin[ 8694 ], 3, 1 );
    const_str_plain_other_node = UNSTREAM_STRING( &constant_bin[ 4969 ], 10, 1 );
    const_str_plain_pop = UNSTREAM_STRING( &constant_bin[ 33867 ], 3, 1 );
    const_str_plain_print_status = UNSTREAM_STRING( &constant_bin[ 5761 ], 12, 1 );
    const_str_plain_range = UNSTREAM_STRING( &constant_bin[ 11134 ], 5, 1 );
    const_str_plain_region = UNSTREAM_STRING( &constant_bin[ 174 ], 6, 1 );
    const_str_plain_region_factory = UNSTREAM_STRING( &constant_bin[ 33870 ], 14, 1 );
    const_str_plain_region_tuples = UNSTREAM_STRING( &constant_bin[ 801 ], 13, 1 );
    const_str_plain_regions = UNSTREAM_STRING( &constant_bin[ 1012 ], 7, 1 );
    const_str_plain_remove = UNSTREAM_STRING( &constant_bin[ 3071 ], 6, 1 );
    const_str_plain_repr = UNSTREAM_STRING( &constant_bin[ 10768 ], 4, 1 );
    const_str_plain_result = UNSTREAM_STRING( &constant_bin[ 1117 ], 6, 1 );
    const_str_plain_reverse = UNSTREAM_STRING( &constant_bin[ 33884 ], 7, 1 );
    const_str_plain_scale = UNSTREAM_STRING( &constant_bin[ 7359 ], 5, 1 );
    const_str_plain_self = UNSTREAM_STRING( &constant_bin[ 563 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING( &constant_bin[ 9657 ], 4, 1 );
    const_str_plain_size = UNSTREAM_STRING( &constant_bin[ 4330 ], 4, 1 );
    const_str_plain_sorted = UNSTREAM_STRING( &constant_bin[ 7056 ], 6, 1 );
    const_str_plain_span = UNSTREAM_STRING( &constant_bin[ 280 ], 4, 1 );
    const_str_plain_sparse_diagram = UNSTREAM_STRING( &constant_bin[ 2949 ], 14, 1 );
    const_str_plain_split = UNSTREAM_STRING( &constant_bin[ 33891 ], 5, 1 );
    const_str_plain_staticmethod = UNSTREAM_STRING( &constant_bin[ 33896 ], 12, 1 );
    const_str_plain_stderr = UNSTREAM_STRING( &constant_bin[ 33908 ], 6, 1 );
    const_str_plain_strftime = UNSTREAM_STRING( &constant_bin[ 33914 ], 8, 1 );
    const_str_plain_strip = UNSTREAM_STRING( &constant_bin[ 33922 ], 5, 1 );
    const_str_plain_sys = UNSTREAM_STRING( &constant_bin[ 3801 ], 3, 1 );
    const_str_plain_time = UNSTREAM_STRING( &constant_bin[ 3176 ], 4, 1 );
    const_str_plain_timestamp = UNSTREAM_STRING( &constant_bin[ 3887 ], 9, 1 );
    const_str_plain_type = UNSTREAM_STRING( &constant_bin[ 31356 ], 4, 1 );
    const_str_plain_update_dangling_spans = UNSTREAM_STRING( &constant_bin[ 33927 ], 21, 1 );
    const_str_plain_xrange = UNSTREAM_STRING( &constant_bin[ 33948 ], 6, 1 );
    const_tuple_empty = PyTuple_New( 0 );
    const_tuple_int_pos_1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_int_pos_2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_tuple, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_tuple_none_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_Chord_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Chord_tuple, 0, const_str_plain_Chord ); Py_INCREF( const_str_plain_Chord );
    const_tuple_str_plain_Diagram_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Diagram_tuple, 0, const_str_plain_Diagram ); Py_INCREF( const_str_plain_Diagram );
    const_tuple_str_plain_Span_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Span_tuple, 0, const_str_plain_Span ); Py_INCREF( const_str_plain_Span );
    const_tuple_str_plain_deepcopy_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_deepcopy_tuple, 0, const_str_plain_deepcopy ); Py_INCREF( const_str_plain_deepcopy );
    const_tuple_str_plain_diagram_to_key_str_plain_key_to_diagram_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_diagram_to_key_str_plain_key_to_diagram_tuple, 0, const_str_plain_diagram_to_key ); Py_INCREF( const_str_plain_diagram_to_key );
    PyTuple_SET_ITEM( const_tuple_str_plain_diagram_to_key_str_plain_key_to_diagram_tuple, 1, const_str_plain_key_to_diagram ); Py_INCREF( const_str_plain_key_to_diagram );
    const_tuple_str_plain_diagram_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_diagram_tuple, 0, const_str_plain_diagram ); Py_INCREF( const_str_plain_diagram );
    const_tuple_str_plain_log_str_plain_ceil_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_log_str_plain_ceil_tuple, 0, const_str_plain_log ); Py_INCREF( const_str_plain_log );
    PyTuple_SET_ITEM( const_tuple_str_plain_log_str_plain_ceil_tuple, 1, const_str_plain_ceil ); Py_INCREF( const_str_plain_ceil );
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
