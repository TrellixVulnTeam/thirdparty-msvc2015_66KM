// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_DataMapNodeOfDataMapOfLabelListOfLabel_HeaderFile
#define _TFunction_DataMapNodeOfDataMapOfLabelListOfLabel_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TFunction_DataMapNodeOfDataMapOfLabelListOfLabel.hxx>

#include <TDF_Label.hxx>
#include <TDF_LabelList.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class TDF_Label;
class TDF_LabelList;
class TDF_LabelMapHasher;
class TFunction_DataMapOfLabelListOfLabel;
class TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel;



class TFunction_DataMapNodeOfDataMapOfLabelListOfLabel : public TCollection_MapNode
{

public:

  
    TFunction_DataMapNodeOfDataMapOfLabelListOfLabel(const TDF_Label& K, const TDF_LabelList& I, const TCollection_MapNodePtr& n);
  
      TDF_Label& Key()  const;
  
      TDF_LabelList& Value()  const;




  DEFINE_STANDARD_RTTI(TFunction_DataMapNodeOfDataMapOfLabelListOfLabel)

protected:




private: 


  TDF_Label myKey;
  TDF_LabelList myValue;


};

#define TheKey TDF_Label
#define TheKey_hxx <TDF_Label.hxx>
#define TheItem TDF_LabelList
#define TheItem_hxx <TDF_LabelList.hxx>
#define Hasher TDF_LabelMapHasher
#define Hasher_hxx <TDF_LabelMapHasher.hxx>
#define TCollection_DataMapNode TFunction_DataMapNodeOfDataMapOfLabelListOfLabel
#define TCollection_DataMapNode_hxx <TFunction_DataMapNodeOfDataMapOfLabelListOfLabel.hxx>
#define TCollection_DataMapIterator TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel
#define TCollection_DataMapIterator_hxx <TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel.hxx>
#define Handle_TCollection_DataMapNode Handle_TFunction_DataMapNodeOfDataMapOfLabelListOfLabel
#define TCollection_DataMapNode_Type_() TFunction_DataMapNodeOfDataMapOfLabelListOfLabel_Type_()
#define TCollection_DataMap TFunction_DataMapOfLabelListOfLabel
#define TCollection_DataMap_hxx <TFunction_DataMapOfLabelListOfLabel.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _TFunction_DataMapNodeOfDataMapOfLabelListOfLabel_HeaderFile