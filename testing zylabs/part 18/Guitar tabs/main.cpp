#include <iostream>
using namespace std;

int main() {
   string userChord;
   char e = '0';
   char B = '0';
   char G = '0';
   char D = '0';
   char A = '0';
   char E = '0';
   
   cin >> userChord;

   if (userChord == "G"){
      e = '3';
      A = '2';
      E = '3'; 
   } else if (userChord == "C"){
      B = '1';
      D = '2';
      A = '3';
      E = '-';
   } else if (userChord == "D"){
      e = '2';
      B = '3';
      G = '2';
      A = '-';
      E = '-';
   } 
   
   if (E == '0'){
      cout << userChord << " is not a supported chord." << endl;
   } else {
      cout << "e|-" << e << "-" << endl;
      cout << "B|-" << B << "-" << endl;
      cout << "G|-" << G << "-" << endl;
      cout << "D|-" << D << "-" << endl;
      cout << "A|-" << A << "-" << endl;
      cout << "E|-" << E << "-" << endl;
   }

   return 0;
}