#include <iostream>
#include <ctime>
#include "RandomNumbers.h"
using namespace std;

void RandomNumbers::SetRandomValues(int x, int y){
   srand(time(0)); 
   var1 = rand() % (y-x+1) + x;
   var2 = rand() % (y-x+1) + x;
   var3 = rand() % (y-x+1) + x;
}

void RandomNumbers::GetRandomValues(){
   cout << "Random values: " << var1 << " " << var2 << " " << var3 << endl;
}

int RandomNumbers::GetVar1(){
   return var1;
}

int RandomNumbers::GetVar2(){
   return var2;
}

int RandomNumbers::GetVar3(){
   return var3;   
}
