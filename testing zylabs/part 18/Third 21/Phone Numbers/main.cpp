#include <iostream>
using namespace std;

int main() {

   string number;

   cin >> number;

   cout << "(";
   cout << number.at(0);
   cout << number.at(1);
   cout << number.at(2);
   cout << ") ";
   cout << number.at(3);
   cout << number.at(4);
   cout << number.at(5);
   cout << "-";
   cout << number.at(6);
   cout << number.at(7);
   cout << number.at(8);
   cout << number.at(9);
   cout << endl;

   return 0;
}