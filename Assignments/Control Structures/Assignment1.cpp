#include <iostream>

using namespace std;

int main(){
    char character;

    cout << "Enter a character: ";
    cin >> character;

    cout << character << " is a ";
    switch (character) {
        case('a'):
        case('e'):
        case('i'):
        case('o'):
        case('u'):
            cout << "vowel" << endl;
            break;
        default:
            cout << "consonant" << endl;
    }

}

