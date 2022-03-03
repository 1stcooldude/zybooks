#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Ascend3(int& x, int& y, int& z){
   vector<int> nums;
   nums.push_back(x);
   nums.push_back(y);
   nums.push_back(z);
   sort(nums.begin(), nums.end());

   x = nums.at(0);
   y = nums.at(1);
   z = nums.at(2);
}

int main() {
   
   int x, y, z;
   
   cin >> x; 
   cin >> y;
   cin >> z;
   
   Ascend3(x, y, z);
   
   cout << x << " " << y << " " << z << endl;


   return 0;
}