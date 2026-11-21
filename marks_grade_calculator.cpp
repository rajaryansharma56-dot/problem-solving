#include <iostream>
using namespace std;

int main() {
    int marks;
    int total = 0;
    float average;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;

        if (marks < 0 || marks > 100) {
            cout << "Invalid marks!" << endl;
            return 0;
        }

        total += marks;
    }

    average = total / 5.0;

    cout << "Total marks: " << total << endl;
    cout << "Average: " << average << endl;

    if (average >= 90) {
        cout << "Grade: A";
    }
    else if (average >= 80) {
        cout << "Grade: B";
    }
    else if (average >= 70) {
        cout << "Grade: C";
    }
    else if (average >= 60) {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: F";
    }

    return 0;
}
