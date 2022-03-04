#include <iostream>
#include <string>
using namespace std;

int main() {
	int par;
	int strokes;
	string name;

	cin >> par >> strokes;

   if (par < 3 || par > 5){
      cout << "Error" << endl;
   } else {
      strokes -= par;
      switch (strokes){
         case (-2):
            cout << "Eagle" << endl;
            break;
         case (-1):
            cout << "Birdie" << endl;
            break;
         case (0):
            cout << "Par" << endl;
            break;
         case (1):
            cout << "Bogey" << endl;
            break;
      }
   }

	return 0;
}