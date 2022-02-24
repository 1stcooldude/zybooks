#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

void PrintVector(vector<Plant*> myGarden){
   for (int i = 0; i < myGarden.size(); i++){
      myGarden.at(i)->PrintInfo();
      cout << endl;
   }
}

int main() {
   vector<Plant*> myGarden;

   string plantName, flowerName, colourOfFlowers, isAnnualString;
   int plantCost, flowerCost;
   bool isAnnual;

   Plant *myPlant;
   Flower *myFlower;

   string input;

   cin >> input;

  while(input != "-1") {
      if (input == "plant"){
         cin >> plantName >> plantCost;
         myPlant = new Plant();
         myPlant->SetPlantName(plantName);
         myPlant->SetPlantCost(plantCost);
         myGarden.push_back(myPlant);
      } else {
         cin >> flowerName >> flowerCost >> isAnnualString >> colourOfFlowers;
         if (isAnnualString == "true"){
            isAnnual = true;
         } else {
            isAnnual = false;
         }
         myFlower = new Flower();
         myFlower->SetPlantName(flowerName);
         myFlower->SetPlantCost(flowerCost);
         myFlower->SetPlantType(isAnnual);
         myFlower->SetColorOfFlowers(colourOfFlowers);
         myGarden.push_back(myFlower);
      }
      cin >> input;
  }

   PrintVector(myGarden);

   for (size_t i = 0; i < myGarden.size(); ++i) {
      delete myGarden.at(i);
   }
   
   return 0;
}