#include <iostream>
#include <cctype>
using namespace std;

string RemoveNonAlpha(string userString); 

int main() {
   string userString;

   getline(cin, userString);

   cout << RemoveNonAlpha(userString) << endl;

   return 0;
}

string RemoveNonAlpha(string userString){
   string newString = "";
   for (int i = 0; i < userString.size(); i++){
      if (isalpha(userString.at(i))){
         newString += userString.at(i);
      }
   }
   return newString;
}