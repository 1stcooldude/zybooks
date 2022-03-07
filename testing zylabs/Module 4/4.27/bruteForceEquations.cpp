#include <iostream>
using namespace std;

int main() {

   int x1, x2, y1, y2, c1, c2;
   bool isSolution = false;

   cin >> x1 >> y1 >> c1 >> x2 >> y2 >> c2;

   for (int i = -10; i <= 10; i++){
      for (int j = -10; j <= 10; j++){
         if (x1*i + y1*j == c1 && x2*i + y2*j == c2){
            isSolution = true;
            cout << "x = " << i << ", y = " << j << endl;
            break;
         }
      }
      if (isSolution){
         break;
      }
   }

   if (!isSolution){
      cout << "There is no solution" << endl;
   }

   return 0;
}
