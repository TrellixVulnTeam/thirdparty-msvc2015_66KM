// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_Volume3dElementRepresentation_HeaderFile
#define _StepFEA_Volume3dElementRepresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_Volume3dElementRepresentation.hxx>

#include <Handle_StepFEA_FeaModel3d.hxx>
#include <Handle_StepElement_Volume3dElementDescriptor.hxx>
#include <Handle_StepElement_ElementMaterial.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepRepr_HArray1OfRepresentationItem.hxx>
#include <Handle_StepRepr_RepresentationContext.hxx>
#include <Handle_StepFEA_HArray1OfNodeRepresentation.hxx>
class StepFEA_FeaModel3d;
class StepElement_Volume3dElementDescriptor;
class StepElement_ElementMaterial;
class TCollection_HAsciiString;
class StepRepr_HArray1OfRepresentationItem;
class StepRepr_RepresentationContext;
class StepFEA_HArray1OfNodeRepresentation;


//! Representation of STEP entity Volume3dElementRepresentation
class StepFEA_Volume3dElementRepresentation : public StepFEA_ElementRepresentation
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_Volume3dElementRepresentation();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aRepresentation_Name, const Handle(StepRepr_HArray1OfRepresentationItem)& aRepresentation_Items, const Handle(StepRepr_RepresentationContext)& aRepresentation_ContextOfItems, const Handle(StepFEA_HArray1OfNodeRepresentation)& aElementRepresentation_NodeList, const Handle(StepFEA_FeaModel3d)& aModelRef, const Handle(StepElement_Volume3dElementDescriptor)& aElementDescriptor, const Handle(StepElement_ElementMaterial)& aMaterial) ;
  
  //! Returns field ModelRef
  Standard_EXPORT   Handle(StepFEA_FeaModel3d) ModelRef()  const;
  
  //! Set field ModelRef
  Standard_EXPORT   void SetModelRef (const Handle(StepFEA_FeaModel3d)& ModelRef) ;
  
  //! Returns field ElementDescriptor
  Standard_EXPORT   Handle(StepElement_Volume3dElementDescriptor) ElementDescriptor()  const;
  
  //! Set field ElementDescriptor
  Standard_EXPORT   void SetElementDescriptor (const Handle(StepElement_Volume3dElementDescriptor)& ElementDescriptor) ;
  
  //! Returns field Material
  Standard_EXPORT   Handle(StepElement_ElementMaterial) Material()  const;
  
  //! Set field Material
  Standard_EXPORT   void SetMaterial (const Handle(StepElement_ElementMaterial)& Material) ;




  DEFINE_STANDARD_RTTI(StepFEA_Volume3dElementRepresentation)

protected:




private: 


  Handle(StepFEA_FeaModel3d) theModelRef;
  Handle(StepElement_Volume3dElementDescriptor) theElementDescriptor;
  Handle(StepElement_ElementMaterial) theMaterial;


};







#endif // _StepFEA_Volume3dElementRepresentation_HeaderFile