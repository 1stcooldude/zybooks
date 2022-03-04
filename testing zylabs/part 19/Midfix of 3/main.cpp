#include <iostream>
#include <string>
using namespace std;

int main() {

   string s;
   string result;

   cin >> s;

   result = s.substr((s.size()/2)-1, 3);

   cout << "Midfix: " << result << endl;

   return 0;
}