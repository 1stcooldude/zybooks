#include <iostream>
using namespace std;

int main() {
   int seconds;
   int minutes;
   int hours;

   cin >> seconds;

   minutes = seconds / 60;
   seconds %= 60;
   hours = minutes / 60;
   minutes %= 60;
   

   cout << "Hours: " << hours << endl;
   cout << "Minutes: " << minutes << endl;
   cout << "Seconds: " << seconds << endl;

   return 0;
}