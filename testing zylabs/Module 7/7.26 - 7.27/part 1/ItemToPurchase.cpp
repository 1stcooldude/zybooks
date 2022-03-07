#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(){
   itemName = "none";
   itemPrice = 0;
   itemQuantity = 0;
}

void ItemToPurchase::SetName(string itemName){
   this->itemName = itemName;
}

string ItemToPurchase::GetName() const{
   return itemName;
}

void ItemToPurchase::SetPrice(int itemPrice){
   this->itemPrice = itemPrice;
}

int ItemToPurchase::GetPrice() const{
   return itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantity){
   this->itemQuantity = itemQuantity;
}

int ItemToPurchase::GetQuantity() const{
   return itemQuantity;
}
