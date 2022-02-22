#include <iostream>
#include <string>

using namespace std;

int main(){
   string input1;
   string input2;

   cout << "Enter input: ";
   cin >> input1 >> input2;

   char temp = input1.at(0);
   input1.at(0) = input2.at(input2.size()-1);
   input2.at(input2.size()-1) = temp;

   cout << input1 << " " << input2 << endl;
}