#include <iostream>
#include <string>

using namespace std;

int main(){
   string input;

   cout << "Enter string: ";
   getline(cin, input);

   cout << input.at(0);
   int count = 1;
   char temp;
   for (int i = 0; i < input.size(); i++){
      if (isspace(input.at(i))){
         temp = toupper(input.at(i+(++count)));
         cout << temp;
      }
   }
}