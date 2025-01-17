// Generated code for Python source for module 'ChordDiagram.Span'
// created by Nuitka version 0.5.7

// This code is in part copyright 2014 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__helpers.hpp"

// The _module_ChordDiagram$Span is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_ChordDiagram$Span;
PyDictObject *moduledict_ChordDiagram$Span;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_low;
extern PyObject *const_str_plain_Span;
extern PyObject *const_str_plain_high;
extern PyObject *const_str_plain_last;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_node;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_span;
static PyObject *const_str_plain_first;
extern PyObject *const_str_plain_minus;
extern PyObject *const_str_plain_node1;
extern PyObject *const_str_plain_node2;
static PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_length;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_other_node;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_contains_node;
extern PyObject *const_str_plain_contains_span;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_node_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_span_tuple;
static PyObject *const_str_digest_06d945c1f2abab88e10b6a858deeae47;
static PyObject *const_str_digest_1457a275190c0920959d1682ddb3ceb2;
static PyObject *const_str_digest_210c42986c757d95434453911933e7fe;
static PyObject *const_str_digest_290b5f372c3df13078daf3aa37797d93;
static PyObject *const_str_digest_355d78c9af44f1bfb7755a0e9de549e3;
static PyObject *const_str_digest_3f64a146cea731839cc427dcc2cc4d91;
static PyObject *const_str_digest_5f7c8db418c2af3b865ace7b366b21db;
static PyObject *const_str_digest_8a773ecd4a73d6bba3186e7c748a348a;
static PyObject *const_str_digest_9e2423a1cfc9b010406b387d6b3af772;
static PyObject *const_str_digest_ece764e0eac134323e73bffa169246f0;
static PyObject *const_str_digest_ecf0758ffbfc2ac4a889bd2ad1f7bb6d;
static PyObject *const_str_digest_ee9567b10f1d1f0df70929904a9de356;
extern PyObject *const_tuple_str_plain_self_str_plain_node1_str_plain_node2_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_first = UNSTREAM_STRING( &constant_bin[ 13894 ], 5, 1 );
    const_str_plain_tuple = UNSTREAM_STRING( &constant_bin[ 808 ], 5, 1 );
    const_str_digest_06d945c1f2abab88e10b6a858deeae47 = UNSTREAM_STRING( &constant_bin[ 25390 ], 299, 0 );
    const_str_digest_1457a275190c0920959d1682ddb3ceb2 = UNSTREAM_STRING( &constant_bin[ 25689 ], 200, 0 );
    const_str_digest_210c42986c757d95434453911933e7fe = UNSTREAM_STRING( &constant_bin[ 25889 ], 17, 0 );
    const_str_digest_290b5f372c3df13078daf3aa37797d93 = UNSTREAM_STRING( &constant_bin[ 25906 ], 249, 0 );
    const_str_digest_355d78c9af44f1bfb7755a0e9de549e3 = UNSTREAM_STRING( &constant_bin[ 26155 ], 247, 0 );
    const_str_digest_3f64a146cea731839cc427dcc2cc4d91 = UNSTREAM_STRING( &constant_bin[ 26402 ], 321, 0 );
    const_str_digest_5f7c8db418c2af3b865ace7b366b21db = UNSTREAM_STRING( &constant_bin[ 26723 ], 431, 0 );
    const_str_digest_8a773ecd4a73d6bba3186e7c748a348a = UNSTREAM_STRING( &constant_bin[ 27154 ], 198, 0 );
    const_str_digest_9e2423a1cfc9b010406b387d6b3af772 = UNSTREAM_STRING( &constant_bin[ 27352 ], 49, 0 );
    const_str_digest_ece764e0eac134323e73bffa169246f0 = UNSTREAM_STRING( &constant_bin[ 27401 ], 27, 0 );
    const_str_digest_ecf0758ffbfc2ac4a889bd2ad1f7bb6d = UNSTREAM_STRING( &constant_bin[ 27428 ], 469, 0 );
    const_str_digest_ee9567b10f1d1f0df70929904a9de356 = UNSTREAM_STRING( &constant_bin[ 27897 ], 225, 0 );
}

// The module code objects.
static PyCodeObject *codeobj_a0008ffb72047d993a84301dda00ea0c;
static PyCodeObject *codeobj_f3d10f601bcf29d9afcc54bcc5d814a1;
static PyCodeObject *codeobj_607ce452893416e8fcd551af1303e7db;
static PyCodeObject *codeobj_b6436c93e2d4952d6b36d2d5209a8df1;
static PyCodeObject *codeobj_e103f21e6bfabba84db02bb32800103a;
static PyCodeObject *codeobj_14a99f1dd92be33dc78e0c57d3a95e9f;
static PyCodeObject *codeobj_0c2f51722a1329ea1ddddeb5270a210b;
static PyCodeObject *codeobj_8b96f9413eb5e90cc992ab47292c4135;
static PyCodeObject *codeobj_e3820c1f4cce5d550b099edc57f3fe2d;
static PyCodeObject *codeobj_fa628c032236a1ac387b6641bdf3f4ca;

