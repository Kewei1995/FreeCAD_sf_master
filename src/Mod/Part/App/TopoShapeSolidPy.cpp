
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in TopoShapeSolidPyImp.cpp! It's not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

using Base::streq;
using namespace Part;

/// Type structure of TopoShapeSolidPy
PyTypeObject TopoShapeSolidPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.TopoShape",     /*tp_name*/
    sizeof(TopoShapeSolidPy),                       /*tp_basicsize*/
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
    "Part.Solid(shape): Create a solid out of shells of shape. If shape is a compsolid, the overall volume solid is created.",           /*tp_doc */
    0,                                                /*tp_traverse */
    0,                                                /*tp_clear */
    0,                                                /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    0,                                                /*tp_iter */
    0,                                                /*tp_iternext */
    Part::TopoShapeSolidPy::Methods,                     /*tp_methods */
    0,                                                /*tp_members */
    Part::TopoShapeSolidPy::GetterSetter,                     /*tp_getset */
    &Part::TopoShapePy::Type,                        /*tp_base */
    0,                                                /*tp_dict */
    0,                                                /*tp_descr_get */
    0,                                                /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    0,                                                /*tp_alloc */
    Part::TopoShapeSolidPy::PyMake,/*tp_new */
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

/// Methods structure of TopoShapeSolidPy
PyMethodDef TopoShapeSolidPy::Methods[] = {
    {"getMomentOfInertia",
        reinterpret_cast<PyCFunction>( staticCallback_getMomentOfInertia ),
        METH_VARARGS,
        "computes the moment of inertia of the material system about the axis A.\nmySolid.getMomentOfInertia( point, direction )"
    },
    {"getRadiusOfGyration",
        reinterpret_cast<PyCFunction>( staticCallback_getRadiusOfGyration ),
        METH_VARARGS,
        "Returns the radius of gyration of the current system about the axis A.\nmySolid.getRadiusOfGyration( point, direction )"
    },
    {"offsetFaces",
        reinterpret_cast<PyCFunction>( staticCallback_offsetFaces ),
        METH_VARARGS,
        "Extrude single faces of the solid.\nExample:\nsolid.offsetFaces({solid.Faces[0]:1.0,solid.Faces[1]:2.0})\nExample:\nsolid.offsetFaces((solid.Faces[0],solid.Faces[1]), 1.5)\n        "
    },
    {NULL, NULL, 0, NULL}		/* Sentinel */
};



/// Attribute structure of TopoShapeSolidPy
PyGetSetDef TopoShapeSolidPy::GetterSetter[] = {
    {"Mass",
        (getter) staticCallback_getMass,
        (setter) staticCallback_setMass, 
        "Returns the mass of the current system.",
        NULL
    },
    {"CenterOfMass",
        (getter) staticCallback_getCenterOfMass,
        (setter) staticCallback_setCenterOfMass, 
        "Returns the center of mass of the current system.\nIf the gravitational field is uniform, it is the center of gravity.\nThe coordinates returned for the center of mass are expressed in the\nabsolute Cartesian coordinate system.",
        NULL
    },
    {"MatrixOfInertia",
        (getter) staticCallback_getMatrixOfInertia,
        (setter) staticCallback_setMatrixOfInertia, 
        "Returns the matrix of inertia. It is a symmetrical matrix. \nThe coefficients of the matrix are the quadratic moments of \ninertia. \n\n | Ixx Ixy Ixz 0 | \n | Ixy Iyy Iyz 0 | \n | Ixz Iyz Izz 0 | \n | 0   0   0   1 | \n\nThe moments of inertia are denoted by Ixx, Iyy, Izz. \nThe products of inertia are denoted by Ixy, Ixz, Iyz. \nThe matrix of inertia is returned in the central coordinate \nsystem (G, Gx, Gy, Gz) where G is the centre of mass of the \nsystem and Gx, Gy, Gz the directions parallel to the X(1,0,0) \nY(0,1,0) Z(0,0,1) directions of the absolute cartesian \ncoordinate system.",
        NULL
    },
    {"StaticMoments",
        (getter) staticCallback_getStaticMoments,
        (setter) staticCallback_setStaticMoments, 
        "Returns Ix, Iy, Iz, the static moments of inertia of the \n current system; i.e. the moments of inertia about the \n three axes of the Cartesian coordinate system.",
        NULL
    },
    {"PrincipalProperties",
        (getter) staticCallback_getPrincipalProperties,
        (setter) staticCallback_setPrincipalProperties, 
        "Computes the principal properties of inertia of the current system. \n There is always a set of axes for which the products \n of inertia of a geometric system are equal to 0; i.e. the \n matrix of inertia of the system is diagonal. These axes \n are the principal axes of inertia. Their origin is \n coincident with the center of mass of the system. The \n associated moments are called the principal moments of inertia. \n This function computes the eigen values and the \n eigen vectors of the matrix of inertia of the system.",
        NULL
    },
    {"OuterShell",
        (getter) staticCallback_getOuterShell,
        (setter) staticCallback_setOuterShell, 
        "\nReturns the outer most shell of this solid or an null\nshape if the solid has no shells",
        NULL
    },
    {NULL, NULL, NULL, NULL, NULL}		/* Sentinel */
};

