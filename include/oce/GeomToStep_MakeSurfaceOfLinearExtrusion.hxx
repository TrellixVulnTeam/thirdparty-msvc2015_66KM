// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeSurfaceOfLinearExtrusion_HeaderFile
#define _GeomToStep_MakeSurfaceOfLinearExtrusion_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <GeomToStep_Root.hxx>
#include <Handle_Geom_SurfaceOfLinearExtrusion.hxx>
class StepGeom_SurfaceOfLinearExtrusion;
class StdFail_NotDone;
class Geom_SurfaceOfLinearExtrusion;


//! This class implements the mapping between class
//! SurfaceOfLinearExtrusion from Geom and the class
//! SurfaceOfLinearExtrusion from StepGeom which describes a
//! surface_of_linear_extrusion from Prostep
class GeomToStep_MakeSurfaceOfLinearExtrusion  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeSurfaceOfLinearExtrusion(const Handle(Geom_SurfaceOfLinearExtrusion)& CSurf);
  
  Standard_EXPORT  const  Handle(StepGeom_SurfaceOfLinearExtrusion)& Value()  const;




protected:





private:



  Handle(StepGeom_SurfaceOfLinearExtrusion) theSurfaceOfLinearExtrusion;


};







#endif // _GeomToStep_MakeSurfaceOfLinearExtrusion_HeaderFile