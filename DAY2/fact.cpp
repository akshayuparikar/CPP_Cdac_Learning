#include <iostream>
using namespace std;

int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result; 
}

int main() {
    int n;
    cout << "Enter Number to find factorial: ";
    cin >> n;

    int factorial = fact(n);
    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
