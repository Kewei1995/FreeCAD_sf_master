
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in FeaturePathCompoundPyImp.cpp! It's not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

using Base::streq;
using namespace Path;

/// Type structure of FeaturePathCompoundPy
PyTypeObject FeaturePathCompoundPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Path.FeaturePathCompound",     /*tp_name*/
    sizeof(FeaturePathCompoundPy),                       /*tp_basicsize*/
    0,                                                /*tp_itemsize*/
    /* methods */
    PyDestructor,                                     /*tp_dealloc*/
    0,                                                /*tp_print*/
    0,                                                /*tp_getattr*/
    0,                                                /*tp_setattr*/
    0,                                                /*tp_compare*/
    __repr,                                           /*tp_repr*/
    0,                                                /*tp_as_number*/
    0,                                                /*tp_as_sequence*/
    0,                                                /*tp_as_mapping*/
    0,                                                /*tp_hash*/
    0,                                                /*tp_call */
    0,                                                /*tp_str  */
    __getattro,                                       /*tp_getattro*/
    __setattro,                                       /*tp_setattro*/
    /* --- Functions to access object as input/output buffer ---------*/
    0,                                                /* tp_as_buffer */
    /* --- Flags to define presence of optional/expanded features */
#if PY_MAJOR_VERSION >= 3
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT,        /*tp_flags */
#else
    Py_TPFLAGS_DEFAULT,        /*tp_flags */
#endif
    "This class handles Path Compound features",           /*tp_doc */
    0,                                                /*tp_traverse */
    0,                                                /*tp_clear */
    0,                                                /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    0,                                                /*tp_iter */
    0,                                                /*tp_iternext */
    Path::FeaturePathCompoundPy::Methods,                     /*tp_methods */
    0,                                                /*tp_members */
    Path::FeaturePathCompoundPy::GetterSetter,                     /*tp_getset */
    &App::DocumentObjectPy::Type,                        /*tp_base */
    0,                                                /*tp_dict */
    0,                                                /*tp_descr_get */
    0,                                                /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    0,                                                /*tp_alloc */
    Path::FeaturePathCompoundPy::PyMake,/*tp_new */
    0,                                                /*tp_free   Low-level free-memory routine */
    0,                                                /*tp_is_gc  For PyObject_IS_GC */
    0,                                                /*tp_bases */
    0,                                                /*tp_mro    method resolution order */
    0,                                                /*tp_cache */
    0,                                                /*tp_subclasses */
    0,                                                /*tp_weaklist */
    0,                                                /*tp_del */
    0                                                 /*tp_version_tag */
#if PY_MAJOR_VERSION >= 3
    ,0                                                /*tp_finalize */
#endif
};

/// Methods structure of FeaturePathCompoundPy
PyMethodDef FeaturePathCompoundPy::Methods[] = {
    {"addObject",
        reinterpret_cast<PyCFunction>( staticCallback_addObject ),
        METH_VARARGS,
        "Add an object to the group"
    },
    {"removeObject",
        reinterpret_cast<PyCFunction>( staticCallback_removeObject ),
        METH_VARARGS,
        "Remove an object from the group"
    },
    {NULL, NULL, 0, NULL}		/* Sentinel */
};



/// Attribute structure of FeaturePathCompoundPy
PyGetSetDef FeaturePathCompoundPy::GetterSetter[] = {
    {NULL, NULL, NULL, NULL, NULL}		/* Sentinel */
};

// addObject() callback and implementer
// PyObject*  FeaturePathCompoundPy::addObject(PyObject *args){};
// has to be implemented in FeaturePathCompoundPyImp.cpp
PyObject * FeaturePathCompoundPy::staticCallback_addObject (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'addObject' of 'Path.FeaturePathCompound' object needs an argument");
        return NULL;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return NULL;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<FeaturePathCompoundPy*>(self)->addObject(args);
        if (ret != 0)
            static_cast<FeaturePathCompoundPy*>(self)->startNotify();
        return ret;
    }
    catch(Base::Exception& e) // catch the FreeCAD exceptions
    {
        e.ReportException();

        PyObject *edict = e.getPyObject();

        PyErr_SetObject(Base::BaseExceptionFreeCADError, edict);
        Py_DECREF(edict);

        return NULL;
    }
    catch(const boost::filesystem::filesystem_error& e) // catch boost filesystem exception
    {
        std::string str;
        str += "File system exception thrown (";
        //str += e.who();
        //str += ", ";
        str += e.what();
        str += ")\n";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(const char* e) // catch simple string exceptions
    {
        Base::Console().Error(e);
        PyErr_SetString(Base::BaseExceptionFreeCADError,e);
        return NULL;
    }
    // in debug not all exceptions will be caught to get the attention of the developer!
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#endif
}

