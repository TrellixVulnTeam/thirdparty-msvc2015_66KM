// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFGraph_ConnectedComponants_HeaderFile
#define _IFGraph_ConnectedComponants_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <IFGraph_SubPartsIterator.hxx>
#include <Standard_Boolean.hxx>
class Interface_Graph;


//! determines Connected Componants in a Graph. They define
//! disjoined sets of Entities
class IFGraph_ConnectedComponants  : public IFGraph_SubPartsIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! creates with a Graph, and will analyse :
  //! whole True  : all the contents of the Model
  //! whole False : sub-parts which will be given later
  Standard_EXPORT IFGraph_ConnectedComponants(const Interface_Graph& agraph, const Standard_Boolean whole);
  
  //! does the computation
  Standard_EXPORT virtual   void Evaluate() ;




protected:





private:





};







#endif // _IFGraph_ConnectedComponants_HeaderFile