#include <iostream>

using namespace std;

// TODO: Write a void function SelectionSortDescendTrace() that takes
//       an integer array and the number of elements in the array as arguments,
//       and sorts the array into descending order.
void SelectionSortDescendTrace(int numbers [], int numElements) {
   int start = 1;
   int temp;
   int largest;
   int pos = 0;
   for (int i = 0; i < numElements-1; i++){
      largest = numbers[i];
      pos = i;
      for (int j = start; j < numElements; j++){
         if (numbers[j] > largest){
            largest = numbers[j];
            pos = j;
         }
      }
      start++;
      numbers[pos] = numbers[i];
      numbers[i] = largest;
      for (int j = 0; j < numElements; j++){
         cout << numbers[j] << " ";
      }
      cout << endl;
   }
}


int main(int argc, char* argv[]) {
   int input, i = 0;
   int numElements = 0;
   int numbers [10];

   
   cin >> input;
   while (input != -1){
      numElements++;
      numbers[i++] = input;
      cin >> input;
   }
   

   SelectionSortDescendTrace(numbers, numElements);
   // TODO: Read in a list of up to 10 positive integers; stop when
   //       -1 is read. Then call SelectionSortDescendTrace() function.

  return 0;
}