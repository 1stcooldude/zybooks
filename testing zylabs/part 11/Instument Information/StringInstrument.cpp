#include "StringInstrument.h"

void StringInstrument::SetNumOfStrings(string numStrings){
   this->numStrings = numStrings;
}

void StringInstrument::SetNumOfFrets(string numFrets){
   this->numFrets = numFrets;
}

string StringInstrument::GetNumOfStrings(){
   return numStrings;
}

string StringInstrument::GetNumOfFrets(){
   return numFrets;
}