
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PATH_PATHPY_H
#define PATH_PATHPY_H

#include <Base/PersistencePy.h>
#include <Mod/Path/App/Path.h>
#include <string>

namespace Path
{

//===========================================================================
// PathPy - Python wrapper
//===========================================================================

/** The python export class for Toolpath
 */
class PathExport PathPy : public Base::PersistencePy
{
protected:
    ~PathPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;}

public:
    PathPy(Toolpath *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    typedef Toolpath* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the addCommands() method
    static PyObject * staticCallback_addCommands (PyObject *self, PyObject *args);
    /// implementer for the addCommands() method
    PyObject*  addCommands(PyObject *args);
    /// callback for the insertCommand() method
    static PyObject * staticCallback_insertCommand (PyObject *self, PyObject *args);
    /// implementer for the insertCommand() method
    PyObject*  insertCommand(PyObject *args);
    /// callback for the deleteCommand() method
    static PyObject * staticCallback_deleteCommand (PyObject *self, PyObject *args);
    /// implementer for the deleteCommand() method
    PyObject*  deleteCommand(PyObject *args);
    /// callback for the setFromGCode() method
    static PyObject * staticCallback_setFromGCode (PyObject *self, PyObject *args);
    /// implementer for the setFromGCode() method
    PyObject*  setFromGCode(PyObject *args);
    /// callback for the toGCode() method
    static PyObject * staticCallback_toGCode (PyObject *self, PyObject *args);
    /// implementer for the toGCode() method
    PyObject*  toGCode(PyObject *args);
    /// callback for the copy() method
    static PyObject * staticCallback_copy (PyObject *self, PyObject *args);
    /// implementer for the copy() method
    PyObject*  copy(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Length attribute
    static PyObject * staticCallback_getLength (PyObject *self, void *closure);
    /// getter for the Length attribute
    Py::Float getLength(void) const;
    /// setter callback for the Length attribute
    static int staticCallback_setLength (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Length is read only!
    ///getter callback for the Size attribute
    static PyObject * staticCallback_getSize (PyObject *self, void *closure);
    /// getter for the Size attribute
    Py::Long getSize(void) const;
    /// setter callback for the Size attribute
    static int staticCallback_setSize (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Size is read only!
    ///getter callback for the Commands attribute
    static PyObject * staticCallback_getCommands (PyObject *self, void *closure);
    /// getter for the Commands attribute
    Py::List getCommands(void) const;
    /// setter callback for the Commands attribute
    static int staticCallback_setCommands (PyObject *self, PyObject *value, void *closure);
    /// setter for the Commands attribute
    void setCommands(Py::List arg);
    ///getter callback for the Center attribute
    static PyObject * staticCallback_getCenter (PyObject *self, void *closure);
    /// getter for the Center attribute
    Py::Object getCenter(void) const;
    /// setter callback for the Center attribute
    static int staticCallback_setCenter (PyObject *self, PyObject *value, void *closure);
    /// setter for the Center attribute
    void setCenter(Py::Object arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Toolpath *getToolpathPtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Path

#endif  // PATH_PATHPY_H

