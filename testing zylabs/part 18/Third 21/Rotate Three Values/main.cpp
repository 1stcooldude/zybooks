#include <iostream>
using namespace std;

void RotateRight3(int &n1, int &n2, int &n3){
   int temp = n2;
   n2 = n1;
   n1 = n3;
   n3 = temp;
}



int main() {
   int n1, n2, n3;
   
   cin >> n1; 
   cin >> n2;
   cin >> n3;
   
   RotateRight3(n1, n2, n3);
   
   cout << n1 << " " << n2 << " " << n3 << endl;
   
   return 0;
}