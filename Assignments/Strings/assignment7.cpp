#include <iostream>
#include <string>

using namespace std;

int main(){
   string input;

   cout << "Enter string: ";
   getline(cin, input);

   char temp;

   for (int i = 0; i < input.size(); i++){
      if (!isspace(input.at(i))){
         temp = input.at(i) + 1;
         cout << temp;
      } else {
         cout << input.at(i);
      }
   }
}