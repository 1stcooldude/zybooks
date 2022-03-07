#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	double value;

	cout << fixed << setprecision(1);
   cin >> value;
   cout << "Sqrt: " << sqrt(value) << endl;
	
	return 0;
}