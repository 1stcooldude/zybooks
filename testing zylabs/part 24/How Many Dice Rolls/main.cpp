#include <iostream>
#include "GVdie.h"
using namespace std;

int RollTotal(GVdie d, int total) {
	int sum = 0;
   int count = 0;
   while (sum < total){
      d.Roll();
      sum += d.GetValue();
      count++;
   }
   return count;
}

int main() {
	GVdie die = GVdie();
	die.SetSeed(15); // Create a GVdie object with seed value 15
	int total;
	int rolls;

	cin >> total;
	rolls = RollTotal(die, total); // Should return the number of rolls to reach total.
	cout << "Number of rolls to reach at least " << total << ": " << rolls << endl;

	return 0;
}