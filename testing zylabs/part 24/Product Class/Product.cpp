#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

Product::Product(string x, double y, int z){
   code = x;
   price = y;
   count = z;
}

void Product::AddInventory(int x){
   count += x;
}

void Product::SellInventory(int x){
   count -= x;
}

void Product::SetCode(string x) { code = x; }

string Product::GetCode() { return code; }

void Product::SetPrice(double x) { price = x; }

double Product::GetPrice() { return price; }

void Product::SetCount(int x) { count = x; }

int Product::GetCount() { return count; }

