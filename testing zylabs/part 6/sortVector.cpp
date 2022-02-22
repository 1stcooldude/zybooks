#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec);

int main() {
   int size;
   vector<int> list;

   cin >> size;
   
   list.resize(size);

   for (int i = 0; i < size; i++){
      cin >> list.at(i);
   }

   SortVector(list);

   for (int i = 0; i < size; i++){
      cout << list.at(i) << " ";
   }

   cout << endl;

   return 0;
}

void SortVector(vector<int>& myVec){
   vector<int> sortedList;
   bool swapped;
   int temp;
   do {
      swapped = false;
      for (int i = 0; i < myVec.size() - 1; i++){
         if (myVec.at(i) > myVec.at(i+1)){
            temp = myVec.at(i);
            myVec.at(i) = myVec.at(i+1);
            myVec.at(i+1) = temp;
            swapped = true;
         }
      }
   } while (swapped);
}