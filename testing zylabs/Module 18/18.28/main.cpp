#include <iostream>
using namespace std;

int main() {

   int size;
   int first, last;
   bool isSorted = true;

   cin >> size;

   if (size != 1 && size != 0){
      cin >> first;
      for (int i = 0; i < size-1; i++){
         cin >> last;
         if (first >= last){
            isSorted = false;
            break;
         }
         first = last;
      }
   }
   if (isSorted){
      cout << "Sorted" << endl;
   } else {
      cout << "Unsorted" << endl;
   }
   

   return 0;
}