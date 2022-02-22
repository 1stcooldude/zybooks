#include <iostream>
#include <string>
using namespace std;

int main() {

   string input;

   getline(cin, input);

   while (input != "Done" && input != "done" && input != "d"){
      for (int i = input.size() - 1; i >= 0; i--){
         cout << input.at(i);
      }
      cout << endl;
      cin >> input;
   }

   return 0;
}
