#include <iostream>
#include <cmath>                   
#include <iomanip>                 
using namespace std;

int main() {
   double wallHeight;
   double wallWidth;
   double wallArea;

   
   cout << fixed << setprecision(2);
   
   cout << "Enter wall height (feet):" << endl;
   cin  >> wallHeight;
   
   cout << "Enter wall width (feet):" << endl;
   cin  >> wallWidth;
   

   wallArea = wallHeight * wallWidth;                 
   cout << "Wall area: " << wallArea << " square feet" << endl;  
   
   
   const double paint = wallArea / 350;
   
   cout << "Paint needed: " << paint << " gallons" << endl;
   
   int cans = ceil(paint);
   
   cout << "Cans needed: " << cans << " can(s)" << endl;

   

   return 0;
}