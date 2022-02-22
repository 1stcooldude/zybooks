#include <iostream>
#include <string>

using namespace std;

int main(){
   string input;

   cout << "Enter string: ";
   cin >> input;

   int count = 0;
   for (int i = 0; i < input.size(); i++){
      if (input.at(i) == 'x'){
         input.erase(i--,1);
         count++;
      }
   }

   for (int i = 0; i < count; i++){
      input += "x";
   }

   cout << input;
}