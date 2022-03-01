#include <iostream>
#include "ContactNode.h"
using namespace std;

int main() {
   string name, phone;
   ContactNode* headNode;
   ContactNode* currNode;
   ContactNode* lastNode;
   ContactNode* tempNode;

   headNode = new ContactNode("dummy", "dummy");
   lastNode = headNode;
   for (int i = 1; i <= 3; i++){
      cout << "Person " << i << endl;
      cout << "Enter name:" << endl;
      getline(cin, name);
      cout << "Enter phone number:" << endl;
      cin >> phone;
      cout << "You entered: " << name << ", " << phone << endl;
      cout << endl;

      currNode = new ContactNode(name, phone);

      lastNode->InsertAfter(currNode);
      
      lastNode = currNode;
      cin.ignore();
   }

   cout << "CONTACT LIST" << endl;
   tempNode = headNode;
   while (tempNode->GetNext() != nullptr){
      tempNode = tempNode->GetNext();
      tempNode->PrintContactNode();
      cout << endl;
   }

   return 0;
}
