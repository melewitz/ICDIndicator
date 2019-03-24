
#include "nuitka/prelude.hpp"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *const_dict_38f920aecf1ad0c8a63c578536fcc0a2;
PyObject *const_dict_empty;
PyObject *const_int_0;
PyObject *const_int_neg_1;
PyObject *const_int_pos_1;
PyObject *const_int_pos_2;
PyObject *const_str_digest_2bb9a0f5b8dec139c45337c05a0c4b38;
PyObject *const_str_empty;
PyObject *const_str_newline;
PyObject *const_str_plain_Diagram;
PyObject *const_str_plain_ICDIndicator;
PyObject *const_str_plain_Planarable;
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
PyObject *const_str_plain_a;
PyObject *const_str_plain_add;
PyObject *const_str_plain_append;
PyObject *const_str_plain_b;
PyObject *const_str_plain_chord;
PyObject *const_str_plain_chords;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_count;
PyObject *const_str_plain_diagram;
PyObject *const_str_plain_dofilter;
PyObject *const_str_plain_exc_traceback;
PyObject *const_str_plain_exc_type;
PyObject *const_str_plain_exc_value;
PyObject *const_str_plain_exit;
PyObject *const_str_plain_format;
PyObject *const_str_plain_get;
PyObject *const_str_plain_get_possible_diagrams;
PyObject *const_str_plain_get_rotated_diagram;
PyObject *const_str_plain_i;
PyObject *const_str_plain_indent;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain_int;
PyObject *const_str_plain_is_planarable;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_iteritems;
PyObject *const_str_plain_key;
PyObject *const_str_plain_len;
PyObject *const_str_plain_long;
PyObject *const_str_plain_main;
PyObject *const_str_plain_n;
PyObject *const_str_plain_object;
PyObject *const_str_plain_open;
PyObject *const_str_plain_range;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_result;
PyObject *const_str_plain_self;
PyObject *const_str_plain_site;
PyObject *const_str_plain_size;
PyObject *const_str_plain_sorted;
PyObject *const_str_plain_sparse_diagram;
PyObject *const_str_plain_split;
PyObject *const_str_plain_stderr;
PyObject *const_str_plain_strftime;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_time;
PyObject *const_str_plain_timestamp;
PyObject *const_str_plain_type;
PyObject *const_str_plain_xrange;
PyObject *const_tuple_empty;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_none_tuple;
PyObject *const_tuple_str_plain_diagram_tuple;
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

    const_dict_38f920aecf1ad0c8a63c578536fcc0a2 = _PyDict_NewPresized( 1 );
    const_str_plain_dofilter = UNSTREAM_STRING( &constant_bin[ 1601 ], 8, 1 );
    PyDict_SetItem( const_dict_38f920aecf1ad0c8a63c578536fcc0a2, const_str_plain_dofilter, Py_False );
    const_dict_empty = _PyDict_NewPresized( 0 );
    const_int_0 = PyInt_FromLong( 0l );
    const_int_neg_1 = PyInt_FromLong( -1l );
    const_int_pos_1 = PyInt_FromLong( 1l );
    const_int_pos_2 = PyInt_FromLong( 2l );
    const_str_digest_2bb9a0f5b8dec139c45337c05a0c4b38 = UNSTREAM_STRING( &constant_bin[ 22566 ], 17, 0 );
    const_str_empty = UNSTREAM_STRING( &constant_bin[ 0 ], 0, 0 );
    const_str_newline = UNSTREAM_CHAR( 10, 0 );
    const_str_plain_Diagram = UNSTREAM_STRING( &constant_bin[ 3638 ], 7, 1 );
    const_str_plain_ICDIndicator = UNSTREAM_STRING( &constant_bin[ 8279 ], 12, 1 );
    const_str_plain_Planarable = UNSTREAM_STRING( &constant_bin[ 19086 ], 10, 1 );
    const_str_plain__ = UNSTREAM_CHAR( 95, 1 );
    const_str_plain___all__ = UNSTREAM_STRING( &constant_bin[ 22583 ], 7, 1 );
    const_str_plain___builtins__ = UNSTREAM_STRING( &constant_bin[ 22590 ], 12, 1 );
    const_str_plain___class__ = UNSTREAM_STRING( &constant_bin[ 22602 ], 9, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING( &constant_bin[ 22611 ], 7, 1 );
    const_str_plain___delattr__ = UNSTREAM_STRING( &constant_bin[ 22618 ], 11, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING( &constant_bin[ 22629 ], 8, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING( &constant_bin[ 22637 ], 7, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING( &constant_bin[ 22644 ], 9, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING( &constant_bin[ 22653 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING( &constant_bin[ 22661 ], 8, 1 );
    const_str_plain___getattr__ = UNSTREAM_STRING( &constant_bin[ 22669 ], 11, 1 );
    const_str_plain___import__ = UNSTREAM_STRING( &constant_bin[ 22680 ], 10, 1 );
    const_str_plain___init__ = UNSTREAM_STRING( &constant_bin[ 22690 ], 8, 1 );
    const_str_plain___main__ = UNSTREAM_STRING( &constant_bin[ 22698 ], 8, 1 );
    const_str_plain___metaclass__ = UNSTREAM_STRING( &constant_bin[ 22706 ], 13, 1 );
    const_str_plain___module__ = UNSTREAM_STRING( &constant_bin[ 22719 ], 10, 1 );
    const_str_plain___name__ = UNSTREAM_STRING( &constant_bin[ 22729 ], 8, 1 );
    const_str_plain___setattr__ = UNSTREAM_STRING( &constant_bin[ 22737 ], 11, 1 );
    const_str_plain_a = UNSTREAM_CHAR( 97, 1 );
    const_str_plain_add = UNSTREAM_STRING( &constant_bin[ 999 ], 3, 1 );
    const_str_plain_append = UNSTREAM_STRING( &constant_bin[ 22748 ], 6, 1 );
    const_str_plain_b = UNSTREAM_CHAR( 98, 1 );
    const_str_plain_chord = UNSTREAM_STRING( &constant_bin[ 216 ], 5, 1 );
    const_str_plain_chords = UNSTREAM_STRING( &constant_bin[ 863 ], 6, 1 );
    const_str_plain_compile = UNSTREAM_STRING( &constant_bin[ 22754 ], 7, 1 );
    const_str_plain_count = UNSTREAM_STRING( &constant_bin[ 127 ], 5, 1 );
    const_str_plain_diagram = UNSTREAM_STRING( &constant_bin[ 1100 ], 7, 1 );
    const_str_plain_exc_traceback = UNSTREAM_STRING( &constant_bin[ 22761 ], 13, 1 );
    const_str_plain_exc_type = UNSTREAM_STRING( &constant_bin[ 22774 ], 8, 1 );
    const_str_plain_exc_value = UNSTREAM_STRING( &constant_bin[ 22782 ], 9, 1 );
    const_str_plain_exit = UNSTREAM_STRING( &constant_bin[ 22655 ], 4, 1 );
    const_str_plain_format = UNSTREAM_STRING( &constant_bin[ 13352 ], 6, 1 );
    const_str_plain_get = UNSTREAM_STRING( &constant_bin[ 950 ], 3, 1 );
    const_str_plain_get_possible_diagrams = UNSTREAM_STRING( &constant_bin[ 3263 ], 21, 1 );
    const_str_plain_get_rotated_diagram = UNSTREAM_STRING( &constant_bin[ 2117 ], 19, 1 );
    const_str_plain_i = UNSTREAM_CHAR( 105, 1 );
    const_str_plain_indent = UNSTREAM_STRING( &constant_bin[ 1655 ], 6, 1 );
    const_str_plain_inspect = UNSTREAM_STRING( &constant_bin[ 22791 ], 7, 1 );
    const_str_plain_int = UNSTREAM_STRING( &constant_bin[ 123 ], 3, 1 );
    const_str_plain_is_planarable = UNSTREAM_STRING( &constant_bin[ 10020 ], 13, 1 );
    const_str_plain_iter = UNSTREAM_STRING( &constant_bin[ 175 ], 4, 1 );
    const_str_plain_iteritems = UNSTREAM_STRING( &constant_bin[ 22798 ], 9, 1 );
    const_str_plain_key = UNSTREAM_STRING( &constant_bin[ 7071 ], 3, 1 );
    const_str_plain_len = UNSTREAM_STRING( &constant_bin[ 6485 ], 3, 1 );
    const_str_plain_long = UNSTREAM_STRING( &constant_bin[ 10702 ], 4, 1 );
    const_str_plain_main = UNSTREAM_STRING( &constant_bin[ 6303 ], 4, 1 );
    const_str_plain_n = UNSTREAM_CHAR( 110, 1 );
    const_str_plain_object = UNSTREAM_STRING( &constant_bin[ 13376 ], 6, 1 );
    const_str_plain_open = UNSTREAM_STRING( &constant_bin[ 22807 ], 4, 1 );
    const_str_plain_range = UNSTREAM_STRING( &constant_bin[ 20635 ], 5, 1 );
    const_str_plain_repr = UNSTREAM_STRING( &constant_bin[ 22811 ], 4, 1 );
    const_str_plain_result = UNSTREAM_STRING( &constant_bin[ 4558 ], 6, 1 );
    const_str_plain_self = UNSTREAM_STRING( &constant_bin[ 3502 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING( &constant_bin[ 9994 ], 4, 1 );
    const_str_plain_size = UNSTREAM_STRING( &constant_bin[ 7873 ], 4, 1 );
    const_str_plain_sorted = UNSTREAM_STRING( &constant_bin[ 1758 ], 6, 1 );
    const_str_plain_sparse_diagram = UNSTREAM_STRING( &constant_bin[ 1915 ], 14, 1 );
    const_str_plain_split = UNSTREAM_STRING( &constant_bin[ 22815 ], 5, 1 );
    const_str_plain_stderr = UNSTREAM_STRING( &constant_bin[ 22820 ], 6, 1 );
    const_str_plain_strftime = UNSTREAM_STRING( &constant_bin[ 22826 ], 8, 1 );
    const_str_plain_sys = UNSTREAM_STRING( &constant_bin[ 46 ], 3, 1 );
    const_str_plain_time = UNSTREAM_STRING( &constant_bin[ 13 ], 4, 1 );
    const_str_plain_timestamp = UNSTREAM_STRING( &constant_bin[ 912 ], 9, 1 );
    const_str_plain_type = UNSTREAM_STRING( &constant_bin[ 22778 ], 4, 1 );
    const_str_plain_xrange = UNSTREAM_STRING( &constant_bin[ 22834 ], 6, 1 );
    const_tuple_empty = PyTuple_New( 0 );
    const_tuple_int_pos_1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_none_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_diagram_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_diagram_tuple, 0, const_str_plain_diagram ); Py_INCREF( const_str_plain_diagram );
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
