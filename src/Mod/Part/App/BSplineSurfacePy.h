
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_BSPLINESURFACEPY_H
#define PART_BSPLINESURFACEPY_H

#include <Mod/Part/App/GeometrySurfacePy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>

namespace Part
{

//===========================================================================
// BSplineSurfacePy - Python wrapper
//===========================================================================

/** The python export class for GeomBSplineSurface
 */
class PartExport BSplineSurfacePy : public Part::GeometrySurfacePy
{
protected:
    ~BSplineSurfacePy();

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;}

public:
    BSplineSurfacePy(GeomBSplineSurface *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);


    typedef GeomBSplineSurface* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the bounds() method
    static PyObject * staticCallback_bounds (PyObject *self, PyObject *args);
    /// implementer for the bounds() method
    PyObject*  bounds(PyObject *args);
    /// callback for the isURational() method
    static PyObject * staticCallback_isURational (PyObject *self, PyObject *args);
    /// implementer for the isURational() method
    PyObject*  isURational(PyObject *args);
    /// callback for the isVRational() method
    static PyObject * staticCallback_isVRational (PyObject *self, PyObject *args);
    /// implementer for the isVRational() method
    PyObject*  isVRational(PyObject *args);
    /// callback for the isUPeriodic() method
    static PyObject * staticCallback_isUPeriodic (PyObject *self, PyObject *args);
    /// implementer for the isUPeriodic() method
    PyObject*  isUPeriodic(PyObject *args);
    /// callback for the isVPeriodic() method
    static PyObject * staticCallback_isVPeriodic (PyObject *self, PyObject *args);
    /// implementer for the isVPeriodic() method
    PyObject*  isVPeriodic(PyObject *args);
    /// callback for the isUClosed() method
    static PyObject * staticCallback_isUClosed (PyObject *self, PyObject *args);
    /// implementer for the isUClosed() method
    PyObject*  isUClosed(PyObject *args);
    /// callback for the isVClosed() method
    static PyObject * staticCallback_isVClosed (PyObject *self, PyObject *args);
    /// implementer for the isVClosed() method
    PyObject*  isVClosed(PyObject *args);
    /// callback for the increaseDegree() method
    static PyObject * staticCallback_increaseDegree (PyObject *self, PyObject *args);
    /// implementer for the increaseDegree() method
    PyObject*  increaseDegree(PyObject *args);
    /// callback for the increaseUMultiplicity() method
    static PyObject * staticCallback_increaseUMultiplicity (PyObject *self, PyObject *args);
    /// implementer for the increaseUMultiplicity() method
    PyObject*  increaseUMultiplicity(PyObject *args);
    /// callback for the increaseVMultiplicity() method
    static PyObject * staticCallback_increaseVMultiplicity (PyObject *self, PyObject *args);
    /// implementer for the increaseVMultiplicity() method
    PyObject*  increaseVMultiplicity(PyObject *args);
    /// callback for the incrementUMultiplicity() method
    static PyObject * staticCallback_incrementUMultiplicity (PyObject *self, PyObject *args);
    /// implementer for the incrementUMultiplicity() method
    PyObject*  incrementUMultiplicity(PyObject *args);
    /// callback for the incrementVMultiplicity() method
    static PyObject * staticCallback_incrementVMultiplicity (PyObject *self, PyObject *args);
    /// implementer for the incrementVMultiplicity() method
    PyObject*  incrementVMultiplicity(PyObject *args);
    /// callback for the insertUKnot() method
    static PyObject * staticCallback_insertUKnot (PyObject *self, PyObject *args);
    /// implementer for the insertUKnot() method
    PyObject*  insertUKnot(PyObject *args);
    /// callback for the insertUKnots() method
    static PyObject * staticCallback_insertUKnots (PyObject *self, PyObject *args);
    /// implementer for the insertUKnots() method
    PyObject*  insertUKnots(PyObject *args);
    /// callback for the insertVKnot() method
    static PyObject * staticCallback_insertVKnot (PyObject *self, PyObject *args);
    /// implementer for the insertVKnot() method
    PyObject*  insertVKnot(PyObject *args);
    /// callback for the insertVKnots() method
    static PyObject * staticCallback_insertVKnots (PyObject *self, PyObject *args);
    /// implementer for the insertVKnots() method
    PyObject*  insertVKnots(PyObject *args);
    /// callback for the removeUKnot() method
    static PyObject * staticCallback_removeUKnot (PyObject *self, PyObject *args);
    /// implementer for the removeUKnot() method
    PyObject*  removeUKnot(PyObject *args);
    /// callback for the removeVKnot() method
    static PyObject * staticCallback_removeVKnot (PyObject *self, PyObject *args);
    /// implementer for the removeVKnot() method
    PyObject*  removeVKnot(PyObject *args);
    /// callback for the segment() method
    static PyObject * staticCallback_segment (PyObject *self, PyObject *args);
    /// implementer for the segment() method
    PyObject*  segment(PyObject *args);
    /// callback for the setUKnot() method
    static PyObject * staticCallback_setUKnot (PyObject *self, PyObject *args);
    /// implementer for the setUKnot() method
    PyObject*  setUKnot(PyObject *args);
    /// callback for the setVKnot() method
    static PyObject * staticCallback_setVKnot (PyObject *self, PyObject *args);
    /// implementer for the setVKnot() method
    PyObject*  setVKnot(PyObject *args);
    /// callback for the getUKnot() method
    static PyObject * staticCallback_getUKnot (PyObject *self, PyObject *args);
    /// implementer for the getUKnot() method
    PyObject*  getUKnot(PyObject *args);
    /// callback for the getVKnot() method
    static PyObject * staticCallback_getVKnot (PyObject *self, PyObject *args);
    /// implementer for the getVKnot() method
    PyObject*  getVKnot(PyObject *args);
    /// callback for the setUKnots() method
    static PyObject * staticCallback_setUKnots (PyObject *self, PyObject *args);
    /// implementer for the setUKnots() method
    PyObject*  setUKnots(PyObject *args);
    /// callback for the setVKnots() method
    static PyObject * staticCallback_setVKnots (PyObject *self, PyObject *args);
    /// implementer for the setVKnots() method
    PyObject*  setVKnots(PyObject *args);
    /// callback for the getUKnots() method
    static PyObject * staticCallback_getUKnots (PyObject *self, PyObject *args);
    /// implementer for the getUKnots() method
    PyObject*  getUKnots(PyObject *args);
    /// callback for the getVKnots() method
    static PyObject * staticCallback_getVKnots (PyObject *self, PyObject *args);
    /// implementer for the getVKnots() method
    PyObject*  getVKnots(PyObject *args);
    /// callback for the setPole() method
    static PyObject * staticCallback_setPole (PyObject *self, PyObject *args);
    /// implementer for the setPole() method
    PyObject*  setPole(PyObject *args);
    /// callback for the setPoleCol() method
    static PyObject * staticCallback_setPoleCol (PyObject *self, PyObject *args);
    /// implementer for the setPoleCol() method
    PyObject*  setPoleCol(PyObject *args);
    /// callback for the setPoleRow() method
    static PyObject * staticCallback_setPoleRow (PyObject *self, PyObject *args);
    /// implementer for the setPoleRow() method
    PyObject*  setPoleRow(PyObject *args);
    /// callback for the getPole() method
    static PyObject * staticCallback_getPole (PyObject *self, PyObject *args);
    /// implementer for the getPole() method
    PyObject*  getPole(PyObject *args);
    /// callback for the getPoles() method
    static PyObject * staticCallback_getPoles (PyObject *self, PyObject *args);
    /// implementer for the getPoles() method
    PyObject*  getPoles(PyObject *args);
    /// callback for the setWeight() method
    static PyObject * staticCallback_setWeight (PyObject *self, PyObject *args);
    /// implementer for the setWeight() method
    PyObject*  setWeight(PyObject *args);
    /// callback for the setWeightCol() method
    static PyObject * staticCallback_setWeightCol (PyObject *self, PyObject *args);
    /// implementer for the setWeightCol() method
    PyObject*  setWeightCol(PyObject *args);
    /// callback for the setWeightRow() method
    static PyObject * staticCallback_setWeightRow (PyObject *self, PyObject *args);
    /// implementer for the setWeightRow() method
    PyObject*  setWeightRow(PyObject *args);
    /// callback for the getWeight() method
    static PyObject * staticCallback_getWeight (PyObject *self, PyObject *args);
    /// implementer for the getWeight() method
    PyObject*  getWeight(PyObject *args);
    /// callback for the getWeights() method
    static PyObject * staticCallback_getWeights (PyObject *self, PyObject *args);
    /// implementer for the getWeights() method
    PyObject*  getWeights(PyObject *args);
    /// callback for the getPolesAndWeights() method
    static PyObject * staticCallback_getPolesAndWeights (PyObject *self, PyObject *args);
    /// implementer for the getPolesAndWeights() method
    PyObject*  getPolesAndWeights(PyObject *args);
    /// callback for the getResolution() method
    static PyObject * staticCallback_getResolution (PyObject *self, PyObject *args);
    /// implementer for the getResolution() method
    PyObject*  getResolution(PyObject *args);
    /// callback for the movePoint() method
    static PyObject * staticCallback_movePoint (PyObject *self, PyObject *args);
    /// implementer for the movePoint() method
    PyObject*  movePoint(PyObject *args);
    /// callback for the setUNotPeriodic() method
    static PyObject * staticCallback_setUNotPeriodic (PyObject *self, PyObject *args);
    /// implementer for the setUNotPeriodic() method
    PyObject*  setUNotPeriodic(PyObject *args);
    /// callback for the setVNotPeriodic() method
    static PyObject * staticCallback_setVNotPeriodic (PyObject *self, PyObject *args);
    /// implementer for the setVNotPeriodic() method
    PyObject*  setVNotPeriodic(PyObject *args);
    /// callback for the setUPeriodic() method
    static PyObject * staticCallback_setUPeriodic (PyObject *self, PyObject *args);
    /// implementer for the setUPeriodic() method
    PyObject*  setUPeriodic(PyObject *args);
    /// callback for the setVPeriodic() method
    static PyObject * staticCallback_setVPeriodic (PyObject *self, PyObject *args);
    /// implementer for the setVPeriodic() method
    PyObject*  setVPeriodic(PyObject *args);
    /// callback for the setUOrigin() method
    static PyObject * staticCallback_setUOrigin (PyObject *self, PyObject *args);
    /// implementer for the setUOrigin() method
    PyObject*  setUOrigin(PyObject *args);
    /// callback for the setVOrigin() method
    static PyObject * staticCallback_setVOrigin (PyObject *self, PyObject *args);
    /// implementer for the setVOrigin() method
    PyObject*  setVOrigin(PyObject *args);
    /// callback for the getUMultiplicity() method
    static PyObject * staticCallback_getUMultiplicity (PyObject *self, PyObject *args);
    /// implementer for the getUMultiplicity() method
    PyObject*  getUMultiplicity(PyObject *args);
    /// callback for the getVMultiplicity() method
    static PyObject * staticCallback_getVMultiplicity (PyObject *self, PyObject *args);
    /// implementer for the getVMultiplicity() method
    PyObject*  getVMultiplicity(PyObject *args);
    /// callback for the getUMultiplicities() method
    static PyObject * staticCallback_getUMultiplicities (PyObject *self, PyObject *args);
    /// implementer for the getUMultiplicities() method
    PyObject*  getUMultiplicities(PyObject *args);
    /// callback for the getVMultiplicities() method
    static PyObject * staticCallback_getVMultiplicities (PyObject *self, PyObject *args);
    /// implementer for the getVMultiplicities() method
    PyObject*  getVMultiplicities(PyObject *args);
    /// callback for the exchangeUV() method
    static PyObject * staticCallback_exchangeUV (PyObject *self, PyObject *args);
    /// implementer for the exchangeUV() method
    PyObject*  exchangeUV(PyObject *args);
    /// callback for the uIso() method
    static PyObject * staticCallback_uIso (PyObject *self, PyObject *args);
    /// implementer for the uIso() method
    PyObject*  uIso(PyObject *args);
    /// callback for the vIso() method
    static PyObject * staticCallback_vIso (PyObject *self, PyObject *args);
    /// implementer for the vIso() method
    PyObject*  vIso(PyObject *args);
    /// callback for the reparametrize() method
    static PyObject * staticCallback_reparametrize (PyObject *self, PyObject *args);
    /// implementer for the reparametrize() method
    PyObject*  reparametrize(PyObject *args);
    /// callback for the approximate() method
    static PyObject * staticCallback_approximate (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the approximate() method
    PyObject*  approximate(PyObject *args, PyObject *kwd);
    /// callback for the interpolate() method
    static PyObject * staticCallback_interpolate (PyObject *self, PyObject *args);
    /// implementer for the interpolate() method
    PyObject*  interpolate(PyObject *args);
    /// callback for the buildFromPolesMultsKnots() method
    static PyObject * staticCallback_buildFromPolesMultsKnots (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the buildFromPolesMultsKnots() method
    PyObject*  buildFromPolesMultsKnots(PyObject *args, PyObject *kwd);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the UDegree attribute
    static PyObject * staticCallback_getUDegree (PyObject *self, void *closure);
    /// getter for the UDegree attribute
    Py::Long getUDegree(void) const;
    /// setter callback for the UDegree attribute
    static int staticCallback_setUDegree (PyObject *self, PyObject *value, void *closure);
    // no setter method,  UDegree is read only!
    ///getter callback for the VDegree attribute
    static PyObject * staticCallback_getVDegree (PyObject *self, void *closure);
    /// getter for the VDegree attribute
    Py::Long getVDegree(void) const;
    /// setter callback for the VDegree attribute
    static int staticCallback_setVDegree (PyObject *self, PyObject *value, void *closure);
    // no setter method,  VDegree is read only!
    ///getter callback for the MaxDegree attribute
    static PyObject * staticCallback_getMaxDegree (PyObject *self, void *closure);
    /// getter for the MaxDegree attribute
    Py::Long getMaxDegree(void) const;
    /// setter callback for the MaxDegree attribute
    static int staticCallback_setMaxDegree (PyObject *self, PyObject *value, void *closure);
    // no setter method,  MaxDegree is read only!
    ///getter callback for the NbUPoles attribute
    static PyObject * staticCallback_getNbUPoles (PyObject *self, void *closure);
    /// getter for the NbUPoles attribute
    Py::Long getNbUPoles(void) const;
    /// setter callback for the NbUPoles attribute
    static int staticCallback_setNbUPoles (PyObject *self, PyObject *value, void *closure);
    // no setter method,  NbUPoles is read only!
    ///getter callback for the NbVPoles attribute
    static PyObject * staticCallback_getNbVPoles (PyObject *self, void *closure);
    /// getter for the NbVPoles attribute
    Py::Long getNbVPoles(void) const;
    /// setter callback for the NbVPoles attribute
    static int staticCallback_setNbVPoles (PyObject *self, PyObject *value, void *closure);
    // no setter method,  NbVPoles is read only!
    ///getter callback for the NbUKnots attribute
    static PyObject * staticCallback_getNbUKnots (PyObject *self, void *closure);
    /// getter for the NbUKnots attribute
    Py::Long getNbUKnots(void) const;
    /// setter callback for the NbUKnots attribute
    static int staticCallback_setNbUKnots (PyObject *self, PyObject *value, void *closure);
    // no setter method,  NbUKnots is read only!
    ///getter callback for the NbVKnots attribute
    static PyObject * staticCallback_getNbVKnots (PyObject *self, void *closure);
    /// getter for the NbVKnots attribute
    Py::Long getNbVKnots(void) const;
    /// setter callback for the NbVKnots attribute
    static int staticCallback_setNbVKnots (PyObject *self, PyObject *value, void *closure);
    // no setter method,  NbVKnots is read only!
    ///getter callback for the FirstUKnotIndex attribute
    static PyObject * staticCallback_getFirstUKnotIndex (PyObject *self, void *closure);
    /// getter for the FirstUKnotIndex attribute
    Py::Object getFirstUKnotIndex(void) const;
    /// setter callback for the FirstUKnotIndex attribute
    static int staticCallback_setFirstUKnotIndex (PyObject *self, PyObject *value, void *closure);
    // no setter method,  FirstUKnotIndex is read only!
    ///getter callback for the LastUKnotIndex attribute
    static PyObject * staticCallback_getLastUKnotIndex (PyObject *self, void *closure);
    /// getter for the LastUKnotIndex attribute
    Py::Object getLastUKnotIndex(void) const;
    /// setter callback for the LastUKnotIndex attribute
    static int staticCallback_setLastUKnotIndex (PyObject *self, PyObject *value, void *closure);
    // no setter method,  LastUKnotIndex is read only!
    ///getter callback for the FirstVKnotIndex attribute
    static PyObject * staticCallback_getFirstVKnotIndex (PyObject *self, void *closure);
    /// getter for the FirstVKnotIndex attribute
    Py::Object getFirstVKnotIndex(void) const;
    /// setter callback for the FirstVKnotIndex attribute
    static int staticCallback_setFirstVKnotIndex (PyObject *self, PyObject *value, void *closure);
    // no setter method,  FirstVKnotIndex is read only!
    ///getter callback for the LastVKnotIndex attribute
    static PyObject * staticCallback_getLastVKnotIndex (PyObject *self, void *closure);
    /// getter for the LastVKnotIndex attribute
    Py::Object getLastVKnotIndex(void) const;
    /// setter callback for the LastVKnotIndex attribute
    static int staticCallback_setLastVKnotIndex (PyObject *self, PyObject *value, void *closure);
    // no setter method,  LastVKnotIndex is read only!
    ///getter callback for the UKnotSequence attribute
    static PyObject * staticCallback_getUKnotSequence (PyObject *self, void *closure);
    /// getter for the UKnotSequence attribute
    Py::List getUKnotSequence(void) const;
    /// setter callback for the UKnotSequence attribute
    static int staticCallback_setUKnotSequence (PyObject *self, PyObject *value, void *closure);
    // no setter method,  UKnotSequence is read only!
    ///getter callback for the VKnotSequence attribute
    static PyObject * staticCallback_getVKnotSequence (PyObject *self, void *closure);
    /// getter for the VKnotSequence attribute
    Py::List getVKnotSequence(void) const;
    /// setter callback for the VKnotSequence attribute
    static int staticCallback_setVKnotSequence (PyObject *self, PyObject *value, void *closure);
    // no setter method,  VKnotSequence is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr);              // __getattr__ function
    int _setattr(const char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    GeomBSplineSurface *getGeomBSplineSurfacePtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Part

#endif  // PART_BSPLINESURFACEPY_H


