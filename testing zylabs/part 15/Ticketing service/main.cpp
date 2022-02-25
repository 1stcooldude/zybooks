#include <queue>
#include <iostream>

using namespace std;

int main () {
   string personName = "";
   int counter = 0;
   int youPosition;

   queue<string> peopleInQueue;

   getline(cin, personName);
   while (personName != "-1") {
      peopleInQueue.push(personName);
      if (personName == "You"){
         youPosition = peopleInQueue.size();
      }
      // TODO: Add personName to peopleInQueue
      //       determine position of "You" (youPosition)

      getline(cin, personName);
   }

   cout << "Welcome to the ticketing service... " << endl;
   cout << "You are number " << youPosition << " in the queue." << endl;

   for (int i = youPosition-1; i >= 0; i--){
      if (peopleInQueue.front() == "You"){
         cout << "You can now purchase your ticket!" << endl;
         break;
      }
      cout << peopleInQueue.front() << " has purchased a ticket." << endl;
      cout << "You are now number " << i << endl;
      peopleInQueue.pop();
   }
   // TODO: In a loop, remove head person from peopleInQueue,
   //       output their name and that they have purchased a ticket,
   //       then output your position in the queue. When you are at
   //       the head, output that you can purchase your ticket.


   return 0;
}