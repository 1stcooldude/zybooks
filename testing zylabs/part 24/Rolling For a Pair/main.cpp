#include <iostream>
#include "GVdie.h"
using namespace std;

int RollingForPair(GVdie d1, GVdie d2, int val) {
   d1.Roll();
   d2.Roll();
	int die1 = d1.GetValue();
   int die2 = d2.GetValue();
   int count = 1;
   while (die1 != val || die2 != val){
      d1.Roll();
      d2.Roll();
      cout << die1 << " " << die2 << endl;
	   die1 = d1.GetValue();
      die2 = d2.GetValue();
      count++;
   }
   return count;
}

int main() {
	GVdie d1 = GVdie();
	GVdie d2 = GVdie();
	d1.SetSeed(15); // Create a GVdie object with seed value 15
   d2.SetSeed(15); // Create a GVdie object with seed value 15
	int rolls;
	int val;

	cin >> val;
	rolls = RollingForPair(d1, d2, val);
	cout << "It took " << rolls << " rolls to get a pair of " << val << "'s.";

	return 0;
}