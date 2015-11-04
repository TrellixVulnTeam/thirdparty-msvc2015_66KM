// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_WorkItem_HeaderFile
#define _StepAP203_WorkItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_ProductDefinitionFormation.hxx>
class Standard_Transient;
class StepBasic_ProductDefinitionFormation;


//! Representation of STEP SELECT type WorkItem
class StepAP203_WorkItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepAP203_WorkItem();
  
  //! Recognizes a kind of WorkItem select type
  //! 1 -> ProductDefinitionFormation from StepBasic
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as ProductDefinitionFormation (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionFormation) ProductDefinitionFormation()  const;




protected:





private:





};







#endif // _StepAP203_WorkItem_HeaderFile