static void _initModuleCodeObjects(void)
{
    codeobj_a0008ffb72047d993a84301dda00ea0c = MAKE_CODEOBJ( const_str_digest_9e2423a1cfc9b010406b387d6b3af772, const_str_plain_Span, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_f3d10f601bcf29d9afcc54bcc5d814a1 = MAKE_CODEOBJ( const_str_digest_9e2423a1cfc9b010406b387d6b3af772, const_str_plain_Span, 1, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_607ce452893416e8fcd551af1303e7db = MAKE_CODEOBJ( const_str_digest_9e2423a1cfc9b010406b387d6b3af772, const_str_plain___init__, 9, const_tuple_str_plain_self_str_plain_node1_str_plain_node2_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b6436c93e2d4952d6b36d2d5209a8df1 = MAKE_CODEOBJ( const_str_digest_9e2423a1cfc9b010406b387d6b3af772, const_str_plain_contains_node, 141, const_tuple_str_plain_self_str_plain_node_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_e103f21e6bfabba84db02bb32800103a = MAKE_CODEOBJ( const_str_digest_9e2423a1cfc9b010406b387d6b3af772, const_str_plain_contains_span, 128, const_tuple_str_plain_self_str_plain_span_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_14a99f1dd92be33dc78e0c57d3a95e9f = MAKE_CODEOBJ( const_str_digest_9e2423a1cfc9b010406b387d6b3af772, const_str_plain_high, 55, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_0c2f51722a1329ea1ddddeb5270a210b = MAKE_CODEOBJ( const_str_digest_9e2423a1cfc9b010406b387d6b3af772, const_str_plain_length, 84, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_8b96f9413eb5e90cc992ab47292c4135 = MAKE_CODEOBJ( const_str_digest_9e2423a1cfc9b010406b387d6b3af772, const_str_plain_low, 43, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_e3820c1f4cce5d550b099edc57f3fe2d = MAKE_CODEOBJ( const_str_digest_9e2423a1cfc9b010406b387d6b3af772, const_str_plain_minus, 96, const_tuple_str_plain_self_str_plain_span_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_fa628c032236a1ac387b6641bdf3f4ca = MAKE_CODEOBJ( const_str_digest_9e2423a1cfc9b010406b387d6b3af772, const_str_plain_other_node, 67, const_tuple_str_plain_self_str_plain_node_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Span_of_ChordDiagram$Span(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Span_of_ChordDiagram$Span( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_low_of_class_1_Span_of_ChordDiagram$Span(  );


static PyObject *MAKE_FUNCTION_function_3_high_of_class_1_Span_of_ChordDiagram$Span(  );


static PyObject *MAKE_FUNCTION_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span(  );


static PyObject *MAKE_FUNCTION_function_5_length_of_class_1_Span_of_ChordDiagram$Span(  );


static PyObject *MAKE_FUNCTION_function_6_minus_of_class_1_Span_of_ChordDiagram$Span(  );


static PyObject *MAKE_FUNCTION_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span(  );


static PyObject *MAKE_FUNCTION_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Span_of_ChordDiagram$Span(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var_low;
    PyObjectLocalVariable var_high;
    PyObjectLocalVariable var_other_node;
    PyObjectLocalVariable var_length;
    PyObjectLocalVariable var_minus;
    PyObjectLocalVariable var_contains_span;
    PyObjectLocalVariable var_contains_node;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_defaults_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_210c42986c757d95434453911933e7fe;
    assert( var___module__.object == NULL );
var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_3f64a146cea731839cc427dcc2cc4d91;
    assert( var___doc__.object == NULL );
var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f3d10f601bcf29d9afcc54bcc5d814a1, module_ChordDiagram$Span );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_1_Span_of_ChordDiagram$Span( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2_low_of_class_1_Span_of_ChordDiagram$Span(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    assert( var_low.object == NULL );
    var_low.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3_high_of_class_1_Span_of_ChordDiagram$Span(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    assert( var_high.object == NULL );
    var_high.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    assert( var_other_node.object == NULL );
    var_other_node.object = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_5_length_of_class_1_Span_of_ChordDiagram$Span(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    assert( var_length.object == NULL );
    var_length.object = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_6_minus_of_class_1_Span_of_ChordDiagram$Span(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    assert( var_minus.object == NULL );
    var_minus.object = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    assert( var_contains_span.object == NULL );
    var_contains_span.object = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span(  );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    assert( var_contains_node.object == NULL );
    var_contains_node.object = tmp_assign_source_10;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var_low.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_low,
            var_low.object
        );

    }
    if ((var_high.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_high,
            var_high.object
        );

    }
    if ((var_other_node.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_other_node,
            var_other_node.object
        );

    }
    if ((var_length.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_length,
            var_length.object
        );

    }
    if ((var_minus.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_minus,
            var_minus.object
        );

    }
    if ((var_contains_span.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_contains_span,
            var_contains_span.object
        );

    }
    if ((var_contains_node.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_contains_node,
            var_contains_node.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    tmp_return_value = PyDict_New();
    if ((var___module__.object != NULL))
{
        PyDict_SetItem(
        tmp_return_value,
        const_str_plain___module__,
        var___module__.object
    );

    }
    if ((var___doc__.object != NULL))
{
        PyDict_SetItem(
        tmp_return_value,
        const_str_plain___doc__,
        var___doc__.object
    );

    }
    if ((var___init__.object != NULL))
{
        PyDict_SetItem(
        tmp_return_value,
        const_str_plain___init__,
        var___init__.object
    );

    }
    if ((var_low.object != NULL))
{
        PyDict_SetItem(
        tmp_return_value,
        const_str_plain_low,
        var_low.object
    );

    }
    if ((var_high.object != NULL))
{
        PyDict_SetItem(
        tmp_return_value,
        const_str_plain_high,
        var_high.object
    );

    }
    if ((var_other_node.object != NULL))
{
        PyDict_SetItem(
        tmp_return_value,
        const_str_plain_other_node,
        var_other_node.object
    );

    }
    if ((var_length.object != NULL))
{
        PyDict_SetItem(
        tmp_return_value,
        const_str_plain_length,
        var_length.object
    );

    }
    if ((var_minus.object != NULL))
{
        PyDict_SetItem(
        tmp_return_value,
        const_str_plain_minus,
        var_minus.object
    );

    }
    if ((var_contains_span.object != NULL))
{
        PyDict_SetItem(
        tmp_return_value,
        const_str_plain_contains_span,
        var_contains_span.object
    );

    }
    if ((var_contains_node.object != NULL))
{
        PyDict_SetItem(
        tmp_return_value,
        const_str_plain_contains_node,
        var_contains_node.object
    );

    }
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );

    assert( ERROR_OCCURRED() );
    return NULL;
function_return_exit:
    assertObject( tmp_return_value );
    assert( !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_node1, PyObject *_python_par_node2 )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_node1; par_node1.object = _python_par_node1;
    PyObjectLocalVariable par_node2; par_node2.object = _python_par_node2;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    int tmp_ass_subscript_res_1;
    int tmp_ass_subscript_res_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_super_object_1;
    PyObject *tmp_super_type_1;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_607ce452893416e8fcd551af1303e7db, module_ChordDiagram$Span );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_super_type_1 = GET_STRING_DICT_VALUE( moduledict_ChordDiagram$Span, (Nuitka_StringObject *)const_str_plain_Span );

    if (unlikely( tmp_super_type_1 == NULL ))
    {
        tmp_super_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Span );
    }

    if ( tmp_super_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 597 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_super_object_1 = par_self.object;

    tmp_source_name_1 = BUILTIN_SUPER( tmp_super_type_1, tmp_super_object_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 25;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_isinstance_inst_1 = par_node1.object;

    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_list );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_self.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_1 = par_node1.object;

    tmp_subscript_name_1 = const_int_0;
    tmp_call_arg_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 29;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_node1.object;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_call_arg_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 30;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_4 = par_self.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_node1.object;

    frame_function->f_lineno = 32;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = par_node2.object;

    frame_function->f_lineno = 33;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;
    tmp_subscribed_name_3 = par_self.object;

    tmp_subscript_name_3 = const_int_0;
    tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_first, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_subscribed_name_4 = par_self.object;

    tmp_subscript_name_4 = const_int_pos_1;
    tmp_assattr_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_last, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_subscribed_name_5 = par_self.object;

    tmp_subscript_name_5 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_6 = par_self.object;

    tmp_subscript_name_6 = const_int_pos_1;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code
    tmp_iter_arg_1 = par_self.object;

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_2 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 41;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_3 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 41;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_3;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_1 ); assert( PyIter_Check( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        // TODO: Could first fetch, then check, should be faster.
        if ( !ERROR_OCCURRED() )
        {
        }
        else if ( PyErr_ExceptionMatches( PyExc_StopIteration ))
        {
            PyErr_Clear();
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

            goto try_finally_handler_1;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_1 = tmp_tuple_unpack_1__element_1.object;

    tmp_ass_subscribed_1 = par_self.object;

    tmp_ass_subscript_1 = const_int_pos_1;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 1, tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_2 = tmp_tuple_unpack_1__element_2.object;

    tmp_ass_subscribed_2 = par_self.object;

    tmp_ass_subscript_2 = const_int_0;
    tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2 );
    if ( tmp_ass_subscript_res_2 == false )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto try_finally_handler_1;
    }
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_node1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_node1,
            par_node1.object
        );

    }
    if ((par_node2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_node2,
            par_node2.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );

    assert( ERROR_OCCURRED() );
    return NULL;
function_return_exit:
    assertObject( tmp_return_value );
    assert( !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_1___init___of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_node1 = NULL;
    PyObject *_python_par_node2 = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_node1 == key )
            {
                assert( _python_par_node1 == NULL );
                _python_par_node1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_node2 == key )
            {
                assert( _python_par_node2 == NULL );
                _python_par_node2 = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_node1, key ) == 1 )
            {
                assert( _python_par_node1 == NULL );
                _python_par_node1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_node2, key ) == 1 )
            {
                assert( _python_par_node2 == NULL );
                _python_par_node2 = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_node1 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_node1 = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_node1 == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_node1 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_node2 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_node2 = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_node2 == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_node2 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_node1 == NULL || _python_par_node2 == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_node1, _python_par_node2 };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_1_Span_of_ChordDiagram$Span( self, _python_par_self, _python_par_node1, _python_par_node2 );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_node1 );
    Py_XDECREF( _python_par_node2 );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1___init___of_class_1_Span_of_ChordDiagram$Span( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_Span_of_ChordDiagram$Span( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_low_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8b96f9413eb5e90cc992ab47292c4135, module_ChordDiagram$Span );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_subscribed_name_1 = par_self.object;

    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );

    assert( ERROR_OCCURRED() );
    return NULL;
function_return_exit:
    assertObject( tmp_return_value );
    assert( !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_2_low_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "low() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "low() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_low_of_class_1_Span_of_ChordDiagram$Span( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_low_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_low_of_class_1_Span_of_ChordDiagram$Span( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_low_of_class_1_Span_of_ChordDiagram$Span( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_high_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_14a99f1dd92be33dc78e0c57d3a95e9f, module_ChordDiagram$Span );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_subscribed_name_1 = par_self.object;

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );

    assert( ERROR_OCCURRED() );
    return NULL;
function_return_exit:
    assertObject( tmp_return_value );
    assert( !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_3_high_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "high() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "high() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_high_of_class_1_Span_of_ChordDiagram$Span( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_high_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_high_of_class_1_Span_of_ChordDiagram$Span( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_high_of_class_1_Span_of_ChordDiagram$Span( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_node )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_node; par_node.object = _python_par_node;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fa628c032236a1ac387b6641bdf3f4ca, module_ChordDiagram$Span );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_subscribed_name_1 = par_self.object;

    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = par_node.object;

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_subscribed_name_2 = par_self.object;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_subscribed_name_3 = par_self.object;

    tmp_subscript_name_3 = const_int_pos_1;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = par_node.object;

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_subscribed_name_4 = par_self.object;

    tmp_subscript_name_4 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_1 = const_str_digest_ece764e0eac134323e73bffa169246f0;
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_node.object;

    tmp_call_arg_element_2 = par_self.object;

    frame_function->f_lineno = 82;
    tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 82;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_Exception, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 82;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_node.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_node,
            par_node.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );

    assert( ERROR_OCCURRED() );
    return NULL;
function_return_exit:
    assertObject( tmp_return_value );
    assert( !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_node = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "other_node() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_node == key )
            {
                assert( _python_par_node == NULL );
                _python_par_node = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_node, key ) == 1 )
            {
                assert( _python_par_node == NULL );
                _python_par_node = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "other_node() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_node != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_node = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_node == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_node = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_node == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_node };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span( self, _python_par_self, _python_par_node );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_node );

    return NULL;
}

static PyObject *dparse_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_length_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0c2f51722a1329ea1ddddeb5270a210b, module_ChordDiagram$Span );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_subscribed_name_1 = par_self.object;

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_binop_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_self.object;

    tmp_subscript_name_2 = const_int_0;
    tmp_binop_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_SUB( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );

    assert( ERROR_OCCURRED() );
    return NULL;
function_return_exit:
    assertObject( tmp_return_value );
    assert( !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_5_length_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "length() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "length() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_length_of_class_1_Span_of_ChordDiagram$Span( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_length_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_5_length_of_class_1_Span_of_ChordDiagram$Span( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_length_of_class_1_Span_of_ChordDiagram$Span( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_minus_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_span )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_span; par_span.object = _python_par_span;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    PyObject *tmp_called_10;
    PyObject *tmp_called_11;
    PyObject *tmp_called_12;
    PyObject *tmp_called_13;
    PyObject *tmp_called_14;
    PyObject *tmp_called_15;
    PyObject *tmp_called_16;
    PyObject *tmp_called_17;
    PyObject *tmp_called_18;
    PyObject *tmp_called_19;
    PyObject *tmp_called_20;
    PyObject *tmp_called_21;
    PyObject *tmp_called_22;
    PyObject *tmp_called_23;
    PyObject *tmp_called_24;
    PyObject *tmp_called_25;
    PyObject *tmp_called_26;
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e3820c1f4cce5d550b099edc57f3fe2d, module_ChordDiagram$Span );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_source_name_1 = par_span.object;

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_high );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 111;
    tmp_compexpr_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_2;
    }
    tmp_source_name_2 = par_self.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_low );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 111;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 111;
    tmp_compexpr_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 111;
        goto try_finally_handler_2;
    }
    tmp_assign_source_1 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_2;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_1;

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_2;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_cond_value_1 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_3 = par_span.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_low );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 111;
    tmp_compexpr_left_2 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_3;
    }
    tmp_source_name_4 = par_self.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_high );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 111;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 111;
    tmp_compexpr_right_2 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 111;
        goto try_finally_handler_3;
    }
    tmp_cond_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_3;
    }
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_2;
    }

    goto finally_end_1;
    finally_end_1:;
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_1;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 111;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_list_element_1 = par_self.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    goto try_finally_handler_start_1;
    branch_no_1:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto frame_exception_exit_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_source_name_5 = par_span.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 685 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto try_finally_handler_5;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_low );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 115;
    tmp_compexpr_left_3 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto try_finally_handler_5;
    }
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto try_finally_handler_5;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_low );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        frame_function->f_lineno = 115;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 115;
    tmp_compexpr_right_3 = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        frame_function->f_lineno = 115;
        goto try_finally_handler_5;
    }
    tmp_assign_source_2 = RICH_COMPARE_LE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto try_finally_handler_5;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_2;

    tmp_cond_value_4 = tmp_and_1__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto try_finally_handler_5;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_7 = par_span.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 685 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto try_finally_handler_6;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_high );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 115;
    tmp_compexpr_left_4 = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto try_finally_handler_6;
    }
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto try_finally_handler_6;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_high );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        frame_function->f_lineno = 115;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 115;
    tmp_compexpr_right_4 = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        frame_function->f_lineno = 115;
        goto try_finally_handler_6;
    }
    tmp_cond_value_3 = RICH_COMPARE_GE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto try_finally_handler_6;
    }
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_5;
    }

    goto finally_end_4;
    finally_end_4:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_3 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_3 );
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_4;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 115;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = PyList_New( 0 );
    goto try_finally_handler_start_2;
    branch_no_2:;
    try_finally_handler_start_2:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto frame_exception_exit_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_6;
    finally_end_6:;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto try_finally_handler_8;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_low );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_8;
    }
    frame_function->f_lineno = 119;
    tmp_compexpr_left_5 = CALL_FUNCTION_NO_ARGS( tmp_called_9 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_8;
    }
    tmp_source_name_10 = par_span.object;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 685 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto try_finally_handler_8;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_low );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_5 );

        frame_function->f_lineno = 119;
        goto try_finally_handler_8;
    }
    frame_function->f_lineno = 119;
    tmp_compexpr_right_5 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_compexpr_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_5 );

        frame_function->f_lineno = 119;
        goto try_finally_handler_8;
    }
    tmp_assign_source_3 = RICH_COMPARE_LT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    Py_DECREF( tmp_compexpr_right_5 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_8;
    }
    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = tmp_assign_source_3;

    tmp_cond_value_6 = tmp_and_2__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_8;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_11 = par_span.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 685 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto try_finally_handler_9;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_high );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_9;
    }
    frame_function->f_lineno = 119;
    tmp_compexpr_left_6 = CALL_FUNCTION_NO_ARGS( tmp_called_11 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_9;
    }
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto try_finally_handler_9;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_high );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_6 );

        frame_function->f_lineno = 119;
        goto try_finally_handler_9;
    }
    frame_function->f_lineno = 119;
    tmp_compexpr_right_6 = CALL_FUNCTION_NO_ARGS( tmp_called_12 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_6 );

        frame_function->f_lineno = 119;
        goto try_finally_handler_9;
    }
    tmp_cond_value_5 = RICH_COMPARE_LT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_9;
    }
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_8;
    }

    goto finally_end_7;
    finally_end_7:;
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_5 = tmp_and_2__value_1.object;

    Py_INCREF( tmp_cond_value_5 );
    condexpr_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_7;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 119;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = PyList_New( 2 );
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_ChordDiagram$Span, (Nuitka_StringObject *)const_str_plain_Span );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Span );
    }

    if ( tmp_called_13 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 597 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }

    tmp_source_name_13 = par_self.object;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_low );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 120;
    tmp_call_arg_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_14 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }
    tmp_source_name_14 = par_span.object;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 685 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_low );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 120;
    tmp_call_arg_element_2 = CALL_FUNCTION_NO_ARGS( tmp_called_15 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 120;
    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_13, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_2 );
    tmp_called_16 = GET_STRING_DICT_VALUE( moduledict_ChordDiagram$Span, (Nuitka_StringObject *)const_str_plain_Span );

    if (unlikely( tmp_called_16 == NULL ))
    {
        tmp_called_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Span );
    }

    if ( tmp_called_16 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 597 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }

    tmp_source_name_15 = par_span.object;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 685 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_high );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 120;
    tmp_call_arg_element_3 = CALL_FUNCTION_NO_ARGS( tmp_called_17 );
    Py_DECREF( tmp_called_17 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }
    tmp_source_name_16 = par_self.object;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_high );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 120;
    tmp_call_arg_element_4 = CALL_FUNCTION_NO_ARGS( tmp_called_18 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 120;
    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_16, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 120;
        goto try_finally_handler_7;
    }
    PyList_SET_ITEM( tmp_return_value, 1, tmp_list_element_2 );
    goto try_finally_handler_start_3;
    branch_no_3:;
    try_finally_handler_start_3:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto frame_exception_exit_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_9;
    finally_end_9:;
    tmp_source_name_17 = par_span.object;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 685 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_low );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 123;
    tmp_compare_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_19 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = par_self.object;

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_low );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 123;
    tmp_compare_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_20 );
    Py_DECREF( tmp_called_20 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_LtE_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = PyList_New( 1 );
    tmp_called_21 = GET_STRING_DICT_VALUE( moduledict_ChordDiagram$Span, (Nuitka_StringObject *)const_str_plain_Span );

    if (unlikely( tmp_called_21 == NULL ))
    {
        tmp_called_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Span );
    }

    if ( tmp_called_21 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 597 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_source_name_19 = par_span.object;

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 685 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_high );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 124;
    tmp_call_arg_element_5 = CALL_FUNCTION_NO_ARGS( tmp_called_22 );
    Py_DECREF( tmp_called_22 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = par_self.object;

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_high );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 124;
    tmp_call_arg_element_6 = CALL_FUNCTION_NO_ARGS( tmp_called_23 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 124;
    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_21, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_3 );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_return_value = PyList_New( 1 );
    tmp_called_24 = GET_STRING_DICT_VALUE( moduledict_ChordDiagram$Span, (Nuitka_StringObject *)const_str_plain_Span );

    if (unlikely( tmp_called_24 == NULL ))
    {
        tmp_called_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Span );
    }

    if ( tmp_called_24 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 597 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_source_name_21 = par_self.object;

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_called_25 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_low );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 126;
    tmp_call_arg_element_7 = CALL_FUNCTION_NO_ARGS( tmp_called_25 );
    Py_DECREF( tmp_called_25 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = par_span.object;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 685 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_called_26 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_low );
    if ( tmp_called_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 126;
    tmp_call_arg_element_8 = CALL_FUNCTION_NO_ARGS( tmp_called_26 );
    Py_DECREF( tmp_called_26 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 126;
    tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_24, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_list_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_4 );
    goto frame_return_exit_1;
    branch_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_span.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_span,
            par_span.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );

    assert( ERROR_OCCURRED() );
    return NULL;
