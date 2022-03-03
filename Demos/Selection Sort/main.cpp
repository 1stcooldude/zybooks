#include <iostream>
#include <vector>

using namespace std;

int main(){

   const int SIZE = 10;
   vector<int> numbers(SIZE);

   for (int i = 0; i < SIZE; i++){
      cin >> numbers.at(i);
   }

   int temp;
   int min, pos;
   for (int i = 0; i < SIZE; i++){
      min = numbers.at(i);
      pos = i;
      for (int j = i+1; j < SIZE; j++){
         if (numbers.at(j) < min){
            min = numbers.at(j);
            pos = j;
         }
      }
      temp = numbers.at(pos);
      numbers.at(pos) = numbers.at(i);
      numbers.at(i) = temp;
      for (int k = 0; k < SIZE; k++){
         cout << numbers.at(k) << " ";
      }
      cout << endl;
   }
}