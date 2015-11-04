// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PXCAFDoc_SeqExplorerOfGraphNodeSequence_HeaderFile
#define _PXCAFDoc_SeqExplorerOfGraphNodeSequence_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_PXCAFDoc_SeqNodeOfGraphNodeSequence.hxx>
#include <Standard_Integer.hxx>
#include <Handle_PXCAFDoc_GraphNodeSequence.hxx>
#include <Handle_PXCAFDoc_GraphNode.hxx>
#include <Standard_Boolean.hxx>
class PXCAFDoc_SeqNodeOfGraphNodeSequence;
class PXCAFDoc_GraphNodeSequence;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class PXCAFDoc_GraphNode;



class PXCAFDoc_SeqExplorerOfGraphNodeSequence 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PXCAFDoc_SeqExplorerOfGraphNodeSequence(const Handle(PXCAFDoc_GraphNodeSequence)& S);
  
  Standard_EXPORT   Handle(PXCAFDoc_GraphNode) Value (const Standard_Integer Index) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(PXCAFDoc_GraphNode)& T) ;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const Handle(PXCAFDoc_GraphNode)& T, const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const Handle(PXCAFDoc_GraphNode)& T) ;




protected:





private:



  Handle(PXCAFDoc_SeqNodeOfGraphNodeSequence) CurrentItem;
  Standard_Integer CurrentIndex;
  Handle(PXCAFDoc_GraphNodeSequence) TheSequence;


};







#endif // _PXCAFDoc_SeqExplorerOfGraphNodeSequence_HeaderFile