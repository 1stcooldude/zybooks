#include <iostream>
using namespace std;

int Convert(double x){
   return static_cast<int>(x);
}

int main() {
	cout << Convert(19.9) << endl;
	cout << Convert(3.1) << endl;

	return 0;
}