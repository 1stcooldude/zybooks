#include "ItemToPurchase.h"
#include <vector>

class ShoppingCart{
   private:
      string customerName;
      string currentDate;
      vector<ItemToPurchase> cartItems;

   public:
      ShoppingCart();
      ShoppingCart(string customerName, string currentDate);

      string GetCustomerName() const;
      string GetDate() const;

      void AddItem(ItemToPurchase item);
      void RemoveItem(string item);
      void ModifyItem(ItemToPurchase item);

      int GetNumItemsInCart() const;
      int GetCostOfCart() const;

      void PrintTotal() const;
      void PrintDescriptions() const;



};