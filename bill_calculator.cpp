#include <iostream>
using namespace std;

int main() {
    int units;
    int bill;

    cout << "Enter number of units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid input";
    }
    else {
        if (units <= 100) {
            bill = units * 5;
        }
        else if (units <= 200) {
            bill = 100 * 5 + (units - 100) * 7;
        }
        else {
            bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
        }

        cout << "Units consumed: " << units << endl;
        cout << "Electricity bill: Rs. " << bill << endl;
    }

    return 0;
}
