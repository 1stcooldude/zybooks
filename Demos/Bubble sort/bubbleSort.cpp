#include <iostream>
#include <vector>

using namespace std;

int main(){

   const int SIZE = 10;
   vector<int> numbers(SIZE);

   for (int i = 0; i < SIZE; i++){
      cin >> numbers.at(i);
   }

   bool swap = true;
   int temp;
   while (swap){
      swap = false;
      for (int j = 0; j < SIZE-1; j++){
         if (numbers.at(j) > numbers.at(j+1)){
            temp = numbers.at(j);
            numbers.at(j) = numbers.at(j+1);
            numbers.at(j+1) = temp;
            swap = true;
         }
      }
      for (int k = 0; k < SIZE; k++){
         cout << numbers.at(k) << " ";
      }
      cout << endl;
   }
}