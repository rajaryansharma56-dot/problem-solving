#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int totalSum = 0;

    for (int i = 1; i <= n; i++) {
        totalSum += i;
    }

    cout << "The sum of the first " << n
         << " numbers is: " << totalSum << endl;

    return 0;
}
