
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ArcOfEllipse2dPyImp.cpp! It's not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

using Base::streq;
using namespace Part;

/// Type structure of ArcOfEllipse2dPy
PyTypeObject ArcOfEllipse2dPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.Geom2d.ArcOfEllipse2d",     /*tp_name*/
    sizeof(ArcOfEllipse2dPy),                       /*tp_basicsize*/
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
    "Describes a portion of an ellipse",           /*tp_doc */
    0,                                                /*tp_traverse */
    0,                                                /*tp_clear */
    0,                                                /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    0,                                                /*tp_iter */
    0,                                                /*tp_iternext */
    Part::ArcOfEllipse2dPy::Methods,                     /*tp_methods */
    0,                                                /*tp_members */
    Part::ArcOfEllipse2dPy::GetterSetter,                     /*tp_getset */
    &Part::ArcOfConic2dPy::Type,                        /*tp_base */
    0,                                                /*tp_dict */
    0,                                                /*tp_descr_get */
    0,                                                /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    0,                                                /*tp_alloc */
    Part::ArcOfEllipse2dPy::PyMake,/*tp_new */
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

/// Methods structure of ArcOfEllipse2dPy
PyMethodDef ArcOfEllipse2dPy::Methods[] = {
    {NULL, NULL, 0, NULL}		/* Sentinel */
};



/// Attribute structure of ArcOfEllipse2dPy
PyGetSetDef ArcOfEllipse2dPy::GetterSetter[] = {
    {"MajorRadius",
        (getter) staticCallback_getMajorRadius,
        (setter) staticCallback_setMajorRadius, 
        "The major radius of the ellipse.",
        NULL
    },
    {"MinorRadius",
        (getter) staticCallback_getMinorRadius,
        (setter) staticCallback_setMinorRadius, 
        "The minor radius of the ellipse.",
        NULL
    },
    {"Ellipse",
        (getter) staticCallback_getEllipse,
        (setter) staticCallback_setEllipse, 
        "The internal ellipse representation",
        NULL
    },
    {NULL, NULL, NULL, NULL, NULL}		/* Sentinel */
};

// MajorRadius() callback and implementer
// PyObject*  ArcOfEllipse2dPy::MajorRadius(PyObject *args){};
// has to be implemented in ArcOfEllipse2dPyImp.cpp
PyObject * ArcOfEllipse2dPy::staticCallback_getMajorRadius (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ArcOfEllipse2dPy*>(self)->getMajorRadius());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'MajorRadius' of object 'Geom2dArcOfEllipse'");
        return NULL;
    }
}

int ArcOfEllipse2dPy::staticCallback_setMajorRadius (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ArcOfEllipse2dPy*>(self)->setMajorRadius(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'MajorRadius' of object 'Geom2dArcOfEllipse'");
        return -1;
    }
}

// MinorRadius() callback and implementer
// PyObject*  ArcOfEllipse2dPy::MinorRadius(PyObject *args){};
// has to be implemented in ArcOfEllipse2dPyImp.cpp
PyObject * ArcOfEllipse2dPy::staticCallback_getMinorRadius (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ArcOfEllipse2dPy*>(self)->getMinorRadius());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'MinorRadius' of object 'Geom2dArcOfEllipse'");
        return NULL;
    }
}

int ArcOfEllipse2dPy::staticCallback_setMinorRadius (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ArcOfEllipse2dPy*>(self)->setMinorRadius(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'MinorRadius' of object 'Geom2dArcOfEllipse'");
        return -1;
    }
}

// Ellipse() callback and implementer
// PyObject*  ArcOfEllipse2dPy::Ellipse(PyObject *args){};
// has to be implemented in ArcOfEllipse2dPyImp.cpp
PyObject * ArcOfEllipse2dPy::staticCallback_getEllipse (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ArcOfEllipse2dPy*>(self)->getEllipse());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Ellipse' of object 'Geom2dArcOfEllipse'");
        return NULL;
    }
}

int ArcOfEllipse2dPy::staticCallback_setEllipse (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Ellipse' of object 'Geom2dArcOfEllipse' is read-only");
    return -1;
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ArcOfEllipse2dPy::ArcOfEllipse2dPy(Geom2dArcOfEllipse *pcObject, PyTypeObject *T)
    : ArcOfConic2dPy(static_cast<ArcOfConic2dPy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ArcOfEllipse2dPy::~ArcOfEllipse2dPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ArcOfEllipse2dPy representation
//--------------------------------------------------------------------------
PyObject *ArcOfEllipse2dPy::_repr(void)
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ArcOfEllipse2dPy Attributes
//--------------------------------------------------------------------------
PyObject *ArcOfEllipse2dPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return ArcOfConic2dPy::_getattr(attr);
}

int ArcOfEllipse2dPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return ArcOfConic2dPy::_setattr(attr, value);
}

Geom2dArcOfEllipse *ArcOfEllipse2dPy::getGeom2dArcOfEllipsePtr(void) const
{
    return static_cast<Geom2dArcOfEllipse *>(_pcTwinPointer);
}

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ArcOfEllipse2dPyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */

PyObject *ArcOfEllipse2dPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of ArcOfEllipse2dPy and the Twin object 
    return new ArcOfEllipse2dPy(new Geom2dArcOfEllipse);
}

// constructor method
int ArcOfEllipse2dPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string ArcOfEllipse2dPy::representation(void) const
{
    return std::string("<Geom2dArcOfEllipse object>");
}



Py::Float ArcOfEllipse2dPy::getMajorRadius(void) const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ArcOfEllipse2dPy::setMajorRadius(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float ArcOfEllipse2dPy::getMinorRadius(void) const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ArcOfEllipse2dPy::setMinorRadius(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ArcOfEllipse2dPy::getEllipse(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ArcOfEllipse2dPy::getCustomAttributes(const char* /*attr*/) const
{
    return 0;
}

int ArcOfEllipse2dPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0; 
}
#endif



