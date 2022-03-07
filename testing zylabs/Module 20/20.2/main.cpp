#include <iostream>
using namespace std;

int main() {
   int val1;
   int val2;
   int val3;
   int max;

   cin >> val1 >> val2 >> val3;

   if (val1 > val2){
      if (val1 > val3){
         cout << val1 << endl;
      } else {
         cout << val3 << endl;
      }
   } else {
      if (val2 > val3){
         cout << val2 << endl;
      } else {
         cout << val3 << endl;
      }
   }

   return 0;
}