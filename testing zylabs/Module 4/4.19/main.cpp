#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string userString;
   bool isDigit = true;
   
   cin >> userString;

   for (int i = 0; i < userString.size(); i++){
      if (!isdigit(userString.at(i))){
         isDigit = false;
      }
   }
   
   if (isDigit){
      cout << "Yes" << endl;
   } else {
      cout << "No" << endl;
   }

   return 0;
}
