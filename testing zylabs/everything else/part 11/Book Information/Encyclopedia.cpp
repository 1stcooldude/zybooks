#include "Encyclopedia.h"
#include <iostream>

void Encyclopedia::SetEdition(string edition){
   this->edition = edition;
}

void Encyclopedia::SetNumVolumes(int numVolumes){
   this->numVolumes = numVolumes;
}

string Encyclopedia::GetEdition() const{
   return edition;
}

int Encyclopedia::GetNumVolumes() const{
   return numVolumes;
}


void Encyclopedia::PrintInfo(){
   Book::PrintInfo();
   cout << "   Edition: " << edition << endl;
   cout << "   Number of Volumes: " << numVolumes << endl;
}