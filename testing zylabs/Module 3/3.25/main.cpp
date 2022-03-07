#include <iostream>
using namespace std;

int main() {

   int change;
   int dollars;
   int quarters;
   int dimes;
   int nickels;
   int pennies;
   bool isChange = false;
   
   cin >> change;
   
   if (change >= 100){
      dollars = change / 100;
      if (dollars == 1){
         cout << "1 Dollar" << endl;
      } else {
         cout << dollars << " Dollars" << endl;
      }
      change -= (dollars*100);
      isChange = true;
   }
   if (change >= 25){
      quarters = change / 25;
      if (quarters == 1){
         cout << "1 Quarter" << endl;
      } else {
         cout << quarters << " Quarters" << endl;
      }
      change -= (quarters*25);
      isChange = true;
   }
   if (change >= 10){
      dimes = change / 10;
      if (dimes == 1){
         cout << "1 Dime" << endl;
      } else {
         cout << dimes << " Dimes" << endl;
      }
      change -= (dimes*10);
      isChange = true;
   }
   if (change >= 5){
      nickels = change / 5;
      if (nickels == 1){
         cout << "1 Nickel" << endl;
      } else {
         cout << nickels << " Nickels" << endl;
      }
      change -= (nickels*5);
      isChange = true;
   }
   if (change >= 1){
      pennies = change;
      if (pennies == 1){
         cout << "1 Penny" << endl;
      } else {
         cout << pennies << " Pennies" << endl;
      }
      change -= pennies;
      isChange = true;
   }
   if (!isChange){
      cout << "No change" << endl;
   }
   

   return 0;
}