#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	string result;

	cin >> s;

   result = s.substr(s.size()-3, 3);

   cout << "Postfix: " << result << endl;
	
	return 0;
}