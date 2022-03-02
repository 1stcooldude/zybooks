#include <iostream>
#include <vector>
using namespace std;

int main() {
   
   vector<int> yearlyValues(12);
   int i;
   
   // Get vector values
   for (i = 0; i < 12; ++i) {
      cin >> yearlyValues.at(i);
   }
  
   for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
         cout << yearlyValues.at(i*4 + j) << " ";
      }
      cout << yearlyValues.at(i*4 + 3) << endl;
   }

   return 0;
}