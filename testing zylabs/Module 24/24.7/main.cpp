#include <iostream>

#include "GVcoin.h"
using namespace std;

int CountHeads(GVcoin c, int goal) {
   int heads = c.NumHeads();
   while (heads < goal){
      c.Flip();
      heads = c.NumHeads();
   }
   return c.NumFlips();
}

int main() {
	GVcoin c = GVcoin(15); // Create a GVcoin object with seed value 15
	int numHeads = 20;   // Desire 20 heads
	int numFlips = CountHeads(c, numHeads);   // Should return 40 using GVcoin object with seed value 15
	cout << "Total number of flips for 20 heads: " << numFlips << endl;

   c = GVcoin(15);
	numHeads = 100;   // Desire 100 heads
	numFlips = CountHeads(c, numHeads);   // Should return 194 using GVcoin object with seed value 15
	cout << "Total number of flips for 100 heads: " << numFlips << endl;
}