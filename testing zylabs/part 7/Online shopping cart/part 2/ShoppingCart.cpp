#include "ShoppingCart.h"

ShoppingCart::ShoppingCart(){
   customerName = "none";
   currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string customerName, string currentDate){
   this->customerName = customerName;
   this->currentDate = currentDate;
}


string ShoppingCart::GetCustomerName() const{
   return customerName;
}

string ShoppingCart::GetDate() const{
   return currentDate;
}


void ShoppingCart::AddItem(ItemToPurchase item){
   cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string item){
   for (int i = 0; i < cartItems.size(); i++){
      if (item == cartItems.at(i).GetName()){
         cartItems.erase(cartItems.begin() + i);
         return;
      }
   }

   cout << "Item not found in cart. Nothing removed." << endl;
}

void ShoppingCart::ModifyItem(ItemToPurchase item){
   for (int i = 0; i < cartItems.size(); i++){
      if (item.GetName() == cartItems.at(i).GetName()){
         if (item.GetDescription() != "none" || item.GetPrice() != 0 || item.GetQuantity() != 0){
            cartItems.at(i).SetQuantity(item.GetQuantity());
            return;
         }
      }
   }

   cout << "Item not found in cart. Nothing modified." << endl;
}


int ShoppingCart::GetNumItemsInCart() const{
   int total = 0;
   for (int i = 0; i < cartItems.size(); i++){
      total += cartItems.at(i).GetQuantity();
   }
   return total;
}

int ShoppingCart::GetCostOfCart() const{
   int total = 0;
   for (int i = 0; i < cartItems.size(); i++){
      total += cartItems.at(i).GetCost();
   }
   return total;
}


void ShoppingCart::PrintTotal() const{
   cout << customerName << "'s Shopping Cart - " << currentDate << endl;
   cout << "Number of Items: " << GetNumItemsInCart() << endl;
   if (GetNumItemsInCart() == 0){
      cout << "\nSHOPPING CART IS EMPTY\n" << endl;
   } else {
      cout << endl;
      for (int i = 0; i < cartItems.size(); i++){
         cartItems.at(i).PrintItemCost();
      }
      cout << endl;
   }
   cout << "Total: $" << GetCostOfCart() << endl;
}

void ShoppingCart::PrintDescriptions() const{
   cout << customerName << "'s Shopping Cart - " << currentDate << endl;
   cout << endl;
   cout << "Item Descriptions" << endl;
   for (int i = 0; i < cartItems.size(); i++){
      cartItems.at(i).PrintItemDescription();
   }
}
