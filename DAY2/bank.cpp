//10.Use functions for:checkBalance(),deposit(),withdraw(),miniStatement()
//Main function should show a menu and call these functions.

#include <iostream>

using namespace std;
double balance = 0.0;
void checkBalance() {
    cout << "Your current balance is: $" << balance << endl;
}
void deposit() {
    double amount;
    cout << "Enter amount to deposit: $";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    } else {
        cout << "Invalid amount!" << endl;
    }
}
void withdraw() {
    double amount;
    cout << "Enter amount to withdraw: $";
    cin >> amount;
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrew: $" << amount << endl;
    } else {
        cout << "Invalid amount or insufficient balance!" << endl;
    }
}
void miniStatement() {
    cout << "Mini Statement: " << endl;
    cout << "Current Balance: $" << balance << endl;
}
int main() {
    int choice;
    do {
        cout << "\n--- Bank Menu ---" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Mini Statement" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                miniStatement();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
