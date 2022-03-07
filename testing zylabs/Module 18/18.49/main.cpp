#include <iostream>
using namespace std;

double CalculateMonthElectricCost(double monthKWh, double tier1Cutoff, double tier1Cost, 
                                  double tier2Cutoff, double tier2Cost, double tier3Cost) {

   double remainingKWh = monthKWh;
   double price = 0;
   if (remainingKWh > tier2Cutoff){
      price += (remainingKWh-tier2Cutoff) * tier3Cost;
      remainingKWh -= tier2Cutoff;
   }
   if (remainingKWh > tier1Cutoff){
      price += (remainingKWh-tier1Cutoff) * tier2Cost;
      remainingKWh -= tier1Cutoff;
   }
   price += remainingKWh * tier1Cost;

   return price;

   
   
   /*double price = 0;
   if (monthKWh >= tier1Cutoff){
      price += tier1Cutoff*tier1Cost;
   } else {
      price += monthKWh * tier1Cost;
      return price;
   }
   if (monthKWh >= tier2Cutoff){
      price += tier2Cutoff*tier2Cost;
   } else {
      price += monthKWh-tier1Cutoff * tier2Cost;
      return price;
   }

   price += (monthKWh-tier2Cutoff-tier1Cutoff) * tier3Cost;
   return price;*/

}


int main() {
   double monthKWh;
   double tier1Cutoff, tier2Cutoff; // In kWh
   double tier1Cost, tier2Cost, tier3Cost; // In $ per kWh
   double monthCost;
   
   cin >> monthKWh;
   cin >> tier1Cutoff;  
   cin >> tier1Cost;
   cin >> tier2Cutoff;
   cin >> tier2Cost;
   cin >> tier3Cost;
   
   monthCost = CalculateMonthElectricCost(monthKWh, tier1Cutoff, tier1Cost, tier2Cutoff, tier2Cost, tier3Cost);
   cout << "$" << monthCost << endl;
   
   return 0;
}