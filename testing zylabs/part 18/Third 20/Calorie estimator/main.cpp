#include <iostream>
using namespace std;

double ActivityCalories(string x, int y){
   double caloriesPerMinute;
   if (x == "sit"){
      caloriesPerMinute = 1.4;
   } else if (x == "walk"){
      caloriesPerMinute = 5.4;
   } else if (x == "run"){
      caloriesPerMinute = 13.0;
   } else if (x == "bike"){
      caloriesPerMinute = 6.8;
   } else if (x == "swim"){
      caloriesPerMinute = 8.7;
   }
   return caloriesPerMinute*y;
}

int main() {
   int userMinutes;
   string userActivity; 
   
   cin >> userActivity;
   cin >> userMinutes;
   
   cout << ActivityCalories(userActivity, userMinutes) << endl;
   
   return 0;
}