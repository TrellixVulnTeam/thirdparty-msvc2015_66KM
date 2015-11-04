// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_SequenceOfSelector_HeaderFile
#define _SelectMgr_SequenceOfSelector_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_SelectMgr_ViewerSelector.hxx>
#include <Handle_SelectMgr_SequenceNodeOfSequenceOfSelector.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class SelectMgr_ViewerSelector;
class SelectMgr_SequenceNodeOfSequenceOfSelector;



class SelectMgr_SequenceOfSelector  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    SelectMgr_SequenceOfSelector();
  
  Standard_EXPORT SelectMgr_SequenceOfSelector(const SelectMgr_SequenceOfSelector& Other);
  
  Standard_EXPORT   void Clear() ;
~SelectMgr_SequenceOfSelector()
{
  Clear();
}
  
  Standard_EXPORT  const  SelectMgr_SequenceOfSelector& Assign (const SelectMgr_SequenceOfSelector& Other) ;
 const  SelectMgr_SequenceOfSelector& operator = (const SelectMgr_SequenceOfSelector& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(SelectMgr_ViewerSelector)& T) ;
  
      void Append (SelectMgr_SequenceOfSelector& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(SelectMgr_ViewerSelector)& T) ;
  
      void Prepend (SelectMgr_SequenceOfSelector& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(SelectMgr_ViewerSelector)& T) ;
  
      void InsertBefore (const Standard_Integer Index, SelectMgr_SequenceOfSelector& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(SelectMgr_ViewerSelector)& T) ;
  
      void InsertAfter (const Standard_Integer Index, SelectMgr_SequenceOfSelector& S) ;
  
  Standard_EXPORT  const  Handle(SelectMgr_ViewerSelector)& First()  const;
  
  Standard_EXPORT  const  Handle(SelectMgr_ViewerSelector)& Last()  const;
  
      void Split (const Standard_Integer Index, SelectMgr_SequenceOfSelector& Sub) ;
  
  Standard_EXPORT  const  Handle(SelectMgr_ViewerSelector)& Value (const Standard_Integer Index)  const;
 const  Handle(SelectMgr_ViewerSelector)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(SelectMgr_ViewerSelector)& I) ;
  
  Standard_EXPORT   Handle(SelectMgr_ViewerSelector)& ChangeValue (const Standard_Integer Index) ;
  Handle(SelectMgr_ViewerSelector)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(SelectMgr_ViewerSelector)
#define SeqItem_hxx <SelectMgr_ViewerSelector.hxx>
#define TCollection_SequenceNode SelectMgr_SequenceNodeOfSequenceOfSelector
#define TCollection_SequenceNode_hxx <SelectMgr_SequenceNodeOfSequenceOfSelector.hxx>
#define Handle_TCollection_SequenceNode Handle_SelectMgr_SequenceNodeOfSequenceOfSelector
#define TCollection_SequenceNode_Type_() SelectMgr_SequenceNodeOfSequenceOfSelector_Type_()
#define TCollection_Sequence SelectMgr_SequenceOfSelector
#define TCollection_Sequence_hxx <SelectMgr_SequenceOfSelector.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _SelectMgr_SequenceOfSelector_HeaderFile