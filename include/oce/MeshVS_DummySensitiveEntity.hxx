// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DummySensitiveEntity_HeaderFile
#define _MeshVS_DummySensitiveEntity_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MeshVS_DummySensitiveEntity.hxx>

#include <SelectBasics_SensitiveEntity.hxx>
#include <Handle_SelectBasics_EntityOwner.hxx>
#include <Standard_Boolean.hxx>
#include <SelectBasics_PickArgs.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
class SelectBasics_EntityOwner;
class SelectBasics_ListOfBox2d;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;


//! This class allows to create owners to all elements or nodes,
//! both hidden and shown, but these owners user cannot select "by hands"
//! in viewer. They means for internal application tasks, for example, receiving
//! all owners, both for hidden and shown entities.
class MeshVS_DummySensitiveEntity : public SelectBasics_SensitiveEntity
{

public:

  
  Standard_EXPORT MeshVS_DummySensitiveEntity(const Handle(SelectBasics_EntityOwner)& OwnerId);
  
  Standard_EXPORT virtual   void Areas (SelectBasics_ListOfBox2d& aresult) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const SelectBasics_PickArgs& thePickArgs, Standard_Real& theMatchDMin, Standard_Real& theMatchDepth) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const Standard_Real XMin, const Standard_Real YMin, const Standard_Real XMax, const Standard_Real YMax, const Standard_Real aTol) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const TColgp_Array1OfPnt2d& Polyline, const Bnd_Box2d& aBox, const Standard_Real aTol) ;
  
  Standard_EXPORT virtual   Standard_Boolean Is3D()  const;
  
  Standard_EXPORT virtual   Standard_Boolean NeedsConversion()  const;
  
  Standard_EXPORT virtual   Standard_Integer MaxBoxes()  const;




  DEFINE_STANDARD_RTTI(MeshVS_DummySensitiveEntity)

protected:




private: 




};







#endif // _MeshVS_DummySensitiveEntity_HeaderFile