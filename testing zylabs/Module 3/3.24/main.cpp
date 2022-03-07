#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   
   cin >> inputMonth;
   cin >> inputDay;
   
   if ((inputMonth == "April" && inputDay <= 30 && inputDay >= 1) || (inputMonth == "May" && inputDay <= 31 && inputDay >= 1) || (inputMonth == "March" && inputDay >= 20 && inputDay <= 31) || (inputMonth == "June" && inputDay <= 20 && inputDay >= 1)){
      cout << "Spring" << endl;
   } else if ((inputMonth == "July" && inputDay <= 31 && inputDay >= 1) || (inputMonth == "August" && inputDay <= 31 && inputDay >= 1) || (inputMonth == "June" && inputDay >= 21 && inputDay <= 30) || (inputMonth == "September" && inputDay <= 21 && inputDay >= 1)){
      cout << "Summer" << endl;
   } else if ((inputMonth == "October" && inputDay <= 31 && inputDay >= 1) || (inputMonth == "November" && inputDay <= 30 && inputDay >= 1) || (inputMonth == "September" && inputDay >= 22 && inputDay <= 30) || (inputMonth == "December" && inputDay <= 20 && inputDay >= 1)){
      cout << "Autumn" << endl;
   } else if ((inputMonth == "Januaray" && inputDay <= 31 && inputDay >=1) || (inputMonth == "February" && inputDay <= 28 && inputDay >= 1) || (inputMonth == "December" && inputDay >= 21 && inputDay <= 31) || (inputMonth == "March" && inputDay <= 19 && inputDay >= 1)){
      cout << "Winter" << endl;
   } else {
      cout << "Invalid" << endl;
   }

   return 0;
}