#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    long long result = 1;
    for (int i = 1; i <= b; i++) {
        result *= a;
    }
    cout << a << "^" << b << " = " << result;
    return 0;
}
