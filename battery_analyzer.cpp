
#include <iostream>
using namespace std;

int main() {
    float voltage;
    string status;

    cout << "Enter battery voltage: ";
    cin >> voltage;

    if (voltage < 0) {
        cout << "Invalid voltage";
    }
    else if (voltage < 3.0) {
        status = "Low Battery";
        cout << "Battery status: " << status;
    }
    else if (voltage <= 4.2) {
        status = "Normal Battery";
        cout << "Battery status: " << status;
    }
    else {
        status = "Overvoltage Warning";
        cout << "Battery status: " << status;
    }

    return 0;
}
