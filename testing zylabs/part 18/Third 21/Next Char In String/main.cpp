#include <iostream>
#include <string>
using namespace std;

int FindNextCharInString(string inputString, int startIndex, char searchChar){
   for (int i = startIndex; i < inputString.size(); i++){
      if (inputString.at(i) == searchChar){
         return i;
      }
   }
   return -1;
}
   
int main() {
   string inputString;
   int startIndex;
   char searchChar;
   
   cin >> inputString;
   cin >> startIndex;
   cin >> searchChar;
   
   cout << FindNextCharInString(inputString, startIndex, searchChar) << endl;

   return 0;
}