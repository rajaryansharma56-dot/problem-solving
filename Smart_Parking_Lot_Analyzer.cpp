
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter number of slots: ";
    cin >> n;

    vector<int> parking(n);

    cout << "Enter parking status: ";

    for(int i = 0; i < n; i++) {
        cin >> parking[i];
    }

    int occupied = 0;
    int empty = 0;
    int count = 0;
    int longest = 0;
    int first = -1;

    for(int i = 0; i < n; i++) {

        if(parking[i] == 1) {
            occupied++;
            count = 0;
        }

        else {
            empty++;
            count++;

            if(first == -1) {
                first = i + 1;
            }

            if(count > longest) {
                longest = count;
            }
        }
    }

    cout << "\nTotal slots: " << n;
    cout << "\nOccupied slots: " << occupied;
    cout << "\nEmpty slots: " << empty;
    cout << "\nLongest empty sequence: " << longest;
    cout << "\nFirst available slot: " << first;

    cout << "\nOccupancy: " << (occupied * 100.0 / n) << "%";

    return 0;
}
