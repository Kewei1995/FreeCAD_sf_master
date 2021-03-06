
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef IMPORT_STEPSHAPEPY_H
#define IMPORT_STEPSHAPEPY_H

#include <Base/PyObjectBase.h>
#include <Mod/Import/App/StepShape.h>
#include <string>

namespace Import
{

//===========================================================================
// StepShapePy - Python wrapper
//===========================================================================

/** The python export class for StepShape
 */
class ImportExport StepShapePy : public Base::PyObjectBase
{
protected:
    ~StepShapePy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;}

public:
    StepShapePy(StepShape *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    typedef StepShape* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the read() method
    static PyObject * staticCallback_read (PyObject *self, PyObject *args);
    /// implementer for the read() method
    PyObject*  read(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    StepShape *getStepShapePtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Import

#endif  // IMPORT_STEPSHAPEPY_H


