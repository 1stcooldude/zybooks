#include <iostream>
using namespace std;

int main() {

   int year;

   cin >> year;

   if (year % 4 == 0){
      if (year % 100 == 0){
         if (year % 400 == 0){
            cout << "true" << endl;
         } else {
            cout << "false" << endl;
         }
      } else {
         cout << "true" << endl;
      }
   } else {
      cout << "false" << endl;
   }

   return 0;
}