#include <iostream>
using namespace std;

int main() {
   
   int one, two, three;
   
   cin >> one >> two >> three;
   
   if (one < two){
      if (one < three){
         cout << one << endl;
      } else {
         cout << three << endl;
      }
   } else {
      if (two < three){
         cout << two << endl;
      } else {
         cout << three << endl;
      }
   }

   return 0;
}