#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;
    int temp = num, sum = 0;
    int digits = 0, t = num;
    while (t != 0) { digits++; t /= 10; }
    while (temp != 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    if (sum == num) cout << num << " is an Armstrong number";
    else cout << num << " is not an Armstrong number";
    return 0;
}
