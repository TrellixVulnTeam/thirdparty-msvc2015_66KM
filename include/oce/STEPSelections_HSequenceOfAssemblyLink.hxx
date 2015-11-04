// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPSelections_HSequenceOfAssemblyLink_HeaderFile
#define _STEPSelections_HSequenceOfAssemblyLink_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_STEPSelections_HSequenceOfAssemblyLink.hxx>

#include <STEPSelections_SequenceOfAssemblyLink.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_STEPSelections_AssemblyLink.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class STEPSelections_AssemblyLink;
class STEPSelections_SequenceOfAssemblyLink;



class STEPSelections_HSequenceOfAssemblyLink : public MMgt_TShared
{

public:

  
    STEPSelections_HSequenceOfAssemblyLink();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(STEPSelections_AssemblyLink)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(STEPSelections_HSequenceOfAssemblyLink)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(STEPSelections_AssemblyLink)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(STEPSelections_HSequenceOfAssemblyLink)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(STEPSelections_AssemblyLink)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(STEPSelections_HSequenceOfAssemblyLink)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(STEPSelections_AssemblyLink)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(STEPSelections_HSequenceOfAssemblyLink)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(STEPSelections_HSequenceOfAssemblyLink) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(STEPSelections_AssemblyLink)& anItem) ;
  
  Standard_EXPORT  const  Handle(STEPSelections_AssemblyLink)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(STEPSelections_AssemblyLink)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  STEPSelections_SequenceOfAssemblyLink& Sequence()  const;
  
      STEPSelections_SequenceOfAssemblyLink& ChangeSequence() ;
  
  Standard_EXPORT   Handle(STEPSelections_HSequenceOfAssemblyLink) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(STEPSelections_HSequenceOfAssemblyLink)

protected:




private: 


  STEPSelections_SequenceOfAssemblyLink mySequence;


};

#define Item Handle(STEPSelections_AssemblyLink)
#define Item_hxx <STEPSelections_AssemblyLink.hxx>
#define TheSequence STEPSelections_SequenceOfAssemblyLink
#define TheSequence_hxx <STEPSelections_SequenceOfAssemblyLink.hxx>
#define TCollection_HSequence STEPSelections_HSequenceOfAssemblyLink
#define TCollection_HSequence_hxx <STEPSelections_HSequenceOfAssemblyLink.hxx>
#define Handle_TCollection_HSequence Handle_STEPSelections_HSequenceOfAssemblyLink
#define TCollection_HSequence_Type_() STEPSelections_HSequenceOfAssemblyLink_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(STEPSelections_HSequenceOfAssemblyLink) ShallowCopy(const Handle(STEPSelections_HSequenceOfAssemblyLink)& me) {
 return me->ShallowCopy();
}



#endif // _STEPSelections_HSequenceOfAssemblyLink_HeaderFile