function_return_exit:
    assertObject( tmp_return_value );
    assert( !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_6_minus_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_span = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "minus() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_span == key )
            {
                assert( _python_par_span == NULL );
                _python_par_span = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_span, key ) == 1 )
            {
                assert( _python_par_span == NULL );
                _python_par_span = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "minus() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_span != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_span = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_span == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_span = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_span == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_span };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_minus_of_class_1_Span_of_ChordDiagram$Span( self, _python_par_self, _python_par_span );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_span );

    return NULL;
}

static PyObject *dparse_function_6_minus_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_6_minus_of_class_1_Span_of_ChordDiagram$Span( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_minus_of_class_1_Span_of_ChordDiagram$Span( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_span )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_span; par_span.object = _python_par_span;
    PyObjectTempVariable tmp_comparison_1__value_2;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_comparison_2__value_2;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_and_3__value_1;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e103f21e6bfabba84db02bb32800103a, module_ChordDiagram$Span );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_assign_source_1 = NULL;
    // Tried code
    tmp_assign_source_1 = NULL;
    // Tried code
    tmp_assign_source_1 = NULL;
    // Tried code
    tmp_subscribed_name_1 = par_self.object;

    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_5;
    }
    tmp_compexpr_right_1 = NULL;
    // Tried code
    tmp_subscribed_name_2 = par_span.object;

    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_6;
    }
    assert( tmp_comparison_1__value_2.object == NULL );
    tmp_comparison_1__value_2.object = tmp_assign_source_3;

    tmp_compexpr_right_1 = tmp_comparison_1__value_2.object;

    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_5;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_assign_source_2 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_5;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_2;

    tmp_cond_value_1 = tmp_and_1__value_1.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_5;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = tmp_comparison_1__value_2.object;

    tmp_subscribed_name_3 = par_self.object;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 138;
        goto try_finally_handler_7;
    }

    tmp_subscript_name_3 = const_int_pos_1;
    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_7;
    }
    tmp_assign_source_1 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_7;
    }
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_5;
    }

    goto finally_end_2;
    finally_end_2:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_1 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_assign_source_1 );
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_4;
    }

    goto finally_end_3;
    finally_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_comparison_1__value_2.object );
    tmp_comparison_1__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_3;
    }

    goto finally_end_4;
    finally_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_2;
    }

    goto finally_end_5;
    finally_end_5:;
    assert( tmp_and_3__value_1.object == NULL );
    tmp_and_3__value_1.object = tmp_assign_source_1;

    tmp_cond_value_2 = tmp_and_3__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_2;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_return_value = NULL;
    // Tried code
    tmp_result = tmp_and_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_3__value_1.object );
        tmp_and_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_return_value = NULL;
    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_subscribed_name_4 = par_self.object;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto try_finally_handler_11;
    }

    tmp_subscript_name_4 = const_int_0;
    tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_11;
    }
    tmp_compexpr_right_3 = NULL;
    // Tried code
    tmp_subscribed_name_5 = par_span.object;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 685 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto try_finally_handler_12;
    }

    tmp_subscript_name_5 = const_int_pos_1;
    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_12;
    }
    assert( tmp_comparison_2__value_2.object == NULL );
    tmp_comparison_2__value_2.object = tmp_assign_source_5;

    tmp_compexpr_right_3 = tmp_comparison_2__value_2.object;

    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_11;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_assign_source_4 = RICH_COMPARE_LE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_11;
    }
    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = tmp_assign_source_4;

    tmp_cond_value_3 = tmp_and_2__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_11;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_return_value = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_4 = tmp_comparison_2__value_2.object;

    tmp_subscribed_name_6 = par_self.object;

    if ( tmp_subscribed_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto try_finally_handler_13;
    }

    tmp_subscript_name_6 = const_int_pos_1;
    tmp_compexpr_right_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_13;
    }
    tmp_return_value = RICH_COMPARE_LE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_13;
    }
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_11;
    }

    goto finally_end_7;
    finally_end_7:;
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_return_value = tmp_and_2__value_1.object;

    Py_INCREF( tmp_return_value );
    condexpr_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_10;
    }

    goto finally_end_8;
    finally_end_8:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_comparison_2__value_2.object );
    tmp_comparison_2__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto try_finally_handler_9;
    }

    goto finally_end_9;
    finally_end_9:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_finally_handler_8;
    }

    goto finally_end_10;
    finally_end_10:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_2;
    }

    goto finally_end_11;
    finally_end_11:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_return_value = tmp_and_3__value_1.object;

    Py_INCREF( tmp_return_value );
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_finally_handler_1;
    }

    goto finally_end_12;
    finally_end_12:;
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_3__value_1.object );
    tmp_and_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto frame_exception_exit_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_13;
    finally_end_13:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_span.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_span,
            par_span.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );

    assert( ERROR_OCCURRED() );
    return NULL;
