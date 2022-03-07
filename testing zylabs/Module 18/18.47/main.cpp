#include <iostream>
using namespace std;

void CentsToDollarsCents(int orig, int &dollars, int &cents){
   dollars = orig / 100;
   cents = orig % 100;
}

int main() {

   int origCents;
   int dollars, cents;

   cin >> origCents;

   CentsToDollarsCents(origCents, dollars, cents);

   cout <<  dollars << " dollars " << cents << " cents" << endl;

   return 0;
}