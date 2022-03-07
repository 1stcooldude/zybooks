#include <iostream>
using namespace std;

int main() {
   int seconds;
   int minutes;
   int hours;

   cin >> hours >> minutes >> seconds;

   seconds += hours * 3600 + minutes * 60;

   cout << "Seconds: " << seconds << endl;

   return 0;
}
