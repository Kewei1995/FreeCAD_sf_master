
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_ARCOFHYPERBOLAPY_H
#define PART_ARCOFHYPERBOLAPY_H

#include <Mod/Part/App/ArcOfConicPy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>

namespace Part
{

//===========================================================================
// ArcOfHyperbolaPy - Python wrapper
//===========================================================================

/** The python export class for GeomArcOfHyperbola
 */
class PartExport ArcOfHyperbolaPy : public Part::ArcOfConicPy
{
protected:
    ~ArcOfHyperbolaPy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;}

public:
    ArcOfHyperbolaPy(GeomArcOfHyperbola *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    typedef GeomArcOfHyperbola* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the MajorRadius attribute
    static PyObject * staticCallback_getMajorRadius (PyObject *self, void *closure);
    /// getter for the MajorRadius attribute
    Py::Float getMajorRadius(void) const;
    /// setter callback for the MajorRadius attribute
    static int staticCallback_setMajorRadius (PyObject *self, PyObject *value, void *closure);
    /// setter for the MajorRadius attribute
    void setMajorRadius(Py::Float arg);
    ///getter callback for the MinorRadius attribute
    static PyObject * staticCallback_getMinorRadius (PyObject *self, void *closure);
    /// getter for the MinorRadius attribute
    Py::Float getMinorRadius(void) const;
    /// setter callback for the MinorRadius attribute
    static int staticCallback_setMinorRadius (PyObject *self, PyObject *value, void *closure);
    /// setter for the MinorRadius attribute
    void setMinorRadius(Py::Float arg);
    ///getter callback for the Hyperbola attribute
    static PyObject * staticCallback_getHyperbola (PyObject *self, void *closure);
    /// getter for the Hyperbola attribute
    Py::Object getHyperbola(void) const;
    /// setter callback for the Hyperbola attribute
    static int staticCallback_setHyperbola (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Hyperbola is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    GeomArcOfHyperbola *getGeomArcOfHyperbolaPtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Part

#endif  // PART_ARCOFHYPERBOLAPY_H

