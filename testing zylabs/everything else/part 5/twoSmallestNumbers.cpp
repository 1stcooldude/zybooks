#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> list;
   int size;
   int min1, min2;

   cin >> size;

   list.resize(size);

   for (int i = 0; i < size; i++){
      cin >> list.at(i);
   }

   if (list.at(0) < list.at(1)){
      min1 = list.at(0);
      min2 = list.at(1);
   } else {
      min1 = list.at(1);
      min2 = list.at(0);
   }
   

   for (int i = 1; i < size; i++){
      if (list.at(i) < min2){
         if (list.at(i) < min1){
            min2 = min1;
            min1 = list.at(i);
         } else {
            min2 = list.at(i);
         }
      } 
   }

   cout << min1 << " and " << min2 << endl;

   return 0;
}
