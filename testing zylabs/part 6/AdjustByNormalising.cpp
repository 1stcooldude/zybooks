#include <iostream>
#include <vector> 
using namespace std;

int GetMinimumInt(vector<int> listInts);

int main() {
   int size, min;
   vector<int> list;

   cin >> size;

   list.resize(size);

   for (int i = 0; i < size; i++){
      cin >> list.at(i);
   }

   min = GetMinimumInt(list);

   for (int i = 0; i < size; i++){
      list.at(i) -= min;
      cout << list.at(i) << " ";
   }

   cout << endl;

   return 0;
}


int GetMinimumInt(vector<int> listInts){
   int min = listInts.at(0);
   for (int i = 0; i < listInts.size(); i++){
      if (listInts.at(i) < min){
         min = listInts.at(i);
      }
   }
   return min;
}
