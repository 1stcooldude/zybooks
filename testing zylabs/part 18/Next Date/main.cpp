#include <iostream>
using namespace std;

int main() {

   int month, day, year;

   cin >> month >> day >> year;

   if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
      if (day == 31){
         day = 1;
         month ++;
         if (month == 13){
            year++;
            month = 1;
         } 
      } else {
         day++;
      }
   } else if (month == 4 || month == 6 || month == 9 || month == 11){
      if (day == 30){
         month ++;
         day = 1;
      } else {
         day++;
      }
   } else if (month == 2){
      if (day == 28){
         month++;
         day = 1;
      } else {
         day++;
      }
   }

   cout << month << " " << day << " " << year << endl;

   return 0;
}