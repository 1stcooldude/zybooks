#include <iostream>
#include <vector> 
using namespace std;

void ExactChange(int userTotal, vector<int>& coinVals);

int main() {
   int inputVal;
   vector<int> changeAmount(5, 0); 

   cin >> inputVal;
   
   ExactChange(inputVal, changeAmount);

   if (changeAmount.at(0) == -1){
      cout << "no change" << endl;
   } else {
      if (changeAmount.at(0) > 0){
         if (changeAmount.at(0) == 1){
            cout << "1 dollar" << endl;
         } else {
            cout << changeAmount.at(0) << " dollars" << endl;
         }
      }
      if (changeAmount.at(1) > 0){
         if (changeAmount.at(1) == 1){
            cout << "1 quarter" << endl;
         } else {
            cout << changeAmount.at(1) << " quarters" << endl;
         }
      }
      if (changeAmount.at(2) > 0){
         if (changeAmount.at(2) == 1){
            cout << "1 dime" << endl;
         } else {
            cout << changeAmount.at(2) << " dimes" << endl;
         }
      }
      if (changeAmount.at(3) > 0){
         if (changeAmount.at(3) == 1){
            cout << "1 nickel" << endl;
         } else {
            cout << changeAmount.at(3) << " nickels" << endl;
         }
      }
      if (changeAmount.at(4) > 0){
         if (changeAmount.at(4) == 1){
            cout << "1 penny" << endl;
         } else {
            cout << changeAmount.at(4) << " pennies" << endl;
         }
      }
   }

   return 0;
}

void ExactChange(int userTotal, vector<int>& coinVals){
   if (userTotal <= 0){
      coinVals.at(0) = -1;
   } else {
      if (userTotal >= 100){
         coinVals.at(0) = userTotal / 100;
         userTotal -= coinVals.at(0) * 100;
      }
      if (userTotal >= 25){
         coinVals.at(1) = userTotal / 25;
         userTotal -= coinVals.at(1) * 25;
      }
      if (userTotal >= 10){
         coinVals.at(2) = userTotal / 10;
         userTotal -= coinVals.at(2) * 10;
      }
      if (userTotal >= 5){
         coinVals.at(3) = userTotal / 5;
         userTotal -= coinVals.at(3) * 5;
      }
      if (userTotal >= 1){
         coinVals.at(4) = userTotal;
      }

   }
}
