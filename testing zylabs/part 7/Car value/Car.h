#ifndef CARH
#define CARH

class Car {
   private:
      int modelYear;
      int purchasePrice;
      int currentValue;

   public:
      void SetModelYear(int userYear);

      int GetModelYear() const;

      void SetPurchasePrice(int userPrice);

      int GetPurchasePrice() const;

      void CalcCurrentValue(int currentYear);

      void PrintInfo() const;

     // TODO: Declare PrintInfo() method to output modelYear, purchasePrice, and
     // currentValue

};

#endif