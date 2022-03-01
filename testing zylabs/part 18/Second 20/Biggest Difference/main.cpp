#include <iostream>
using namespace std;

int main() {

   int first, last, size;
   int max = 0;

   cin >> size;

   cin >> first;
   for (int i = 1; i < size; i++){
      cin >> last;
      if (abs(first-last) > max){
         max = abs(first-last);
      }
      first = last;
   }

   cout << max << endl;

   return 0;
}