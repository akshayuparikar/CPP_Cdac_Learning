#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0, i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum;
    return 0;
}
