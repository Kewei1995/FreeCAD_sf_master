
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef TECHDRAW_DRAWTEMPLATEPY_H
#define TECHDRAW_DRAWTEMPLATEPY_H

#include <App/DocumentObjectPy.h>
#include <Mod/TechDraw/App/DrawTemplate.h>
#include <string>

namespace TechDraw
{

//===========================================================================
// DrawTemplatePy - Python wrapper
//===========================================================================

/** The python export class for DrawTemplate
 */
class TechDrawExport DrawTemplatePy : public App::DocumentObjectPy
{
protected:
    ~DrawTemplatePy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;}

public:
    DrawTemplatePy(DrawTemplate *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    typedef DrawTemplate* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
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
    DrawTemplate *getDrawTemplatePtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace TechDraw

#endif  // TECHDRAW_DRAWTEMPLATEPY_H