// getMomentOfInertia() callback and implementer
// PyObject*  TopoShapeSolidPy::getMomentOfInertia(PyObject *args){};
// has to be implemented in TopoShapeSolidPyImp.cpp
PyObject * TopoShapeSolidPy::staticCallback_getMomentOfInertia (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'getMomentOfInertia' of 'Part.TopoShape' object needs an argument");
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
        PyObject* ret = static_cast<TopoShapeSolidPy*>(self)->getMomentOfInertia(args);
        if (ret != 0)
            static_cast<TopoShapeSolidPy*>(self)->startNotify();
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

// getRadiusOfGyration() callback and implementer
// PyObject*  TopoShapeSolidPy::getRadiusOfGyration(PyObject *args){};
// has to be implemented in TopoShapeSolidPyImp.cpp
PyObject * TopoShapeSolidPy::staticCallback_getRadiusOfGyration (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'getRadiusOfGyration' of 'Part.TopoShape' object needs an argument");
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
        PyObject* ret = static_cast<TopoShapeSolidPy*>(self)->getRadiusOfGyration(args);
        if (ret != 0)
            static_cast<TopoShapeSolidPy*>(self)->startNotify();
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

// offsetFaces() callback and implementer
// PyObject*  TopoShapeSolidPy::offsetFaces(PyObject *args){};
// has to be implemented in TopoShapeSolidPyImp.cpp
PyObject * TopoShapeSolidPy::staticCallback_offsetFaces (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'offsetFaces' of 'Part.TopoShape' object needs an argument");
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
        PyObject* ret = static_cast<TopoShapeSolidPy*>(self)->offsetFaces(args);
        if (ret != 0)
            static_cast<TopoShapeSolidPy*>(self)->startNotify();
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

// Mass() callback and implementer
// PyObject*  TopoShapeSolidPy::Mass(PyObject *args){};
// has to be implemented in TopoShapeSolidPyImp.cpp
PyObject * TopoShapeSolidPy::staticCallback_getMass (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<TopoShapeSolidPy*>(self)->getMass());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Mass' of object 'TopoShape'");
        return NULL;
    }
}

int TopoShapeSolidPy::staticCallback_setMass (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Mass' of object 'TopoShape' is read-only");
    return -1;
}

// CenterOfMass() callback and implementer
// PyObject*  TopoShapeSolidPy::CenterOfMass(PyObject *args){};
// has to be implemented in TopoShapeSolidPyImp.cpp
PyObject * TopoShapeSolidPy::staticCallback_getCenterOfMass (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<TopoShapeSolidPy*>(self)->getCenterOfMass());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'CenterOfMass' of object 'TopoShape'");
        return NULL;
    }
}

int TopoShapeSolidPy::staticCallback_setCenterOfMass (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'CenterOfMass' of object 'TopoShape' is read-only");
    return -1;
}

