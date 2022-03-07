#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;

   if (highwayNumber <= 99 && highwayNumber >= 1){
      if (highwayNumber % 2 == 0){
         cout << "I-" << highwayNumber << " is primary, going east/west." << endl;
      } else {
         cout << "I-" << highwayNumber << " is primary, going north/south." << endl;
      }
   } else if (highwayNumber <= 999 && highwayNumber % 100 != 0){
      if (highwayNumber % 2 == 0){
         cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayNumber % 100 << ", going east/west." << endl;
      } else {
         cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayNumber % 100 << ", going north/south." << endl;
      }
   } else {
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }



   return 0;
}
