#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon);

int main() {
   double milesPerGallon, dollarsPerGallon;

   cin >> milesPerGallon >> dollarsPerGallon;

   cout << fixed << setprecision(2);
   cout << DrivingCost(10, milesPerGallon, dollarsPerGallon) << " ";
   cout << DrivingCost(50, milesPerGallon, dollarsPerGallon) << " ";
   cout << DrivingCost(400, milesPerGallon, dollarsPerGallon) << endl;


   return 0;
}

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon){
   return drivenMiles / milesPerGallon * dollarsPerGallon;
}