#include <iostream>
using namespace std;
int main() {
    double balance = 0.0; 
    int option;           
    double amount;        
    do {
        // Display the menu options
        cout << "\n--- Simple Bank Transaction System ---" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option (1-4): ";
        cin >> option;

        switch (option) {
            case 1: // Deposit
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully. New balance: $" << balance << endl;
                } else {
                    cout << "Invalid deposit amount. Please enter a positive value." << endl;
                }
                break;

            case 2: // Withdraw
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (amount > 0) {
                    if (amount <= balance) {
                        balance -= amount;
                        cout << "Amount withdrawn successfully. New balance: $" << balance << endl;
                    } else {
                        cout << "Insufficient balance! Current balance: $" << balance << endl;
                    }
                } else {
                    cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
                }
                break;

            case 3: // Check Balance
                cout << "Current balance: $" << balance << endl;
                break;

            case 4: // Exit
                cout << "Thank you for using the bank system. Goodbye!" << endl;
                break;

            default: // Handle invalid menu options
                cout << "Invalid option! Please choose a valid option (1-4)." << endl;
        }
    } while (option != 4); // Continue until the user chooses to exit

    return 0;
}
