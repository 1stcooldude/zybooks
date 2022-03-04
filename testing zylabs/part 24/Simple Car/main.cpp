#include "SimpleCar.h"

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x, y;

   cin >> x >> y;

   SimpleCar car;

   car.Drive(x);
   car.Reverse(y);
   car.HonkHorn();
   car.Report();
	
	return 0;
}