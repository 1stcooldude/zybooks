#include <iostream>
using namespace std;

int CostForMilesGas(int milesDriven){
   int MILES_PER_GALLON = 30;
   int CENTS_PER_GALLON = 400;
   return milesDriven*CENTS_PER_GALLON/MILES_PER_GALLON;
}

int CostForMilesMaintenance(int milesDriven){
   int MILES_PER_TYRE = 20000;
   int CENTS_PER_TYRE = 50000;
   int MILES_PER_SERVICE = 10000;
   int CENTS_PER_SERVICE = 30000;
   return milesDriven* CENTS_PER_TYRE/MILES_PER_TYRE + milesDriven* CENTS_PER_SERVICE/MILES_PER_SERVICE;
}

int CostForMiles(int milesDriven){
   return CostForMilesMaintenance(milesDriven) + CostForMilesGas(milesDriven);
}

int main() {

   int miles;

   cin >> miles;

   cout << CostForMiles(miles) << " cents" << endl;

   return 0;
}