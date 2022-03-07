#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;

   
   
   cin >> num1 >> num2 >> num3 >> num4;
   
   int product = num1 * num2 * num3 * num4;
   int average = (num1 + num2 + num3 + num4)/4;
   
   cout << product << " ";
   cout << average << endl;
   
   cout << fixed << setprecision(3);
   
   double product2 = static_cast<double>(num1) * num2 * num3 * num4;
   double average2 = (static_cast<double>(num1) + num2 + num3 + num4)/4.0;
   
   cout << product2 << " ";
   cout << average2 << endl;

   return 0;
}
