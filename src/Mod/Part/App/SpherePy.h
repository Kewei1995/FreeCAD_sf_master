
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_SPHEREPY_H
#define PART_SPHEREPY_H

#include <Mod/Part/App/GeometrySurfacePy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>

namespace Part
{

//===========================================================================
// SpherePy - Python wrapper
//===========================================================================

/** The python export class for GeomSphere
 */
class PartExport SpherePy : public Part::GeometrySurfacePy
{
protected:
    ~SpherePy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;}

public:
    SpherePy(GeomSphere *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    typedef GeomSphere* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the uIso() method
    static PyObject * staticCallback_uIso (PyObject *self, PyObject *args);
    /// implementer for the uIso() method
    PyObject*  uIso(PyObject *args);
    /// callback for the vIso() method
    static PyObject * staticCallback_vIso (PyObject *self, PyObject *args);
    /// implementer for the vIso() method
    PyObject*  vIso(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Radius attribute
    static PyObject * staticCallback_getRadius (PyObject *self, void *closure);
    /// getter for the Radius attribute
    Py::Float getRadius(void) const;
    /// setter callback for the Radius attribute
    static int staticCallback_setRadius (PyObject *self, PyObject *value, void *closure);
    /// setter for the Radius attribute
    void setRadius(Py::Float arg);
    ///getter callback for the Area attribute
    static PyObject * staticCallback_getArea (PyObject *self, void *closure);
    /// getter for the Area attribute
    Py::Float getArea(void) const;
    /// setter callback for the Area attribute
    static int staticCallback_setArea (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Area is read only!
    ///getter callback for the Volume attribute
    static PyObject * staticCallback_getVolume (PyObject *self, void *closure);
    /// getter for the Volume attribute
    Py::Float getVolume(void) const;
    /// setter callback for the Volume attribute
    static int staticCallback_setVolume (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Volume is read only!
    ///getter callback for the Center attribute
    static PyObject * staticCallback_getCenter (PyObject *self, void *closure);
    /// getter for the Center attribute
    Py::Object getCenter(void) const;
    /// setter callback for the Center attribute
    static int staticCallback_setCenter (PyObject *self, PyObject *value, void *closure);
    /// setter for the Center attribute
    void setCenter(Py::Object arg);
    ///getter callback for the Axis attribute
    static PyObject * staticCallback_getAxis (PyObject *self, void *closure);
    /// getter for the Axis attribute
    Py::Object getAxis(void) const;
    /// setter callback for the Axis attribute
    static int staticCallback_setAxis (PyObject *self, PyObject *value, void *closure);
    /// setter for the Axis attribute
    void setAxis(Py::Object arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    GeomSphere *getGeomSpherePtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Part

#endif  // PART_SPHEREPY_H


