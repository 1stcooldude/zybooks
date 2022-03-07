#include <iostream>
#include <vector>
using namespace std;


// All x, y coordinates are in miles from the origin 0, 0. 
int PickupMinutes(int userX, int userY, int d1X, int d1Y, int d2X, int d2Y, int d3X, int d3Y) {
   vector<int> nums;
   nums.push_back((abs(d1Y-userY)+abs(d1X-userX)) * 2);
   nums.push_back((abs(d2Y-userY)+abs(d2X-userX)) * 2);
   nums.push_back((abs(d3Y-userY)+abs(d3X-userX)) * 2);

   int min = nums.at(0);
   for (int num : nums){
      if (num < min){
         min = num;
      }
   }

   return min;
}


int main() {
   int userX, userY;
   int d1X, d1Y;
   int d2X, d2Y;
   int d3X, d3Y;
   
   cin >> userX; 
   cin >> userY;
   cin >> d1X;
   cin >> d1Y;
   cin >> d2X;
   cin >> d2Y;
   cin >> d3X;
   cin >> d3Y;
   
   cout << PickupMinutes(userX, userY, d1X, d1Y, d2X, d2Y, d3X, d3Y) << endl;
   
   return 0;
}

