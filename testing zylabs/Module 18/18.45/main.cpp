#include <iostream>
#include <string>
using namespace std;

string DigitToWord(int digitIn) {
   switch (digitIn){
      case (0):
         return "zero";
      case (1):
         return "one";
      case (2):
         return "two";
      case (3):
         return "three";
      case (4):
         return "four";
      case (5):
         return "five";
      case (6):
         return "six";
      case (7):
         return "seven";
      case (8):
         return "eight";
      case (9):
         return "nine";
      default:
         return "error";
   }

}

string TensDigitToWord(int digitIn) {
 
   switch (digitIn){
      case (2):
         return "twenty";
      case (3):
         return "thirty";
      case (4):
         return "forty";
      case (5):
         return "fifty";
      case (6):
         return "sixty";
      case (7):
         return "seventy";
      case (8):
         return "eighty";
      case (9):
         return "ninety";
      default:
         return "error";
   }

}

string TwoDigitNumToWords(int numIn) {

   return TensDigitToWord(numIn/10) + " " + DigitToWord(numIn%10);

}


int main() {

   int number;
   
   cin >> number;

   cout << TwoDigitNumToWords(number) << endl;
   
   return 0;

}