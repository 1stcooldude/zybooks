#include <iostream>
using namespace std;

int main() {

   string number;

   cin >> number;

   if (number.at(5) == '9'){
      if (number.at(4) == '9'){
         if (number.at(3) == '9'){
            if (number.at(2) == 'Z'){
               if (number.at(1) == 'Z'){
                  if (number.at(0) == 'Z'){
                     number = "AAA000";
                  } else {
                     number.at(0)++;
                     number.replace(1, 5, "AA000");
                  }
               } else {
                  number.at(1)++;
                  number.replace(2, 4, "A000");
               }
            } else {
               number.at(2)++;
               number.replace(3, 3, "000");
            }
         } else {
            number.at(3)++;
            number.replace(4, 2, "00");
         }
      } else {
         number.at(4)++;
         number.at(5) = '0';
      }
   } else {
      number.at(5)++;
   }

   cout << number << endl;

   return 0;
}