// removeObject() callback and implementer
// PyObject*  FeaturePathCompoundPy::removeObject(PyObject *args){};
// has to be implemented in FeaturePathCompoundPyImp.cpp
PyObject * FeaturePathCompoundPy::staticCallback_removeObject (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'removeObject' of 'Path.FeaturePathCompound' object needs an argument");
        return NULL;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return NULL;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<FeaturePathCompoundPy*>(self)->removeObject(args);
        if (ret != 0)
            static_cast<FeaturePathCompoundPy*>(self)->startNotify();
        return ret;
    }
    catch(Base::Exception& e) // catch the FreeCAD exceptions
    {
        e.ReportException();

        PyObject *edict = e.getPyObject();

        PyErr_SetObject(Base::BaseExceptionFreeCADError, edict);
        Py_DECREF(edict);

        return NULL;
    }
    catch(const boost::filesystem::filesystem_error& e) // catch boost filesystem exception
    {
        std::string str;
        str += "File system exception thrown (";
        //str += e.who();
        //str += ", ";
        str += e.what();
        str += ")\n";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(const char* e) // catch simple string exceptions
    {
        Base::Console().Error(e);
        PyErr_SetString(Base::BaseExceptionFreeCADError,e);
        return NULL;
    }
    // in debug not all exceptions will be caught to get the attention of the developer!
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#endif
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
FeaturePathCompoundPy::FeaturePathCompoundPy(FeatureCompound *pcObject, PyTypeObject *T)
    : DocumentObjectPy(static_cast<DocumentObjectPy::PointerType>(pcObject), T)
{
}

PyObject *FeaturePathCompoundPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // never create such objects with the constructor
    PyErr_SetString(PyExc_RuntimeError, "You cannot create directly an instance of 'FeaturePathCompoundPy'.");
 
    return 0;
}

int FeaturePathCompoundPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}

//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
FeaturePathCompoundPy::~FeaturePathCompoundPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// FeaturePathCompoundPy representation
//--------------------------------------------------------------------------
PyObject *FeaturePathCompoundPy::_repr(void)
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// FeaturePathCompoundPy Attributes
//--------------------------------------------------------------------------
PyObject *FeaturePathCompoundPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
{
    try {
        // getter method for special Attributes (e.g. dynamic ones)
        PyObject *r = getCustomAttributes(attr);
        if(r) return r;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(Base::Exception& e) // catch the FreeCAD exceptions
    {
        e.ReportException();
        
        PyObject *edict = e.getPyObject();
        
        PyErr_SetObject(Base::BaseExceptionFreeCADError, edict);
        Py_DECREF(edict);
        return NULL;
    }
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "C++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#else  // DONT_CATCH_CXX_EXCEPTIONS  
    catch(Base::Exception& e) // catch the FreeCAD exceptions
    {
        e.ReportException();
        
        PyObject *edict = e.getPyObject();
        
        PyErr_SetObject(Base::BaseExceptionFreeCADError, edict);
        Py_DECREF(edict);
        
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
#endif  // DONT_CATCH_CXX_EXCEPTIONS

    PyMethodDef *ml = Methods;
    for (; ml->ml_name != NULL; ml++) {
        if (attr[0] == ml->ml_name[0] &&
            strcmp(attr+1, ml->ml_name+1) == 0)
            return PyCFunction_New(ml, this);
    }

    PyErr_Clear();
    return DocumentObjectPy::_getattr(attr);
}

int FeaturePathCompoundPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
{
    try {
        // setter for special Attributes (e.g. dynamic ones)
        int r = setCustomAttributes(attr, value);
        // r = 1: handled
        // r = -1: error
        // r = 0: ignore
        if (r == 1)
            return 0;
        else if (r == -1)
            return -1;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(Base::Exception& e) // catch the FreeCAD exceptions
    {
        e.ReportException();
        PyObject *edict = e.getPyObject();
        
        PyErr_SetObject(Base::BaseExceptionFreeCADError, edict);
        Py_DECREF(edict);
        
        return -1;
    }
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "C++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return -1;
    }
#else  // DONT_CATCH_CXX_EXCEPTIONS  
    catch(Base::Exception& e) // catch the FreeCAD exceptions
    {
        e.ReportException();
        
        PyObject *edict = e.getPyObject();

        PyErr_SetObject(Base::BaseExceptionFreeCADError, edict);
        Py_DECREF(edict);
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
#endif  // DONT_CATCH_CXX_EXCEPTIONS

    return DocumentObjectPy::_setattr(attr, value);
}

FeatureCompound *FeaturePathCompoundPy::getFeaturePathCompoundPtr(void) const
{
    return static_cast<FeatureCompound *>(_pcTwinPointer);
}

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in FeaturePathCompoundPyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */



// returns a string which represents the object e.g. when printed in python
std::string FeaturePathCompoundPy::representation(void) const
{
    return std::string("<FeaturePathCompound object>");
}

PyObject* FeaturePathCompoundPy::addObject(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* FeaturePathCompoundPy::removeObject(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}



PyObject *FeaturePathCompoundPy::getCustomAttributes(const char* /*attr*/) const
{
    return 0;
}

int FeaturePathCompoundPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0; 
}
#endif



