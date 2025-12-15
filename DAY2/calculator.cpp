#include <iostream>
using namespace std;

// Function prototypes
float add(int a, int b) { return a + b; }
float subtract(int a, int b) { return a - b; }
float multiply(int a, int b) { return a * b; }
float divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (float)a / b;
}

int main() {
    int choice, num1, num2;
    float result;

    do {
        // Menu
        cout << "\n--- Calculator Menu ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "Result = " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Result = " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Result = " << result << endl;
                break;
            case 4:
                result = divide(num1, num2);
                cout << "Result = " << result << endl;
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
