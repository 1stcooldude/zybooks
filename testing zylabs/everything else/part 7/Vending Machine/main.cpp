#include <iostream>

#include "VendingMachine.h"
using namespace std;

int main() {
	int purchase, restock;
   VendingMachine vendingMachine;

   cin >> purchase >> restock;

   vendingMachine.Purchase(purchase);
   vendingMachine.Restock(restock);

   vendingMachine.Report();
}