function_return_exit:
    assertObject( tmp_return_value );
    assert( !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_span = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "contains_span() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_span == key )
            {
                assert( _python_par_span == NULL );
                _python_par_span = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_span, key ) == 1 )
            {
                assert( _python_par_span == NULL );
                _python_par_span = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "contains_span() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_span != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_span = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_span == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_span = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_span == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_span };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span( self, _python_par_self, _python_par_span );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_span );

    return NULL;
}

static PyObject *dparse_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_node )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_node; par_node.object = _python_par_node;
    PyObjectTempVariable tmp_comparison_1__value_2;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b6436c93e2d4952d6b36d2d5209a8df1, module_ChordDiagram$Span );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_return_value = NULL;
    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_subscribed_name_1 = par_self.object;

    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_finally_handler_3;
    }
    tmp_compexpr_right_1 = NULL;
    // Tried code
    tmp_assign_source_2 = par_node.object;

    assert( tmp_comparison_1__value_2.object == NULL );
    tmp_comparison_1__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_compexpr_right_1 = tmp_comparison_1__value_2.object;

    // Re-reraise as necessary after finally was executed.
    goto finally_end_1;
    finally_end_1:;
    tmp_assign_source_1 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_finally_handler_3;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_1;

    tmp_cond_value_1 = tmp_and_1__value_1.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_finally_handler_3;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = tmp_comparison_1__value_2.object;

    tmp_subscribed_name_2 = par_self.object;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 547 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto try_finally_handler_5;
    }

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_finally_handler_5;
    }
    tmp_return_value = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_finally_handler_5;
    }
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_3;
    }

    goto finally_end_2;
    finally_end_2:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = tmp_and_1__value_1.object;

    Py_INCREF( tmp_return_value );
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_2;
    }

    goto finally_end_3;
    finally_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_comparison_1__value_2.object );
    tmp_comparison_1__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_1;
    }

    goto finally_end_4;
    finally_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto frame_exception_exit_1;
    }

    goto finally_end_5;
    finally_end_5:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_node.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_node,
            par_node.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );

    assert( ERROR_OCCURRED() );
    return NULL;
