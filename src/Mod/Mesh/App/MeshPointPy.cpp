
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in MeshPointPyImp.cpp! It's not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

using Base::streq;
using namespace Mesh;

/// Type structure of MeshPointPy
PyTypeObject MeshPointPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Mesh.MeshPoint",     /*tp_name*/
    sizeof(MeshPointPy),                       /*tp_basicsize*/
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
    " Point in mesh\n"
    "This is a point in a MeshObject. You can get it by e.g. iterating a\n"
    "mesh. The point has a connection to its mesh and allows therefore \n"
    "topological operations. It is also possible to create an unbounded mesh point e.g. to create\n"
    "a mesh. In this case the topological operations will fail. The same is\n"
    "when you cut the bound to the mesh by calling unbound().\n"
    "	  ",           /*tp_doc */
    0,                                                /*tp_traverse */
    0,                                                /*tp_clear */
    0,                                                /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    0,                                                /*tp_iter */
    0,                                                /*tp_iternext */
    Mesh::MeshPointPy::Methods,                     /*tp_methods */
    0,                                                /*tp_members */
    Mesh::MeshPointPy::GetterSetter,                     /*tp_getset */
    &Base::PyObjectBase::Type,                        /*tp_base */
    0,                                                /*tp_dict */
    0,                                                /*tp_descr_get */
    0,                                                /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    0,                                                /*tp_alloc */
    Mesh::MeshPointPy::PyMake,/*tp_new */
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

/// Methods structure of MeshPointPy
PyMethodDef MeshPointPy::Methods[] = {
    {"unbound",
        reinterpret_cast<PyCFunction>( staticCallback_unbound ),
        METH_VARARGS,
        " method unbound()\nCut the connection to a MeshObject. The point becomes\nfree and is more or less a simple vector/point.\nAfter calling unbound() no topological operation will\nwork!\n			  "
    },
    {"move",
        reinterpret_cast<PyCFunction>( staticCallback_move ),
        METH_VARARGS,
        "method move(Vector)\nThis method moves the point in the mesh along the \ngiven vector. This affects the geometry of the mesh.\nBe aware that after moving point(s) the mesh can \nhave self intersections!\n              "
    },
    {NULL, NULL, 0, NULL}		/* Sentinel */
};



/// Attribute structure of MeshPointPy
PyGetSetDef MeshPointPy::GetterSetter[] = {
    {"Index",
        (getter) staticCallback_getIndex,
        (setter) staticCallback_setIndex, 
        "The index of this point in the MeshObject",
        NULL
    },
    {"Bound",
        (getter) staticCallback_getBound,
        (setter) staticCallback_setBound, 
        "Bound state of the point",
        NULL
    },
    {"Normal",
        (getter) staticCallback_getNormal,
        (setter) staticCallback_setNormal, 
        "Normal vector of the point computed by the surrounding mesh.",
        NULL
    },
    {"Vector",
        (getter) staticCallback_getVector,
        (setter) staticCallback_setVector, 
        "Vector of the point.",
        NULL
    },
    {"x",
        (getter) staticCallback_getx,
        (setter) staticCallback_setx, 
        "The X component of the point.\nSetting this value also affects the mesh if this point is connected to it.",
        NULL
    },
    {"y",
        (getter) staticCallback_gety,
        (setter) staticCallback_sety, 
        "The Y component of the point.\nSetting this value also affects the mesh if this point is connected to it.",
        NULL
    },
    {"z",
        (getter) staticCallback_getz,
        (setter) staticCallback_setz, 
        "The Z component of the point.\nSetting this value also affects the mesh if this point is connected to it.",
        NULL
    },
    {NULL, NULL, NULL, NULL, NULL}		/* Sentinel */
};

// unbound() callback and implementer
// PyObject*  MeshPointPy::unbound(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_unbound (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'unbound' of 'Mesh.MeshPoint' object needs an argument");
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
        PyObject* ret = static_cast<MeshPointPy*>(self)->unbound(args);
        if (ret != 0)
            static_cast<MeshPointPy*>(self)->startNotify();
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

// move() callback and implementer
// PyObject*  MeshPointPy::move(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_move (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'move' of 'Mesh.MeshPoint' object needs an argument");
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
        PyObject* ret = static_cast<MeshPointPy*>(self)->move(args);
        if (ret != 0)
            static_cast<MeshPointPy*>(self)->startNotify();
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

