#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   int pennies;
   
   cin >> quarters >> dimes >> nickels >> pennies;
   
   dollars = quarters * 0.25 + dimes * 0.1 + nickels * 0.05 + pennies * 0.01;
   
   cout << fixed << setprecision(2);
   cout << "Amount: $" << dollars << endl;
   
   return 0;
}