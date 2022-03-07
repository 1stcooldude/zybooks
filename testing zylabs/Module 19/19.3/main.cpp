#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	double radius;
	double height;
	double volume;
	double area;

	cout << fixed << setprecision(1);

   cin >> radius >> height;

   volume = M_PI * radius * radius * height;
   area = 2 * M_PI * radius * height + 2 * M_PI * radius * radius;

   cout << "Volume: " << volume << " cubic inches" << endl;
   cout << "Surface area: " << area << " square inches" << endl;

	
	return 0;
}