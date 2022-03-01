#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"

class StringInstrument : public Instrument {
   private:
      string numStrings;
      string numFrets;

   public:
      void SetNumOfStrings(string numStrings);
      void SetNumOfFrets(string numFrets);

      string GetNumOfStrings();
      string GetNumOfFrets();


};

#endif
