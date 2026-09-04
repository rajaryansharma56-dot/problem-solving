#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Quick escape for numbers less than 2 (0, 1, and negative numbers are not prime)
    if (n < 2) {
        cout << "false" << endl;
        return 0;
    }

    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if ((n / i) != i) {
                cnt++;
            }
        }
    }

    // A prime number has exactly 2 divisors (1 and itself)
    if (cnt == 2) {
        cout << "true" << endl; // Removed the trailing semicolon inside quotes
    } else {
        cout << "false" << endl;
    }

    return 0;
}
