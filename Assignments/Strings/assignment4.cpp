#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
   string input;

   cout << "Enter string: ";
   getline(cin, input);

   int maxLength = 0;
   int length = 0;
   int maxPos = 0;
   int pos = 0;
   for (int i = 0; i < input.size(); i++){
      if (!isspace(input.at(i)) && i != input.size()-1){
         length++;
      } else {
         if (i == input.size()-1){
            length++;
         }
         if (length > maxLength){
            maxLength = length;
            maxPos = pos;
         }
         
         pos = i+1;
         length = 0;
      }
   }

   cout << input.substr(maxPos, maxLength) << endl;
}