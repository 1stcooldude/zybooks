#include <iostream>
using namespace std;

int main() {

   string password;
   bool isLetter = false;
   bool isNumber = false;
   bool isSpecial = false;
   bool isLong = true;

   cin >> password;

   if (password.size() < 8){
      cout << "Too short" << endl;
      isLong = false;
   }
   for (int i = 0; i < password.size(); i++){
      if (isalpha(password.at(i))){
         isLetter = true;
      } else if (isdigit(password.at(i))){
         isNumber = true;
      } else if (password.at(i) == '!' || password.at(i) == '#' || password.at(i) == '%'){
         isSpecial = true;
      }
   }

   if (!isLetter){
      cout << "Missing letter" << endl;
   }
   if (!isNumber){
      cout << "Missing number" << endl;
   }
   if (!isSpecial){
      cout << "Missing special" << endl;
   }
   if (isSpecial && isLetter && isNumber && isLong){
      cout << "OK" << endl;
   }

   return 0;
}