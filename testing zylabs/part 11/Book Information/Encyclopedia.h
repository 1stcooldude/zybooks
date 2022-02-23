#ifndef ENCYCLOPEDIAH
#define ENCYCLOPEDIAH

#include "Book.h"

class Encyclopedia : public Book {
   private:
      string edition;
      int numVolumes;

   public:
      void SetEdition(string edition);
      void SetNumVolumes(int numVolumes);

      string GetEdition() const;
      int GetNumVolumes() const;

      void PrintInfo();


};

#endif