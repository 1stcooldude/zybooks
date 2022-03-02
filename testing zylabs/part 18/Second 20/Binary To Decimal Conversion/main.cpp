#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
   
   vector<int> binaryNum(8);
   int digitWeight; 
   int decimalSum = 0; 
   
   // Get user's binary number. Store leftmost bit in element 7, rightmost in 0. 
   for (int i = 7; i >= 0; i--) {
      cin >> binaryNum.at(i); 
   }
   
   for (int i = 0; i < 8; i++){
      digitWeight = pow(2, i);
      decimalSum += digitWeight * binaryNum.at(i);
   }

   cout << decimalSum << endl;
   
   return 0;
}