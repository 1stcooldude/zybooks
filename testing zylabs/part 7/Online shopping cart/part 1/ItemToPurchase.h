#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase{
   private:
      string itemName;
      int itemPrice;
      int itemQuantity;

   public:
      ItemToPurchase();
      void SetName(string itemName);
      string GetName() const;
      void SetPrice(int itemPrice);
      int GetPrice() const;
      void SetQuantity(int itemQuantity);
      int GetQuantity() const;
};

#endif