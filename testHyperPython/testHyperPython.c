#include <Python.h>

/*
 * Implements an example function.
 */
PyDoc_STRVAR(testHyperPython_example_doc, "example(obj, number)\
\
Example function");

PyObject *testHyperPython_example(PyObject *self, PyObject *args, PyObject *kwargs) {
    /* Shared references that do not need Py_DECREF before returning. */
    PyObject *obj = NULL;
    int number = 0;

    /* Parse positional and keyword arguments */
    static char* keywords[] = { "obj", "number", NULL };
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "Oi", keywords, &obj, &number)) {
        return NULL;
    }

    /* Function implementation starts here */

    if (number < 0) {
        PyErr_SetObject(PyExc_ValueError, obj);
        return NULL;    /* return NULL indicates error */
    }

    Py_RETURN_NONE;
}

/*
 * List of functions to add to testHyperPython in exec_testHyperPython().
 */
static PyMethodDef testHyperPython_functions[] = {
    { "example", (PyCFunction)testHyperPython_example, METH_VARARGS | METH_KEYWORDS, testHyperPython_example_doc },
    { NULL, NULL, 0, NULL } /* marks end of array */
};

/*
 * Initialize testHyperPython. May be called multiple times, so avoid
 * using static state.
 */
int exec_testHyperPython(PyObject *module) {
    PyModule_AddFunctions(module, testHyperPython_functions);

    PyModule_AddStringConstant(module, "__author__", "Brian");
    PyModule_AddStringConstant(module, "__version__", "1.0.0");
    PyModule_AddIntConstant(module, "year", 2019);

    return 0; /* success */
}

/*
 * Documentation for testHyperPython.
 */
PyDoc_STRVAR(testHyperPython_doc, "The testHyperPython module");


static PyModuleDef_Slot testHyperPython_slots[] = {
    { Py_mod_exec, exec_testHyperPython },
    { 0, NULL }
};

static PyModuleDef testHyperPython_def = {
    PyModuleDef_HEAD_INIT,
    "testHyperPython",
    testHyperPython_doc,
    0,              /* m_size */
    NULL,           /* m_methods */
    testHyperPython_slots,
    NULL,           /* m_traverse */
    NULL,           /* m_clear */
    NULL,           /* m_free */
};

PyMODINIT_FUNC PyInit_testHyperPython() {
    return PyModuleDef_Init(&testHyperPython_def);
}
