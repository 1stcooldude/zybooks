#include <iostream>
#include <string>

using namespace std;

int main(){
   string input;

   cout << "Enter string: ";
   cin >> input;

   for (int i = input.size() - 1; i > 0; i--){
      cout << input.at(i) << "-";
   }
   cout << input.at(0) << endl;
}