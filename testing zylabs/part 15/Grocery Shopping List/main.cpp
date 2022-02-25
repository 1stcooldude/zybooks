#include "ListItem.h"
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main () {
   list<ListItem> shoppingList;
   // TODO: Declare a list called shoppingList of type ListItem

   string item;
   ListItem *listItem;

   getline(cin, item);

   while (item != "-1"){
      listItem = new ListItem(item);
      shoppingList.push_back(*listItem);
      delete listItem;
      getline(cin, item);
   }
   // TODO: Read inputs (items) and add them to the shoppingList list
   //       Read inputs until a -1 is input

   for (auto x : shoppingList){
      x.PrintNodeData();

   }
   // TODO: Print the shoppingList list using the PrintNodeData() function

   return 0;
}