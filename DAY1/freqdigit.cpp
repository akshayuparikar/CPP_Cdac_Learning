#include <iostream>
using namespace std;

int main() {
    long long num;
    cin >> num;
    int freq[10] = {0};
    while (num != 0) {
        int d = num % 10;
        freq[d]++;
        num /= 10;
    }
    cout << "Digit frequencies:\n";
    for (int i = 0; i < 10; i++) {
        cout << i << " occurs " << freq[i] << " times\n";
    }
    return 0;
}
