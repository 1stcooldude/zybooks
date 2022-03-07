#include <iostream>
#include <vector>
using namespace std;

int main() {

   int numbers[4][3];

   for (int i = 0; i < 4; i++){
      for (int j = 0; j < 3; j++){
         cin >> numbers[i][j];
      }
   }

   for (int i = 3; i >= 0; i--){
      for (int j = 2; j >= 0; j--){
         cout << numbers[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}