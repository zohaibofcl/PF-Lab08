#include <iostream>
using namespace std;
int main() {
    char ch;
    
    cout << "Enter a single alphabet character: ";
    cin >> ch;
    
    ch = tolower(ch);
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a vowel" << endl;
            break;
        default:
            // Check if the character is a valid alphabet character
            if ((ch >= 'a' && ch <= 'z'))
                cout << ch << " is a consonant" << endl;
            else
                cout << "Invalid input! Please enter a single alphabet character." << endl;
    }

    return 0;
}
