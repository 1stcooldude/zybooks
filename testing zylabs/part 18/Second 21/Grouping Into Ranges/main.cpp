#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<bool> chptList(16); // Valid chapters are 1-15. 1 means include, 0 exclude. Element 0 unused. 
   bool includeChpt;
   int i, j;
   
   // Get the chapter selections
   for (i = 1; i <= 15; ++i) {
      cin >> includeChpt; 
      if (includeChpt) {
         chptList.at(i) = true;
      }
      else {
         chptList.at(i) = false;
      }
   }

   vector<int> store;
   bool isChapter = false;
   for (i = 1; i <= 15; i++){
      if (chptList.at(i)){
         store.push_back(i);
         isChapter = true;
      } else {
         if (store.size() >= 3){
            cout << store.at(0) << "-" << store.at(store.size()-1) << " ";
         } else {
            for (int j = 0; j < store.size(); j++){
               cout << store.at(j) << " ";
            }
         }
         store.clear();
      }
   }
   if (store.size() >= 3){
      cout << store.at(0) << "-" << store.at(store.size()-1) << " ";
   } else if (store.size() > 0) {
      for (int j = 0; j < store.size(); j++){
         cout << store.at(j) << " ";
      }
   }
   if (!isChapter){
      cout << "None ";
   }
   cout << endl;
   

   /* Type your code here. */

   return 0;
}