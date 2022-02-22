#include <iostream>
#include <iomanip>                
using namespace std;

double MilesToLaps(double userMiles);

int main() {
   cout << fixed << setprecision(2);

   double miles;

   cin >> miles;

   cout << MilesToLaps(miles) << endl;

   return 0;
}

double MilesToLaps(double userMiles){
   return userMiles * 4;
}
