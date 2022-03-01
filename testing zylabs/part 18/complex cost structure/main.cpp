#include <iostream>
using namespace std;

int main() {
   int passengerAge;
   int carryOns;
   int checkedBags; 
   int airFare = 0; 
   
   cin >> passengerAge;
   cin >> carryOns;
   cin >> checkedBags; 

   if (passengerAge >= 60){
      airFare += 290;
   } else if (passengerAge > 2){
      airFare += 300;
   }
   
   if (carryOns == 1){
      airFare += 10;
   }

   if (checkedBags == 2){
      airFare += 25;
   } else if (checkedBags >= 3){
      airFare += 50 * (checkedBags - 2) + 25;
   }
   
   cout << airFare << endl;

   return 0;
}