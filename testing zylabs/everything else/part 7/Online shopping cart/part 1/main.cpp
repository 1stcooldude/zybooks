#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   ItemToPurchase item1;
   ItemToPurchase item2;
   string name;
   int price, quantity;

   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, name);
   cout << "Enter the item price:" << endl;
   cin >> price;
   cout << "Enter the item quantity:" << endl;
   cin >> quantity;
   cout << endl;

   item1.SetName(name);
   item1.SetPrice(price);
   item1.SetQuantity(quantity);

   cin.ignore();

   cout << "Item 2" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, name);
   cout << "Enter the item price:" << endl;
   cin >> price;
   cout << "Enter the item quantity:" << endl;
   cin >> quantity;
   cout << endl;

   item2.SetName(name);
   item2.SetPrice(price);
   item2.SetQuantity(quantity);

   int total1 = item1.GetPrice() * item1.GetQuantity();
   int total2 = item2.GetPrice() * item2.GetQuantity();
   cout << "TOTAL COST" << endl;
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << total1 << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << total2 << endl;
   cout << endl;
   cout << "Total: $" << total1 + total2 << endl;


   
   return 0;
}