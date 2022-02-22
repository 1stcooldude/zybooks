#include <iostream>
#include <string>
using namespace std;


int GetNumOfCharacters(const string usrStr);
void OutputWithoutWhitespace(const string usrStr);


int main() {
   string userInput;

   cout << "Enter a sentence or phrase:" << endl;
   getline(cin, userInput);
   cout << endl;

   cout << "You entered: " << userInput << endl;
   cout << endl;

   cout << "Number of characters: " << GetNumOfCharacters(userInput) << endl;
   cout << "String with no whitespace: ";
   OutputWithoutWhitespace(userInput);

   return 0;
}

int GetNumOfCharacters(const string usrStr){
   int total = 0;
   for (int i = 0; i < usrStr.size(); i++){
      total++;
   }
   return total;
}

void OutputWithoutWhitespace(const string usrStr){\
   for (int i = 0; i < usrStr.size(); i++){
      if (!isspace(usrStr.at(i))){
         cout << usrStr.at(i);
      }
   }
   cout << endl;
}





