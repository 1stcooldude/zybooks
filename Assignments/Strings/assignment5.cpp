#include <iostream>
#include <string>

using namespace std;

int main(){
   string input;

   cout << "Enter string: ";
   getline(cin, input);

   cout << input.at(0);
   for (int i = 0; i < input.size(); i++){
      if (isspace(input.at(i))){
         cout << input.at(i+1);
      }
   }
   cout << endl;
}