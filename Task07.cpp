#include <iostream>
using namespace std;
int main() {
    int month;
    cout << "Enter a month (1-12): ";
    cin >> month;

    switch (month) {
        case 12: // December
        case 1:  // January
        case 2:  // February
            cout << "Winter" << endl;
            break;
        case 3:  // March
        case 4:  // April
        case 5:  // May
            cout << "Spring" << endl;
            break;
        case 6:  // June
        case 7:  // July
        case 8:  // August
            cout << "Summer" << endl;
            break;
        case 9:  // September
        case 10: // October
        case 11: // November
            cout << "Autumn" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 12." << endl;
    }

    return 0;
}
