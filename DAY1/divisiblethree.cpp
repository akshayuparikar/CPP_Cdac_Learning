#include <iostream>
using namespace std;

int main() {
    int n;
        cout << "Enter a positive integer: ";
        
    cin >> n;
    cout << "Numbers divisible by 3 up to " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) cout << i << " ";
    }
    return 0;
}
