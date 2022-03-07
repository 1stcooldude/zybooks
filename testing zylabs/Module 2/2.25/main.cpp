#include <iostream>
using namespace std;

int main() {

   int userNum, x;
   
   cin >> userNum >> x;
   
   userNum /= x;
   cout << userNum << " ";
   userNum /= x;
   cout << userNum << " ";
   userNum /= x;
   cout << userNum << endl;

   return 0;
}
