#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   int total = 0;
   
   getline(cin, userText);  // Gets entire line, including spaces. 

   for (int i = 0; i < userText.size(); i++){
      if (!(userText.at(i) == ' ' || userText.at(i) == '.' || userText.at(i) == '!' || userText.at(i) == ',')){
         total++;
      }
   }

   cout << total;

   return 0;
}
