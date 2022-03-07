#include <iostream>
#include <string>
using namespace std;

int main() {
	string login;
	string first;
	string last;
	string number;

	cin >> first >> last >> number;
	
	login = last.substr(0,5) + first.at(0) + number.substr(2,2);
	
	cout << "Your login name: " << login << endl;
	
	return 0;
}