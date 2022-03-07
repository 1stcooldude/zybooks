#include <iostream>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount(string name, double c, double s){
   this->name = name;
   cBalance = c;
   sBalance = s;
}

void BankAccount::DepositChecking(double amount){
   if (amount > 0){
      cBalance += amount;
   }
}

void BankAccount::DepositSavings(double amount){
   if (amount > 0){
      sBalance += amount;
   }
}

void BankAccount::WithdrawChecking(double amount){
   if (amount > 0){
      cBalance -= amount;
   }
}

void BankAccount::WithdrawSavings(double amount){
   if (amount > 0){
      sBalance -= amount;
   }
}

void BankAccount::TransferToSavings(double amount){
   if (amount > 0){
      sBalance += amount;
      cBalance -= amount;
   }
}
