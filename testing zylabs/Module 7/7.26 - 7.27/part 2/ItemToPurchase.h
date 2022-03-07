#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <iostream>
#include <string>
using namespace std;

class ItemToPurchase{
   private:
      string itemName;
      string itemDescription;
      int itemPrice;
      int itemQuantity;

   public:
      ItemToPurchase();
      ItemToPurchase(string itemName, string itemDescription, int itemPrice, int itemQuantity);
      
      void SetName(string itemName);
      string GetName() const;
      void SetDescription(string itemDescription);
      string GetDescription() const;
      void SetPrice(int itemPrice);
      int GetPrice() const;
      void SetQuantity(int itemQuantity);
      int GetQuantity() const;

      int GetCost() const;

      void PrintItemCost() const;
      void PrintItemDescription() const;
};

#endif