// MatrixOfInertia() callback and implementer
// PyObject*  TopoShapeSolidPy::MatrixOfInertia(PyObject *args){};
// has to be implemented in TopoShapeSolidPyImp.cpp
PyObject * TopoShapeSolidPy::staticCallback_getMatrixOfInertia (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<TopoShapeSolidPy*>(self)->getMatrixOfInertia());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'MatrixOfInertia' of object 'TopoShape'");
        return NULL;
    }
}

int TopoShapeSolidPy::staticCallback_setMatrixOfInertia (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'MatrixOfInertia' of object 'TopoShape' is read-only");
    return -1;
}

// StaticMoments() callback and implementer
// PyObject*  TopoShapeSolidPy::StaticMoments(PyObject *args){};
// has to be implemented in TopoShapeSolidPyImp.cpp
PyObject * TopoShapeSolidPy::staticCallback_getStaticMoments (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<TopoShapeSolidPy*>(self)->getStaticMoments());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'StaticMoments' of object 'TopoShape'");
        return NULL;
    }
}

int TopoShapeSolidPy::staticCallback_setStaticMoments (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'StaticMoments' of object 'TopoShape' is read-only");
    return -1;
}

// PrincipalProperties() callback and implementer
// PyObject*  TopoShapeSolidPy::PrincipalProperties(PyObject *args){};
// has to be implemented in TopoShapeSolidPyImp.cpp
PyObject * TopoShapeSolidPy::staticCallback_getPrincipalProperties (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<TopoShapeSolidPy*>(self)->getPrincipalProperties());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'PrincipalProperties' of object 'TopoShape'");
        return NULL;
    }
}

int TopoShapeSolidPy::staticCallback_setPrincipalProperties (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'PrincipalProperties' of object 'TopoShape' is read-only");
    return -1;
}

// OuterShell() callback and implementer
// PyObject*  TopoShapeSolidPy::OuterShell(PyObject *args){};
// has to be implemented in TopoShapeSolidPyImp.cpp
PyObject * TopoShapeSolidPy::staticCallback_getOuterShell (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<TopoShapeSolidPy*>(self)->getOuterShell());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'OuterShell' of object 'TopoShape'");
        return NULL;
    }
}

int TopoShapeSolidPy::staticCallback_setOuterShell (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'OuterShell' of object 'TopoShape' is read-only");
    return -1;
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
TopoShapeSolidPy::TopoShapeSolidPy(TopoShape *pcObject, PyTypeObject *T)
    : TopoShapePy(static_cast<TopoShapePy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
TopoShapeSolidPy::~TopoShapeSolidPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// TopoShapeSolidPy representation
//--------------------------------------------------------------------------
PyObject *TopoShapeSolidPy::_repr(void)
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// TopoShapeSolidPy Attributes
//--------------------------------------------------------------------------
PyObject *TopoShapeSolidPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return TopoShapePy::_getattr(attr);
}

int TopoShapeSolidPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return TopoShapePy::_setattr(attr, value);
}

TopoShape *TopoShapeSolidPy::getTopoShapePtr(void) const
{
    return static_cast<TopoShape *>(_pcTwinPointer);
}

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in TopoShapeSolidPyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */

PyObject *TopoShapeSolidPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of TopoShapeSolidPy and the Twin object 
    return new TopoShapeSolidPy(new TopoShape);
}

// constructor method
int TopoShapeSolidPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string TopoShapeSolidPy::representation(void) const
{
    return std::string("<TopoShape object>");
}

PyObject* TopoShapeSolidPy::getMomentOfInertia(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* TopoShapeSolidPy::getRadiusOfGyration(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* TopoShapeSolidPy::offsetFaces(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}



Py::Object TopoShapeSolidPy::getMass(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object TopoShapeSolidPy::getCenterOfMass(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object TopoShapeSolidPy::getMatrixOfInertia(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object TopoShapeSolidPy::getStaticMoments(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Dict TopoShapeSolidPy::getPrincipalProperties(void) const
{
    //return Py::Dict();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object TopoShapeSolidPy::getOuterShell(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

PyObject *TopoShapeSolidPy::getCustomAttributes(const char* /*attr*/) const
{
    return 0;
}

int TopoShapeSolidPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0; 
}
#endif



