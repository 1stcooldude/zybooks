#include <iostream>
#include <vector>

using namespace std;

int main(){
   const int SIZE = 20;
   vector<int> numbers(SIZE);
   int searchNumber;

   for (int i = 0; i < SIZE; i++){
      cin >> numbers.at(i);
   }

   cin >> searchNumber;
   
   bool found = false;
   int upper = SIZE-1;
   int lower = 0;
   while (!found){
      int mid = (upper-lower)/2 + lower;
      cout << "upper: " << upper << endl;
      cout << "lower: " << lower << endl;
      if (upper <= lower){
         cout << "Not found" << endl;
         break;
      }
      if (searchNumber == numbers.at(mid)){
         cout << "Found " << searchNumber << " at position " << mid << endl;
         break;
      } else if (searchNumber > numbers.at(mid)){
         lower = mid+1;
      } else {
         upper = mid-1;
      }
   }
}