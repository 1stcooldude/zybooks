#ifndef BANKACCOUNTH
#define BANKACCOUNTH

#include <string>
using namespace std;

class BankAccount {
   public:
      BankAccount(string name, double c, double s);
      void SetName(string name) { this->name = name; }
      string GetName() const { return name; }
      void SetChecking(double amount) { cBalance = amount; }
      double GetChecking() const { return cBalance; }
      void SetSavings(double amount) { sBalance = amount; }
      double GetSavings() const { return sBalance; }
      void DepositChecking(double amount);
      void DepositSavings(double amount);
      void WithdrawChecking(double amount);
      void WithdrawSavings(double amount);
      void TransferToSavings(double amount);
   
   private:
      string name;
      double sBalance;
      double cBalance;
};

#endif