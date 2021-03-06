
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PATH_FEATUREAREAPY_H
#define PATH_FEATUREAREAPY_H

#include <App/DocumentObjectPy.h>
#include <Mod/Path/App/FeatureArea.h>
#include <string>

namespace Path
{

//===========================================================================
// FeatureAreaPy - Python wrapper
//===========================================================================

/** The python export class for FeatureArea
 */
class PathExport FeatureAreaPy : public App::DocumentObjectPy
{
protected:
    ~FeatureAreaPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;}

public:
    FeatureAreaPy(FeatureArea *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    typedef FeatureArea* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the getArea() method
    static PyObject * staticCallback_getArea (PyObject *self, PyObject *args);
    /// implementer for the getArea() method
    PyObject*  getArea(PyObject *args);
    /// callback for the setParams() method
    static PyObject * staticCallback_setParams (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the setParams() method
    PyObject*  setParams(PyObject *args, PyObject *kwd);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the WorkPlane attribute
    static PyObject * staticCallback_getWorkPlane (PyObject *self, void *closure);
    /// getter for the WorkPlane attribute
    Py::Object getWorkPlane(void) const;
    /// setter callback for the WorkPlane attribute
    static int staticCallback_setWorkPlane (PyObject *self, PyObject *value, void *closure);
    /// setter for the WorkPlane attribute
    void setWorkPlane(Py::Object arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    FeatureArea *getFeatureAreaPtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Path

#endif  // PATH_FEATUREAREAPY_H


