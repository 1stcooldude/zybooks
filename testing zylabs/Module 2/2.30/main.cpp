#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;
   long long first, second, third;

   cin >> phoneNumber;
   
   first = phoneNumber / 10000000;
   third = phoneNumber % 10000;
   second = (phoneNumber / 10000) % 1000;
   
   cout << "(" << first << ") " << second << "-" << third << endl;
   
   return 0;
}
