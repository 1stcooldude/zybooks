#include <iostream>
using namespace std;

bool IsLeapYear(int userYear);

int main() {
   int year;

   cin >> year;

   if (IsLeapYear(year)){
      cout << year << " is a leap year." << endl;
   } else {
      cout << year << " is not a leap year." << endl;
   }

   return 0;
}

bool IsLeapYear(int userYear){
   if (userYear % 4 == 0){
      if (userYear % 100 == 0){
         if (userYear % 400 == 0){
            return true;
         } else {
            return false;
         }
      } else {
         return true;
      }
   } else {
      return false;
   }
}