#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

   double milesPerGallon, dollarsPerGallon;
   double twenty, seventyFive, fiveHundred;
   
   cin >> milesPerGallon >> dollarsPerGallon;
   
   twenty = (20 / milesPerGallon) * dollarsPerGallon;
   seventyFive = (75 / milesPerGallon) * dollarsPerGallon;
   fiveHundred = (500 / milesPerGallon) * dollarsPerGallon;
   
   cout << fixed << setprecision(2);
   cout << twenty << " " << seventyFive << " " << fiveHundred << endl;

   return 0;
}
