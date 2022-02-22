#include "MileageTrackerNode.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
   // References for MileageTrackerNode objects
   MileageTrackerNode* headNode;
   MileageTrackerNode* currNode;
   MileageTrackerNode* lastNode;

   double miles;
   string date;
   int nodeNumber;

   // Front of nodes list
   headNode = new MileageTrackerNode();
   lastNode = headNode;


   cin >> nodeNumber;
   // TODO: Read in the number of nodes


   for (int i = 0; i < nodeNumber; i++){
      cin >> miles >> date;
      currNode = new MileageTrackerNode(miles, date);
      lastNode->InsertAfter(currNode);
      lastNode = currNode;
   }
   // TODO: For the read in number of nodes, read
   //       in data and insert into the linked list

   lastNode = headNode;

   for (int i = 0; i < nodeNumber; i++){
      currNode = lastNode->GetNext();
      currNode->PrintNodeData();
      lastNode = currNode;
   }
   // TODO: Call the PrintNodeData() method
   //       to print the entire linked list

   // MileageTrackerNode Destructor deletes all
   //       following nodes
   delete headNode;
}