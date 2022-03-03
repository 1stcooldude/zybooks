#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> numbers, int searchNumber){
   bool found = false;
   int upper = numbers.size()-1;
   int lower = 0;
   while (!found){
      int mid = (upper-lower)/2 + lower;
      if (upper <= lower){
         return -1;
         break;
      }
      if (searchNumber == numbers.at(mid)){
         return mid;
         break;
      } else if (searchNumber > numbers.at(mid)){
         lower = mid+1;
      } else {
         upper = mid-1;
      }
   }
}

vector<int> bubbleSort(vector<int> numbers){
   bool swap = true;
   int temp;
   while (swap){
      swap = false;
      for (int j = 0; j < numbers.size()-1; j++){
         if (numbers.at(j) > numbers.at(j+1)){
            temp = numbers.at(j);
            numbers.at(j) = numbers.at(j+1);
            numbers.at(j+1) = temp;
            swap = true;
         }
      }
      for (int k = 0; k < numbers.size(); k++){
         cout << numbers.at(k) << " ";
      }
      cout << endl;
   }
   return numbers;
}

vector<int> selectionSort(vector<int> numbers){
   int temp;
   int min, pos;
   for (int i = 0; i < numbers.size(); i++){
      min = numbers.at(i);
      pos = i;
      for (int j = i+1; j < numbers.size(); j++){
         if (numbers.at(j) < min){
            min = numbers.at(j);
            pos = j;
         }
      }
      temp = numbers.at(pos);
      numbers.at(pos) = numbers.at(i);
      numbers.at(i) = temp;
      for (int k = 0; k < numbers.size(); k++){
         cout << numbers.at(k) << " ";
      }
      cout << endl;
   }
   return numbers;
}

int main(){
   const int SIZE = 20;
   vector<int> numbers(SIZE);
   int searchNumber;
   vector<int> bubbleSorted;
   vector<int> selectionSorted;

   for (int i = 0; i < SIZE; i++){
      cin >> numbers.at(i);
   }

   cin >> searchNumber;

   cout << "Bubble sort:" << endl;
   bubbleSorted = bubbleSort(numbers);
   cout << endl;
   
   cout << "Selection sort:" << endl;
   selectionSorted = selectionSort(numbers);
   cout << endl;

   int found = binarySearch(bubbleSorted, searchNumber);
   if (found != -1){
      cout << searchNumber << " found at pos " << numbers.at(found) << endl;
   } else {
      cout << "Not found" << endl;
   }
   
   
   
}