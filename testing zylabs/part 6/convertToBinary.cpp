#include <iostream>
#include <string>
using namespace std;

string IntegerToReverseBinary(int integerValue);
string ReverseString(string userString);

int main() {
   int input;

   cin >> input;

   cout << ReverseString(IntegerToReverseBinary(input)) << endl;

   return 0;
}

string IntegerToReverseBinary(int integerValue){
   string newString = "";
   while (integerValue > 0){
      newString += to_string(integerValue % 2);
      integerValue /= 2;
   }
   return newString;
}

string ReverseString(string userString){
   string newString = "";
   for (int i = userString.size() - 1; i >= 0; i--){
      newString += userString.at(i);
   }
   return newString;
}
