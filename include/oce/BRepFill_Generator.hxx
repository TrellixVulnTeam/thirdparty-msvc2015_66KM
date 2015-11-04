// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_Generator_HeaderFile
#define _BRepFill_Generator_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopTools_SequenceOfShape.hxx>
#include <TopoDS_Shell.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
class TopoDS_Wire;
class TopoDS_Shell;
class TopTools_DataMapOfShapeListOfShape;
class TopTools_ListOfShape;
class TopoDS_Shape;


//! Compute a topological surface ( a  shell) using
//! generating wires. The face of the shell will be
//! ruled surfaces passing by the wires.
//! The wires must have the same number of edges.
class BRepFill_Generator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepFill_Generator();
  
  Standard_EXPORT   void AddWire (const TopoDS_Wire& Wire) ;
  
  //! Compute the  shell.
  Standard_EXPORT   void Perform() ;
  
     const  TopoDS_Shell& Shell()  const;
  
  //! Returns  all   the shapes created
  Standard_EXPORT  const  TopTools_DataMapOfShapeListOfShape& Generated()  const;
  
  //! Returns   the  shapes  created  from   a  subshape
  //! <SSection>  of a  section.
  Standard_EXPORT  const  TopTools_ListOfShape& GeneratedShapes (const TopoDS_Shape& SSection)  const;




protected:





private:



  TopTools_SequenceOfShape myWires;
  TopoDS_Shell myShell;
  TopTools_DataMapOfShapeListOfShape myMap;


};


#include <BRepFill_Generator.lxx>





#endif // _BRepFill_Generator_HeaderFile