#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

   string input;
   
   cout << "Input an abbreviation:" << endl;
   cin >> input;
   
   if (input == "LOL"){
      cout << "laughing out loud" << endl;
   } else if (input == "IDK"){
      cout << "I don't know" << endl;
   } else if (input == "BFF"){
      cout << "best friends forever" << endl;
   } else if (input == "IMHO"){
      cout << "in my humble opinion" << endl;
   } else if (input == "TMI"){
      cout << "too much information" << endl;
   } else {
      cout << "Unknown" << endl;
   }
   
   return 0;
}