#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   int numItems;
   vector<string> listItems;
   string currItem;
   int i;
   
   // Get items
   cin >> numItems;
   for (i = 0; i < numItems; ++i) {
      cin >> currItem;
      listItems.push_back(currItem);
   }
  
   int length = 0;
   int max = 0;
   for (i = 0; i < numItems; i++){
      if (listItems.at(i) != "I"){
         length++;
      } else {
         if (length > max){
            max = length;
         }
         length = 0;
      }
   }
   if (length > max){
      max = length;
   }

   cout << max << endl;

   return 0;
}