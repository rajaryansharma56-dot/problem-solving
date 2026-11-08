
#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;

    cout << "Enter number of buildings: ";
    cin >> n;

    string name[n];
    float oldReading[n], newReading[n];
    float usage[n], bill[n];

    float totalUsage = 0;
    float totalBill = 0;

    int highest = 0;
    int warning = 0;

    for (int i = 0; i < n; i++) {

        cout << "\nEnter building name: ";
        cin >> name[i];

        cout << "Enter previous reading: ";
        cin >> oldReading[i];

        cout << "Enter current reading: ";
        cin >> newReading[i];

        if (newReading[i] < oldReading[i]) {
            cout << "Invalid reading!";
            return 0;
        }

        usage[i] = newReading[i] - oldReading[i];

        bill[i] = usage[i] * 8;

        totalUsage = totalUsage + usage[i];
        totalBill = totalBill + bill[i];

        if (usage[i] > oldReading[i] * 1.4) {
            warning++;
        }

        if (usage[i] > usage[highest] || i == 0) {
            highest = i;
        }
    }

    cout << "\n===== ENERGY REPORT =====\n";

    for (int i = 0; i < n; i++) {

        cout << "\nBuilding: " << name[i];

        cout << "\nEnergy Used: " << usage[i] << " kWh";

        cout << "\nBill: Rs. " << bill[i];

        if (usage[i] > oldReading[i] * 1.4) {
            cout << "\nStatus: HIGH CONSUMPTION";
        }
        else {
            cout << "\nStatus: NORMAL";
        }

        cout << "\n----------------------\n";
    }

    cout << "\n===== CAMPUS SUMMARY =====\n";

    cout << "Total Energy: " << totalUsage << " kWh";

    cout << "\nTotal Bill: Rs. " << totalBill;

    cout << "\nHighest Consumption: " << name[highest];

    cout << "\nBuildings with Warning: " << warning;

    return 0;
}
