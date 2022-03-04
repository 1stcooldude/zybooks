#include "GVdie.h"
#include <iostream>
#include <ctime>
using namespace std;

GVdie::GVdie() {
	srand(time(0)); //Unique seed
	myValue = rand() % 6 + 1;
}

void GVdie::Roll() {
	myValue = (rand() % 6) + 1;  //1 to 6
}

int GVdie::GetValue() {
	return myValue;
}

// set the random number generator seed for testing
void GVdie::SetSeed(int seed) {
	srand(seed);
}