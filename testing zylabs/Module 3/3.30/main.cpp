#include <iostream>
// FIXME include string library
using namespace std;

int main() {

   string input;
   int index;
   
   cout << "Enter text:" << endl;
   
   getline(cin, input);
   
   cout << "You entered: " << input << endl;
   
   index = input.find("BFF");
   if (index != string::npos){
      input.replace(index, 3, "best friend forever");
   }
   index = string::npos;
   
   index = input.find("IDK");
   if (index != string::npos){
      input.replace(index, 3, "I don't know");
   }
   index = string::npos;
   
   index = input.find("JK");
   if (index != string::npos){
      input.replace(index, 2, "just kidding");
   }
   index = string::npos;
   
   index = input.find("TMI");
   if (index != string::npos){
      input.replace(index, 3, "too much information");
   }
   index = string::npos;
   
   index = input.find("TTYL");
   if (index != string::npos){
      input.replace(index, 4, "talk to you later");
   }
   index = string::npos;
   
   cout << "Expanded: " << input << endl;
   

   return 0;
}