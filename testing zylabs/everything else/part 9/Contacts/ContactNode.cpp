#include "ContactNode.h"
#include <iostream>

ContactNode::ContactNode(string contactName, string contactPhoneNum) {
   this->contactName = contactName;
   this->contactPhoneNum = contactPhoneNum;
   this->nextNodePtr = nullptr;
}

void ContactNode::InsertAfter(ContactNode* nodeLoc) {
   ContactNode* tmpNext;

   tmpNext = nextNodePtr;
   nextNodePtr = nodeLoc;
   nodeLoc->nextNodePtr = tmpNext;
}

void ContactNode::PrintContactNode () const {
   cout << "Name: " << contactName << endl;
   cout << "Phone number: " << contactPhoneNum << endl;
}