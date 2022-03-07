#include <iostream>
using namespace std;

int main() {
   string firstName1, lastName1;
   string firstName2, lastName2;
   string firstName3, lastName3;
   
   cin >> firstName1;   cin >> lastName1;
   cin >> firstName2;   cin >> lastName2;
   cin >> firstName3;   cin >> lastName3;


   if (firstName1 == "none"){
      cout << "TBD" << endl;
   } else if (firstName2 == "none"){
      cout << firstName1.at(0) << ". " << lastName1 << endl;
   } else if (firstName3 == "none"){
      cout << lastName1 << " / " << lastName2 << endl;
   } else {
      cout << lastName1 << " / " << lastName2 << " / ..." << endl;
   }

   return 0;
}