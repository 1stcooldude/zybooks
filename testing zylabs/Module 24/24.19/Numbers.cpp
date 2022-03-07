#include <iostream>
#include <cstdlib>
#include "Numbers.h"
using namespace std;

void Numbers::SetNums(vector<int> nums) {
   this->nums = nums;
}

vector<int> Numbers::GetNums() {
   return nums;
}

int Numbers::FindMax() {
   int max = nums.at(0);
   for (int i : nums){
      if (i > max){
         max = i;
      }
   }
   return max;
}

// Fill vector nums with pseudo-random integers (0-999) with a seed value   
void Numbers::FillRandomly(int seed, int size) {
   srand(seed);
   for(int i = 0; i < size; ++i){
      nums.push_back(rand() % 1000);
   }
   
}