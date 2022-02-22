#include <iostream>
using namespace std;

int main() {
   
   string input;
   string output = "";

   getline(cin, input);

   for (int i = 0; i < input.size(); i++){
      if (!(input.at(i) < 65 || (input.at(i) > 90 && input.at(i) < 97) || input.at(i) > 122)){
         output += input.at(i);
      }
   }

   cout << output << endl;

   return 0;
}