#include <iostream>

using namespace std;

int main(){
    int factorial;
    int total = 1;

    cout << "Enter factorial number: ";
    cin >> factorial;

    for (int i = 1; i <= factorial; i++){
        total *= i;
    }

    cout << factorial << "! is " << total << endl;
}
