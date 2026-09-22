#include <iostream>
using namespace std;


int main() {
    int n;

    cout << "Enter number: " << endl;
    cin >> n;
    

    if (n >= 90 && n<= 100) {
        cout << "A";
    }
    else if (n >= 80 && n < 90) {
        cout << "B";
    }
    else if (n >= 70 && n < 80) {
        cout << "C";
    }
    else if (n >= 60 && n < 70) {
        cout << "D";
    }
    else if (n >= 50 && n < 60) {
        cout << "E";
    }
    else if (n >= 0 && n < 50) {
        cout << "F";
    }
    else {
        cout << "Invalid marks";
    }

    return 0;
}
