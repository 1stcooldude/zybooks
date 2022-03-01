#include <iostream>
#include <string>
using namespace std;

int main() {

   string input;

   getline(cin, input);

   int count = 0;
   for (int i = 0; i < input.size(); i++){
      if (i == 0){
         count++;
      } else if (isspace(input.at(i)) && (!isspace(input.at(i-1)))){
         count++;
      }
   }
   if (input.size() != 0){
      if (isspace(input.at(input.size()-1))){
         count--;
      }
   }
   
   cout << count << endl;
   
   return 0;
}