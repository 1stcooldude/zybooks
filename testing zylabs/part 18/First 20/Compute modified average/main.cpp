#include <iostream>
using namespace std;

int main() {

   int temp;
   int total = 0;
   int sum = 0;
   int invalid = 0;
   double average;

   cin >> temp;
   while (temp != 0){
      if (temp < 2 || temp > 12){
         invalid++;
         cin >> temp;
         continue;
      }
      total++;
      sum += temp;
      cin >> temp;
   }

   if (total == 0){
      average = 0;
   } else {
      average = static_cast<double>(sum)/total;
   }
   cout << "Average: " << average << endl;
   cout << "Valid: " << total << endl;
   cout << "Invalid: "<< invalid << endl;

   return 0;
}