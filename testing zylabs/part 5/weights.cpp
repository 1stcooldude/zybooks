#include <iostream>
#include <iomanip>              // For setprecision
#include <vector>
using namespace std;

int main() {

   cout << fixed << setprecision(2);

   const int SIZE = 5;
   double max, total = 0, average;
   
   vector<double> weight(SIZE);
   
   for (int i = 0; i < SIZE; i++){
      cout << "Enter weight " << i+1 << ":" << endl;
      cin >> weight.at(i);
   }

   max = weight.at(0);
   cout << "You entered: ";
   for (int i = 0; i < SIZE; i++){
      if (weight.at(i) > max){
         max = weight.at(i);
      }
      total += weight.at(i);
      cout << weight.at(i) << " ";
   }

   cout << endl;
   cout << endl;
   cout << "Total weight: " << total << endl;
   cout << "Average weight: " << total/SIZE << endl;
   cout << "Max weight: " << max << endl;

   

   return 0;
}