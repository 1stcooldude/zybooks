#ifndef GVCOIN_H_
#define GVCOIN_H_

#include <iostream>
using namespace std;

class GVcoin {
   public:
		GVcoin(int seed);
		void Flip();
		int NumFlips();
		int NumHeads();
		bool IsHeads();
		void SetSeed(int seed);

   private:
		bool isHeads;
      int flips;
      int heads;
};

#endif /* GVCOIN_H_ */