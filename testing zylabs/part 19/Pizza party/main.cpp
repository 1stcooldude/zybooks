#include <iostream>
#include <iomanip>   
#include <math.h>    
using namespace std;

int main() {
   int people;
   int numPizzas;
   double cost;

   
   
   cin >> people;

   numPizzas = ceil(people/6.0);

   cost = numPizzas * 14.95;

   cout << "Pizzas: " << numPizzas << endl;
   cout << fixed << setprecision(2);
   cout << "Cost: $" << cost << endl;

}