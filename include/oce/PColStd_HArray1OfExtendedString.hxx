// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HArray1OfExtendedString_HeaderFile
#define _PColStd_HArray1OfExtendedString_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PColStd_HArray1OfExtendedString.hxx>

#include <Standard_Integer.hxx>
#include <Handle_PCollection_HExtendedString.hxx>
#include <PColStd_FieldOfHArray1OfExtendedString.hxx>
#include <Standard_Address.hxx>
#include <Standard_Persistent.hxx>
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString.hxx>
class PCollection_HExtendedString;
class Standard_OutOfRange;
class Standard_RangeError;
class PColStd_FieldOfHArray1OfExtendedString;
class PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString;
class PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString;


class PColStd_HArray1OfExtendedString : public Standard_Persistent
{

public:

  
  Standard_EXPORT PColStd_HArray1OfExtendedString(const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT PColStd_HArray1OfExtendedString(const Standard_Integer Low, const Standard_Integer Up, const Handle(PCollection_HExtendedString)& V);
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(PCollection_HExtendedString)& Value) ;
  
      Standard_Integer Upper()  const;
  
  Standard_EXPORT   Handle(PCollection_HExtendedString) Value (const Standard_Integer Index)  const;

PColStd_HArray1OfExtendedString( )
{
  
}
PColStd_HArray1OfExtendedString(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColStd_HArray1OfExtendedStringLowerBound() const { return LowerBound; }
    void _CSFDB_SetPColStd_HArray1OfExtendedStringLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPColStd_HArray1OfExtendedStringUpperBound() const { return UpperBound; }
    void _CSFDB_SetPColStd_HArray1OfExtendedStringUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PColStd_FieldOfHArray1OfExtendedString& _CSFDB_GetPColStd_HArray1OfExtendedStringData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColStd_HArray1OfExtendedString)

protected:




private: 

  
  Standard_EXPORT   PColStd_FieldOfHArray1OfExtendedString Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer LowerBound;
  Standard_Integer UpperBound;
  PColStd_FieldOfHArray1OfExtendedString Data;


};

#define Item Handle(PCollection_HExtendedString)
#define Item_hxx <PCollection_HExtendedString.hxx>
#define PCollection_FieldOfHArray1 PColStd_FieldOfHArray1OfExtendedString
#define PCollection_FieldOfHArray1_hxx <PColStd_FieldOfHArray1OfExtendedString.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString_Type_()
#define PCollection_HArray1 PColStd_HArray1OfExtendedString
#define PCollection_HArray1_hxx <PColStd_HArray1OfExtendedString.hxx>
#define Handle_PCollection_HArray1 Handle_PColStd_HArray1OfExtendedString
#define PCollection_HArray1_Type_() PColStd_HArray1OfExtendedString_Type_()

#include <PCollection_HArray1.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray1
#undef PCollection_FieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef PCollection_HArray1
#undef PCollection_HArray1_hxx
#undef Handle_PCollection_HArray1
#undef PCollection_HArray1_Type_




#endif // _PColStd_HArray1OfExtendedString_HeaderFile