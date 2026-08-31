#include <iostream>
#include <algorithm> // Needed for std::max
using namespace std;

// Function to return the greatest of four integers
int max_of_four(int a, int b, int c, int d) {
    return max({a, b, c, d});
}

int main() {
    int a, b, c, d;
    // Read the four integers
    cin >> a >> b >> c >> d;
    
    // Call the function and print the result
    int ans = max_of_four(a, b, c, d);
    cout << ans << endl;
    
    return 0;
}
