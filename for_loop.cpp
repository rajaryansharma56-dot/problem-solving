// Problem: Number to word mapping using a for loop
// Topic: Loops and Basic Problem Solving
// Language: C++
//
// Approach:
// Use a for loop to process the input and
// display the corresponding number/word.

#include <iostream>

#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    // Array to easily map numbers 1-9 to their English word representations
    string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << numbers[i] << endl;
        } else if (i > 9 && i % 2 == 0) {
            cout << "even" << endl;
        } else if (i > 9 && i % 2 != 0) {
            cout << "odd" << endl;
        }
    }
    
    return 0;
}