// Index() callback and implementer
// PyObject*  MeshPointPy::Index(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getIndex (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getIndex());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Index' of object 'MeshPoint'");
        return NULL;
    }
}

int MeshPointPy::staticCallback_setIndex (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Index' of object 'MeshPoint' is read-only");
    return -1;
}

// Bound() callback and implementer
// PyObject*  MeshPointPy::Bound(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getBound (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getBound());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Bound' of object 'MeshPoint'");
        return NULL;
    }
}

int MeshPointPy::staticCallback_setBound (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Bound' of object 'MeshPoint' is read-only");
    return -1;
}

// Normal() callback and implementer
// PyObject*  MeshPointPy::Normal(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getNormal (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getNormal());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Normal' of object 'MeshPoint'");
        return NULL;
    }
}

int MeshPointPy::staticCallback_setNormal (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Normal' of object 'MeshPoint' is read-only");
    return -1;
}

// Vector() callback and implementer
// PyObject*  MeshPointPy::Vector(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getVector (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getVector());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Vector' of object 'MeshPoint'");
        return NULL;
    }
}

int MeshPointPy::staticCallback_setVector (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Vector' of object 'MeshPoint' is read-only");
    return -1;
}

// x() callback and implementer
// PyObject*  MeshPointPy::x(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getx (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getx());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'x' of object 'MeshPoint'");
        return NULL;
    }
}

int MeshPointPy::staticCallback_setx (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<MeshPointPy*>(self)->setx(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'x' of object 'MeshPoint'");
        return -1;
    }
}

// y() callback and implementer
// PyObject*  MeshPointPy::y(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_gety (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->gety());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'y' of object 'MeshPoint'");
        return NULL;
    }
}

int MeshPointPy::staticCallback_sety (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<MeshPointPy*>(self)->sety(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'y' of object 'MeshPoint'");
        return -1;
    }
}

// z() callback and implementer
// PyObject*  MeshPointPy::z(PyObject *args){};
// has to be implemented in MeshPointPyImp.cpp
PyObject * MeshPointPy::staticCallback_getz (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<MeshPointPy*>(self)->getz());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'z' of object 'MeshPoint'");
        return NULL;
    }
}

int MeshPointPy::staticCallback_setz (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<MeshPointPy*>(self)->setz(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'z' of object 'MeshPoint'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
MeshPointPy::MeshPointPy(MeshPoint *pcObject, PyTypeObject *T)
    : PyObjectBase(static_cast<PyObjectBase::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
MeshPointPy::~MeshPointPy()                                // Everything handled in parent
{
    // delete the handled object when the PyObject dies
    MeshPointPy::PointerType ptr = static_cast<MeshPointPy::PointerType>(_pcTwinPointer);
    delete ptr;
}

//--------------------------------------------------------------------------
// MeshPointPy representation
//--------------------------------------------------------------------------
PyObject *MeshPointPy::_repr(void)
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// MeshPointPy Attributes
//--------------------------------------------------------------------------
PyObject *MeshPointPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return PyObjectBase::_getattr(attr);
}

int MeshPointPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return PyObjectBase::_setattr(attr, value);
}

MeshPoint *MeshPointPy::getMeshPointPtr(void) const
{
    return static_cast<MeshPoint *>(_pcTwinPointer);
}

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in MeshPointPyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */

PyObject *MeshPointPy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of MeshPointPy and the Twin object 
    return new MeshPointPy(new MeshPoint);
}

// constructor method
int MeshPointPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string MeshPointPy::representation(void) const
{
    return std::string("<MeshPoint object>");
}

PyObject* MeshPointPy::unbound(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}

PyObject* MeshPointPy::move(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return 0;
}



Py::Long MeshPointPy::getIndex(void) const
{
    //return Py::Long();
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean MeshPointPy::getBound(void) const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object MeshPointPy::getNormal(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object MeshPointPy::getVector(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Float MeshPointPy::getx(void) const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  MeshPointPy::setx(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float MeshPointPy::gety(void) const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  MeshPointPy::sety(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float MeshPointPy::getz(void) const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  MeshPointPy::setz(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *MeshPointPy::getCustomAttributes(const char* /*attr*/) const
{
    return 0;
}

int MeshPointPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0; 
}
#endif



