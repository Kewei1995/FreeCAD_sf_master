
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ConePyImp.cpp! It's not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

using Base::streq;
using namespace Part;

/// Type structure of ConePy
PyTypeObject ConePy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.Cone",     /*tp_name*/
    sizeof(ConePy),                       /*tp_basicsize*/
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
    "Describes a cone in 3D space\n"
    "				To create a cone there are several ways:\n"
    "				Part.Cone()\n"
    "				    Creates a default cone with radius 1\n"
    "\n"
    "				Part.Cone(Cone)\n"
    "				    Creates a copy of the given cone\n"
    "\n"
    "				Part.Cone(Cone, Distance)\n"
    "				    Creates a cone parallel to given cone at a certain distance\n"
    "\n"
    "				Part.Cone(Point1,Point2,Radius1,Radius2)\n"
    "				    Creates a cone defined by two points and two radii\n"
    "				    The axis of the cone is the line passing through\n"
    "				    Point1 and Poin2.\n"
    "				    Radius1 is the radius of the section passing through\n"
    "				    Point1 and Radius2 the radius of the section passing\n"
    "				    through Point2.\n"
    "\n"
    "				Part.Cone(Point1,Point2,Point3,Point4)\n"
    "				    Creates a cone passing through three points Point1,\n"
    "				    Point2 and Point3.\n"
    "				    Its axis is defined by Point1 and Point2 and the radius of\n"
    "				    its base is the distance between Point3 and its axis.\n"
    "				    The distance between Point and the axis is the radius of\n"
    "				    the section passing through Point4.\n"
    "			",           /*tp_doc */
    0,                                                /*tp_traverse */
    0,                                                /*tp_clear */
    0,                                                /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    0,                                                /*tp_iter */
    0,                                                /*tp_iternext */
    Part::ConePy::Methods,                     /*tp_methods */
    0,                                                /*tp_members */
    Part::ConePy::GetterSetter,                     /*tp_getset */
    &Part::GeometrySurfacePy::Type,                        /*tp_base */
    0,                                                /*tp_dict */
    0,                                                /*tp_descr_get */
    0,                                                /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    0,                                                /*tp_alloc */
    Part::ConePy::PyMake,/*tp_new */
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

/// Methods structure of ConePy
PyMethodDef ConePy::Methods[] = {
    {"uIso",
        reinterpret_cast<PyCFunction>( staticCallback_uIso ),
        METH_VARARGS,
        "Builds the U isoparametric circle of this cone"
    },
    {"vIso",
        reinterpret_cast<PyCFunction>( staticCallback_vIso ),
        METH_VARARGS,
        "Builds the V isoparametric circle of this cone"
    },
    {NULL, NULL, 0, NULL}		/* Sentinel */
};



/// Attribute structure of ConePy
PyGetSetDef ConePy::GetterSetter[] = {
    {"Apex",
        (getter) staticCallback_getApex,
        (setter) staticCallback_setApex, 
        "Compute the apex of the cone.",
        NULL
    },
    {"Radius",
        (getter) staticCallback_getRadius,
        (setter) staticCallback_setRadius, 
        "The radius of the cone.",
        NULL
    },
    {"SemiAngle",
        (getter) staticCallback_getSemiAngle,
        (setter) staticCallback_setSemiAngle, 
        "The semi-angle of the cone.",
        NULL
    },
    {"Center",
        (getter) staticCallback_getCenter,
        (setter) staticCallback_setCenter, 
        "Center of the cone.",
        NULL
    },
    {"Axis",
        (getter) staticCallback_getAxis,
        (setter) staticCallback_setAxis, 
        "The axis direction of the cone",
        NULL
    },
    {NULL, NULL, NULL, NULL, NULL}		/* Sentinel */
};

// uIso() callback and implementer
// PyObject*  ConePy::uIso(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_uIso (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'uIso' of 'Part.GeomCone' object needs an argument");
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
        PyObject* ret = static_cast<ConePy*>(self)->uIso(args);
        if (ret != 0)
            static_cast<ConePy*>(self)->startNotify();
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

// vIso() callback and implementer
// PyObject*  ConePy::vIso(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_vIso (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'vIso' of 'Part.GeomCone' object needs an argument");
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
        PyObject* ret = static_cast<ConePy*>(self)->vIso(args);
        if (ret != 0)
            static_cast<ConePy*>(self)->startNotify();
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

// Apex() callback and implementer
// PyObject*  ConePy::Apex(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_getApex (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ConePy*>(self)->getApex());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Apex' of object 'GeomCone'");
        return NULL;
    }
}

int ConePy::staticCallback_setApex (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Apex' of object 'GeomCone' is read-only");
    return -1;
}

// Radius() callback and implementer
// PyObject*  ConePy::Radius(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_getRadius (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ConePy*>(self)->getRadius());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Radius' of object 'GeomCone'");
        return NULL;
    }
}

int ConePy::staticCallback_setRadius (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ConePy*>(self)->setRadius(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'Radius' of object 'GeomCone'");
        return -1;
    }
}

// SemiAngle() callback and implementer
// PyObject*  ConePy::SemiAngle(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_getSemiAngle (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ConePy*>(self)->getSemiAngle());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'SemiAngle' of object 'GeomCone'");
        return NULL;
    }
}

int ConePy::staticCallback_setSemiAngle (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ConePy*>(self)->setSemiAngle(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'SemiAngle' of object 'GeomCone'");
        return -1;
    }
}

// Center() callback and implementer
// PyObject*  ConePy::Center(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_getCenter (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ConePy*>(self)->getCenter());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Center' of object 'GeomCone'");
        return NULL;
    }
}

int ConePy::staticCallback_setCenter (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ConePy*>(self)->setCenter(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'Center' of object 'GeomCone'");
        return -1;
    }
}

// Axis() callback and implementer
// PyObject*  ConePy::Axis(PyObject *args){};
// has to be implemented in ConePyImp.cpp
PyObject * ConePy::staticCallback_getAxis (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ConePy*>(self)->getAxis());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Axis' of object 'GeomCone'");
        return NULL;
    }
}

int ConePy::staticCallback_setAxis (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ConePy*>(self)->setAxis(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'Axis' of object 'GeomCone'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ConePy::ConePy(GeomCone *pcObject, PyTypeObject *T)
    : GeometrySurfacePy(static_cast<GeometrySurfacePy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ConePy::~ConePy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ConePy representation
//--------------------------------------------------------------------------
PyObject *ConePy::_repr(void)
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ConePy Attributes
//--------------------------------------------------------------------------
PyObject *ConePy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return GeometrySurfacePy::_getattr(attr);
}

int ConePy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return GeometrySurfacePy::_setattr(attr, value);
}

GeomCone *ConePy::getGeomConePtr(void) const
{
    return static_cast<GeomCone *>(_pcTwinPointer);
}

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ConePyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */

PyObject *ConePy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of ConePy and the Twin object 
    return new ConePy(new GeomCone);
}

// constructor method
int ConePy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string ConePy::representation(void) const
{
    return std::string("<GeomCone object>");
}

PyObject* ConePy::uIso(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* ConePy::vIso(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}



Py::Object ConePy::getApex(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Float ConePy::getRadius(void) const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ConePy::setRadius(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float ConePy::getSemiAngle(void) const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ConePy::setSemiAngle(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ConePy::getCenter(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  ConePy::setCenter(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ConePy::getAxis(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  ConePy::setAxis(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ConePy::getCustomAttributes(const char* /*attr*/) const
{
    return 0;
}

int ConePy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0; 
}
#endif



