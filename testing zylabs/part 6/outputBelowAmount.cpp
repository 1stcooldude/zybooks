#include <iostream>
#include <vector> 
using namespace std;

vector<int> GetUserValues(vector<int>& userValues, int numValues);
void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold);

int main() {
   vector<int> userValues; 
   int upperThreshold;
   int numValues;
   
   cin >> numValues;
   userValues = GetUserValues(userValues, numValues);

   cin >> upperThreshold;
   OutputIntsLessThanOrEqualToThreshold(userValues, upperThreshold);

   return 0;
}

vector<int> GetUserValues(vector<int>& userValues, int numValues){
   vector<int> newVector;
   int temp;
   for (int i = 0; i < numValues; i++){
      cin >> temp;
      newVector.push_back(temp);
   }
   return newVector;
}

void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold){
   for (int i= 0; i < userValues.size(); i++){
      if (userValues.at(i) <= upperThreshold){
         cout << userValues.at(i) << " ";
      }
   }
   cout << endl;
}