#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   cout << "MENU\na - Add item to cart\nd - Remove item from cart\nc - Change item quantity\ni - Output items' descriptions\no - Output shopping cart\nq - Quit" << endl; 
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   string name, description;
   int price, quantity;
   ItemToPurchase item;
   cin.ignore();
   switch (option){
      case ('o'):
         cout << "OUTPUT SHOPPING CART" << endl;
         theCart.PrintTotal();
         break;
      case ('i'):
         cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
         theCart.PrintDescriptions();
         break;
      case ('a'):
         cout << "ADD ITEM TO CART" << endl;
         cout << "Enter the item name:" << endl;
         getline(cin, name);
         item.SetName(name);
         cout << "Enter the item description:" << endl;
         getline(cin, description);
         item.SetDescription(description);
         cout << "Enter the item price:" << endl;
         cin >> price;
         item.SetPrice(price);
         cout << "Enter the item quantity:" << endl;
         cin >> quantity;
         item.SetQuantity(quantity);

         theCart.AddItem(item);
         break;
      case ('d'):
         cout << "REMOVE ITEM FROM CART" << endl;
         cout << "Enter name of item to remove:" << endl;
         getline(cin, name);
         theCart.RemoveItem(name);
         break;
      case ('c'):
         cout << "CHANGE ITEM QUANTITY" << endl;
         cout << "Enter the item name:" << endl;
         getline(cin, name);
         cout << "Enter the new quantity:" << endl;
         cin >> quantity;

         item.SetName(name);
         item.SetQuantity(quantity);

         theCart.ModifyItem(item);
         break;
   }
   cout << endl;
   
}

int main() {
   string name;
   string date;

   cout << "Enter customer's name:" << endl;
   getline(cin, name);

   cout << "Enter today's date:" << endl;
   getline(cin, date);
   cout << endl;

   ShoppingCart cart(name, date);

   cout << "Customer name: " << cart.GetCustomerName() << endl;
   cout << "Today's date: " << cart.GetDate() << endl;

   char choice;
   cout << endl;

   PrintMenu();
   cout << endl;
   cout << "Choose an option:" << endl;
   cin >> choice;
   while (!(choice == 'q' || choice == 'a' || choice == 'd' || choice == 'c' || choice == 'i' || choice == 'o')){
      cout << "Choose an option:" << endl;
      cin >> choice;
   }
   while (choice != 'q'){
      ExecuteMenu(choice, cart);

      PrintMenu();

      cout << endl;
      cout << "Choose an option:" << endl;
      cin >> choice;
   }

   
   return 0;
}