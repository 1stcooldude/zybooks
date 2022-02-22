#include <iostream>
using namespace std;

int CountCharacters(char userChar, string userString);

int main() {
   char userChar;
   string userString;

   cin >> userChar;
   getline(cin, userString);

   cout << CountCharacters(userChar, userString) << endl;

   return 0;
}

int CountCharacters(char userChar, string userString){
   int count = 0;
   for (int i = 0; i < userString.size(); i++){
      if (userString.at(i) == userChar){
         count++;
      }
   }
   return count;
}