#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   double age, weight, heartRate, minutes;
   double men, women;
   
   cin >> age >> weight >> heartRate >> minutes;
   
   women = ((age * 0.074) - (weight * 0.05741) + (heartRate * 0.4472) - 20.4022) * minutes / 4.184;
   men = ((age * 0.2017) + (weight * 0.09036) + (heartRate * 0.6309) - 55.0969) * minutes / 4.184;

   cout << fixed << setprecision(2);
   cout << "Women: " << women << " calories" << endl;
   cout << "Men: " << men << " calories" << endl;

   return 0;
}
