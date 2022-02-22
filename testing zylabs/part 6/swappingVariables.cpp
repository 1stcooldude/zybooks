#include <iostream>
using namespace std;

void SwapValues(int& userVal1, int& userVal2);

int main() {
   int userVal1, userVal2;

   cin >> userVal1 >> userVal2;

   SwapValues(userVal1, userVal2);

   cout << userVal1 << " " << userVal2 << endl;

   return 0;
}

void SwapValues(int& userVal1, int& userVal2){
   int temp = userVal1;
   userVal1 = userVal2;
   userVal2 = temp;
}