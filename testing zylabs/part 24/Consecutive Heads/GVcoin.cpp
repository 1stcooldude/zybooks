#include <iostream>
#include <string>

#include "GVcoin.h"
using namespace std;

GVcoin::GVcoin(int seed) {
	heads = 0;
	flips = 0;
	isHeads = true;
	SetSeed(seed);
}

bool GVcoin::IsHeads() {
  return isHeads; // Return true if coin is currently heads
}  

void GVcoin::Flip() {
	int random = rand() % 2;
	if (random == 1) {
		isHeads = true;
	}
	else {
		isHeads = false;
	}
	flips++;  // Increment flip count
	if(isHeads) {
		heads++; // Increment heads count if current flip results in heads
	}
}

int GVcoin::NumFlips() {
	return flips;
}

int GVcoin::NumHeads() {
	return heads;
}

// set the random number generator seed for testing
void GVcoin::SetSeed(int seed) {
	srand(seed);
}