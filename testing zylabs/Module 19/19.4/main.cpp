#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int numPizza;
	double subTotal;
	double totalDue;
	
	cout << fixed << setprecision(2);
   
   cin >> numPizza;

   subTotal = numPizza * 9.99;

   totalDue = subTotal * 1.06;

   cout << "Subtotal: $" << subTotal << endl;
   cout << "Total due: $" << totalDue << endl;
	
	return 0;
}