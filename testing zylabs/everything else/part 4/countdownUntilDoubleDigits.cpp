#include <iostream>
using namespace std;

int main() {

   int number;
   
   cin >> number;
   
   if (number > 100 || number < 11){
      cout << "Input must be 11-100" << endl;
   } else {
      cout << number << " ";
      while (number % 10 != number / 10){
         number--;
         cout << number << " ";
      }
      cout << endl;
   }
   
   return 0;
}

