#include <iostream>
#include <vector>
using namespace std;

void SimulateLine(vector<int> customerArrivals) {
   
   int customers = 0;
   for (int customer: customerArrivals){
      if (customers > 0){
         customers--;
      }
      customers += customer;
      cout << customers << " ";
   }
   cout << endl;
   
}


int main() {
   int i;
   vector<int> customerArrivals(10);
   
   // Get customer arrival data
   for (i = 0; i < 10; ++i) {
      cin >> customerArrivals.at(i);
   }

   SimulateLine(customerArrivals);

   return 0;
}