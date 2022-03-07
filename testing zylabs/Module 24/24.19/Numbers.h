#ifndef NUMBERS_H
#define NUMBERS_H

#include <vector>
using namespace std;

class Numbers {
   public:
      void SetNums(vector<int> nums);
      vector<int> GetNums();
      int FindMax();
      void FillRandomly(int seed, int size);
   
   private:
      vector<int> nums;
};

#endif