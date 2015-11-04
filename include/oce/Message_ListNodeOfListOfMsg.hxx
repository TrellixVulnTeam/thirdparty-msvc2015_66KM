// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_ListNodeOfListOfMsg_HeaderFile
#define _Message_ListNodeOfListOfMsg_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Message_ListNodeOfListOfMsg.hxx>

#include <Message_Msg.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class Message_Msg;
class Message_ListOfMsg;
class Message_ListIteratorOfListOfMsg;



class Message_ListNodeOfListOfMsg : public TCollection_MapNode
{

public:

  
    Message_ListNodeOfListOfMsg(const Message_Msg& I, const TCollection_MapNodePtr& n);
  
      Message_Msg& Value()  const;




  DEFINE_STANDARD_RTTI(Message_ListNodeOfListOfMsg)

protected:




private: 


  Message_Msg myValue;


};

#define Item Message_Msg
#define Item_hxx <Message_Msg.hxx>
#define TCollection_ListNode Message_ListNodeOfListOfMsg
#define TCollection_ListNode_hxx <Message_ListNodeOfListOfMsg.hxx>
#define TCollection_ListIterator Message_ListIteratorOfListOfMsg
#define TCollection_ListIterator_hxx <Message_ListIteratorOfListOfMsg.hxx>
#define Handle_TCollection_ListNode Handle_Message_ListNodeOfListOfMsg
#define TCollection_ListNode_Type_() Message_ListNodeOfListOfMsg_Type_()
#define TCollection_List Message_ListOfMsg
#define TCollection_List_hxx <Message_ListOfMsg.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _Message_ListNodeOfListOfMsg_HeaderFile