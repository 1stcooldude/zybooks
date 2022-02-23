#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
   
   string input;
   ostringstream outSS;
   istringstream inSS;
   string firstName, lastName;
   string firstName2, lastName2;
   int pos;
   
   cout << "Enter input string:" << endl;
   getline(cin, input);
   //cout << input << endl;

   while (input != "q"){
      pos = input.find(',');
      while (pos == -1 && input != "q"){
         cout << "Error: No comma in string." << endl;
         cout << endl;
         cout << "Enter input string:" << endl;
         getline(cin, input);
         pos = input.find(',');
      }

      if (input == "q"){
         break;
      }

      
      firstName = input.substr(0,pos);
      inSS.str(firstName);
      inSS >> firstName2;
      inSS.clear();
      lastName = input.substr(pos+1, input.size()-(pos+1));
      inSS.str(lastName);
      inSS >> lastName2;
      inSS.clear();

      outSS << "First word: " << firstName2  << endl;
      outSS << "Second word: " << lastName2  << endl;

      cout << outSS.str() << endl;

      outSS.str("");


      cout << "Enter input string:" << endl;
      getline(cin, input);
   }  

    
   return 0;
}