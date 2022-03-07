#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string CreateAcronym(string userPhrase);

int main() {
   string userInput;

   getline(cin, userInput);

   cout << CreateAcronym(userInput) << endl;

   return 0;
}

string CreateAcronym(string userPhrase){
   string acronym = "";
   if (isupper(userPhrase.at(0))){
      acronym += userPhrase.at(0);
   }
   for (int i = 0; i < userPhrase.size(); i++){
      if (isspace(userPhrase.at(i))){
         if (isupper(userPhrase.at(i+1))){
            acronym += userPhrase.at(i+1);
         }
      }
   }
   return acronym;
}