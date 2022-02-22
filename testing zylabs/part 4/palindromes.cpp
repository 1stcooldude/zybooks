#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

   string input;
   string temp = "";
   string inputNoSpace = "";

   getline(cin, input);

   for (int i = 0; i < input.size(); i++){
      if (isspace(input.at(i))){
         continue;
      } 
      inputNoSpace += input.at(i);
   }

   for (int i = inputNoSpace.size() - 1; i >= 0; i--){
      temp += inputNoSpace.at(i);     
   }

   if (temp != inputNoSpace){
      cout << "not a ";
   }

   cout << "palindrome: " << input << endl;

   return 0;
}