function_return_exit:
    assertObject( tmp_return_value );
    assert( !ERROR_OCCURRED() );
    return tmp_return_value;

}
static PyObject *fparse_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_node = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "contains_node() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_node == key )
            {
                assert( _python_par_node == NULL );
                _python_par_node = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_node, key ) == 1 )
            {
                assert( _python_par_node == NULL );
                _python_par_node = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "contains_node() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_node != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_node = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_node == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_node = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_self == NULL || _python_par_node == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_node };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span( self, _python_par_self, _python_par_node );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_node );

    return NULL;
}

static PyObject *dparse_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Span_of_ChordDiagram$Span( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_Span_of_ChordDiagram$Span,
        dparse_function_1___init___of_class_1_Span_of_ChordDiagram$Span,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_607ce452893416e8fcd551af1303e7db,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_ChordDiagram$Span,
        const_str_digest_ecf0758ffbfc2ac4a889bd2ad1f7bb6d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_low_of_class_1_Span_of_ChordDiagram$Span(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_low_of_class_1_Span_of_ChordDiagram$Span,
        dparse_function_2_low_of_class_1_Span_of_ChordDiagram$Span,
        const_str_plain_low,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8b96f9413eb5e90cc992ab47292c4135,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_ChordDiagram$Span,
        const_str_digest_8a773ecd4a73d6bba3186e7c748a348a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_high_of_class_1_Span_of_ChordDiagram$Span(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_high_of_class_1_Span_of_ChordDiagram$Span,
        dparse_function_3_high_of_class_1_Span_of_ChordDiagram$Span,
        const_str_plain_high,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_14a99f1dd92be33dc78e0c57d3a95e9f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_ChordDiagram$Span,
        const_str_digest_1457a275190c0920959d1682ddb3ceb2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span,
        dparse_function_4_other_node_of_class_1_Span_of_ChordDiagram$Span,
        const_str_plain_other_node,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fa628c032236a1ac387b6641bdf3f4ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_ChordDiagram$Span,
        const_str_digest_06d945c1f2abab88e10b6a858deeae47
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_length_of_class_1_Span_of_ChordDiagram$Span(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_length_of_class_1_Span_of_ChordDiagram$Span,
        dparse_function_5_length_of_class_1_Span_of_ChordDiagram$Span,
        const_str_plain_length,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0c2f51722a1329ea1ddddeb5270a210b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_ChordDiagram$Span,
        const_str_digest_355d78c9af44f1bfb7755a0e9de549e3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_minus_of_class_1_Span_of_ChordDiagram$Span(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_minus_of_class_1_Span_of_ChordDiagram$Span,
        dparse_function_6_minus_of_class_1_Span_of_ChordDiagram$Span,
        const_str_plain_minus,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e3820c1f4cce5d550b099edc57f3fe2d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_ChordDiagram$Span,
        const_str_digest_5f7c8db418c2af3b865ace7b366b21db
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span,
        dparse_function_7_contains_span_of_class_1_Span_of_ChordDiagram$Span,
        const_str_plain_contains_span,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e103f21e6bfabba84db02bb32800103a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_ChordDiagram$Span,
        const_str_digest_290b5f372c3df13078daf3aa37797d93
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span,
        dparse_function_8_contains_node_of_class_1_Span_of_ChordDiagram$Span,
        const_str_plain_contains_node,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b6436c93e2d4952d6b36d2d5209a8df1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_ChordDiagram$Span,
        const_str_digest_ee9567b10f1d1f0df70929904a9de356
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_ChordDiagram$Span =
{
    PyModuleDef_HEAD_INIT,
    "ChordDiagram.Span",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#define _MODULE_UNFREEZER 0

#if _MODULE_UNFREEZER

#include "nuitka/unfreezing.hpp"

// Table for lookup to find "frozen" modules or DLLs, i.e. the ones included in
// or along this binary.

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{

    { NULL, NULL, 0 }
};

#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( ChordDiagram$Span )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_ChordDiagram$Span );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    _initConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION < 300
    initSlotCompare();
#endif

    patchBuiltinModule();
    patchTypeComparison();

#endif

#if _MODULE_UNFREEZER
    registerMetaPathBasedUnfreezer( meta_path_loader_entries );
#endif

    _initModuleConstants();
    _initModuleCodeObjects();

    // puts( "in initChordDiagram$Span" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_ChordDiagram$Span = Py_InitModule4(
        "ChordDiagram.Span",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_ChordDiagram$Span = PyModule_Create( &mdef_ChordDiagram$Span );
#endif

    moduledict_ChordDiagram$Span = (PyDictObject *)((PyModuleObject *)module_ChordDiagram$Span)->md_dict;

    assertObject( module_ChordDiagram$Span );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_210c42986c757d95434453911933e7fe, module_ChordDiagram$Span );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_ChordDiagram$Span );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_UNFREEZER
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#else
    PyDict_SetItem( module_dict, const_str_plain___loader__, Py_None );
#endif
#endif

    // Temp variables if any
    PyObjectTempVariable tmp_class_creation_1__bases;
    PyObjectTempVariable tmp_class_creation_1__class_dict;
    PyObjectTempVariable tmp_class_creation_1__metaclass;
    PyObjectTempVariable tmp_class_creation_1__class;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_class_bases_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_ChordDiagram$Span, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9e2423a1cfc9b010406b387d6b3af772;
    UPDATE_STRING_DICT0( moduledict_ChordDiagram$Span, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_FRAME( codeobj_a0008ffb72047d993a84301dda00ea0c, module_ChordDiagram$Span );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    // Tried code
    tmp_assign_source_3 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_list );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_module->f_lineno = 1;
        goto try_finally_handler_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_3;

    tmp_assign_source_4 = impl_class_1_Span_of_ChordDiagram$Span(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_4;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dget_dict_1 = tmp_class_creation_1__class_dict.object;

    tmp_dget_key_1 = const_str_plain___metaclass__;
    tmp_assign_source_5 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_5 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_ChordDiagram$Span, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_5;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_Span;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 1;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_6;

    tmp_assign_source_7 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_ChordDiagram$Span, (Nuitka_StringObject *)const_str_plain_Span, tmp_assign_source_7 );
    // Final block of try/finally
    // Tried block ends with no exception occurred, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_1__class.object );
    tmp_class_creation_1__class.object = NULL;

    Py_XDECREF( tmp_class_creation_1__bases.object );
    tmp_class_creation_1__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict.object );
    tmp_class_creation_1__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass.object );
    tmp_class_creation_1__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_ChordDiagram$Span );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
