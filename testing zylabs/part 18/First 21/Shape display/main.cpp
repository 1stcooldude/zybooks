#include <iostream>
using namespace std;

int main() {

   string shape;
   
   cin >> shape;

   if (shape == "triangle"){
      cout << "  *" << endl;
      cout << " * *" << endl;
      cout << "*****" << endl;
   } else if (shape == "square"){
      cout << "***" << endl;
      cout << "* *" << endl;
      cout << "***" << endl;
   }

   return 0;
}