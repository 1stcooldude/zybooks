#include <iostream>
#include <string>
using namespace std;

int main() {
   
   string input;
   char temp;
   
   cin >> input;
   
   for (int i = 0; i < input.size(); i++){
      if (input.at(i) == 'i'){
         input.at(i) = '1';
      } else if (input.at(i) == 'a'){
         input.at(i) = '@';
      } else if (input.at(i) == 'm'){
         input.at(i) = 'M';
      } else if (input.at(i) == 'B'){
         input.at(i) = '8';
      } else if (input.at(i) == 's'){
         input.at(i) = '$';
      }
   }
   
   input.push_back('!');
   
   cout << input << endl;

   return 0;
}