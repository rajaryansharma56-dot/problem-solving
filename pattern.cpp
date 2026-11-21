// Problem: Print a pyramid pattern
// Topic: Nested Loops and Pattern Problems
// Language: C++
//
// Approach:
// Use nested loops to control the rows, spaces,
// and characters required to create the pyramid.

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // 1. Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        // 2. Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        
        // 3. Move to the next line
        cout << endl;
    }
}
