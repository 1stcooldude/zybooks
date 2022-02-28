#include <stdio.h>
#include <iostream>

using namespace std;

int i;

void increment( int i ){
   i++;
}

int main(){
   cout << i << endl;
   increment(i);
   cout << i << endl;
   /*for (i = 0; i < 10; increment(i)){
      cout << "hI " << i << endl;
   }*/
   printf("i=%d\n", i);

}