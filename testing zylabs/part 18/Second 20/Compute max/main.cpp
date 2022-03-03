#include <iostream>
#include <vector>
using namespace std;

int MaxFive(int a, int b, int c, int d, int e){
   vector<int> nums;
   nums.push_back(b);
   nums.push_back(c);
   nums.push_back(d);
   nums.push_back(e);
   int max = a;
   for (int i = 0; i < 4; i++){
      if (nums.at(i) > max){
         max = nums.at(i);
      }
   }
   return max;
}

int main() {
   // Don't modify main's code below
   int v, w, x, y, z;
   int maxVal;
   
   cin >> v; cin >> w; cin >> x; cin >> y; cin >> z;
   maxVal = MaxFive(v, w, x, y, z);
   cout << maxVal << endl;

   return 0;
}