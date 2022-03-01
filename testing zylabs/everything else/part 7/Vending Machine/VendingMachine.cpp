#include <iostream>
#include <string>

#include "VendingMachine.h"
using namespace std;


VendingMachine::VendingMachine() {
	bottles = 20;
}

void VendingMachine::Purchase(int amount) {
	bottles = bottles - amount;
}

int VendingMachine::GetInventory() {
	return bottles;
}


void VendingMachine::Restock(int amount) {
	bottles = bottles + amount;
}

// set the random number generator seed for testing
void VendingMachine::Report() {
	cout << "Inventory: " << bottles << " bottles" << endl;
}