#include <iostream>
using namespace std;

int main() {
    long long num;
    cin >> num;
    int even = 0, odd = 0;
    while (num != 0) {
        int d = num % 10;
        if (d % 2 == 0) even++;
        else odd++;
        num /= 10;
    }
    cout << "Even digits = " << even << ", Odd digits = " << odd;
    return 0;
}
