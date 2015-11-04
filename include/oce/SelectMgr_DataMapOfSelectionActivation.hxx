// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_DataMapOfSelectionActivation_HeaderFile
#define _SelectMgr_DataMapOfSelectionActivation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_SelectMgr_Selection.hxx>
#include <Standard_Integer.hxx>
#include <Handle_SelectMgr_DataMapNodeOfDataMapOfSelectionActivation.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class SelectMgr_Selection;
class TColStd_MapTransientHasher;
class SelectMgr_DataMapNodeOfDataMapOfSelectionActivation;
class SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation;



class SelectMgr_DataMapOfSelectionActivation  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT SelectMgr_DataMapOfSelectionActivation(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   SelectMgr_DataMapOfSelectionActivation& Assign (const SelectMgr_DataMapOfSelectionActivation& Other) ;
  SelectMgr_DataMapOfSelectionActivation& operator = (const SelectMgr_DataMapOfSelectionActivation& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~SelectMgr_DataMapOfSelectionActivation()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Handle(SelectMgr_Selection)& K, const Standard_Integer& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(SelectMgr_Selection)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Handle(SelectMgr_Selection)& K) ;
  
  Standard_EXPORT  const  Standard_Integer& Find (const Handle(SelectMgr_Selection)& K)  const;
 const  Standard_Integer& operator() (const Handle(SelectMgr_Selection)& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Standard_Integer& ChangeFind (const Handle(SelectMgr_Selection)& K) ;
  Standard_Integer& operator() (const Handle(SelectMgr_Selection)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Handle(SelectMgr_Selection)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Handle(SelectMgr_Selection)& K) ;




protected:





private:

  
  Standard_EXPORT SelectMgr_DataMapOfSelectionActivation(const SelectMgr_DataMapOfSelectionActivation& Other);




};







#endif // _SelectMgr_DataMapOfSelectionActivation_HeaderFile