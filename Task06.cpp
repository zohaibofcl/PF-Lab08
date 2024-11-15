#include <iostream>
using namespace std;
int main() {
    char color;
    cout << "Enter a traffic light color (R, G, Y): ";
    cin >> color;
    // Convert input to uppercase to handle lowercase entries
    color = toupper(color);

    switch (color) {
        case 'R':
            cout << "Stop" << endl;
            break;
        case 'G':
            cout << "Go" << endl;
            break;
        case 'Y':
            cout << "Slow down" << endl;
            break;
        default:
            cout << "Invalid input! Please enter R, G, or Y." << endl;
    }

    return 0;
}
