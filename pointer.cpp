// Problem: Basic pointer manipulation
// Topic: Pointers
// Language: C++
//
// Approach:
// Use pointers to access and modify the value
// stored at a memory address.

#include <stdio.h>
#include <stdlib.h> // Required for the abs() function

void update(int *a, int *b) {
    // Store original values before modification
    int original_a = *a;
    
    // Update 'a' to be the sum of both numbers
    *a = original_a + *b;
    
    // Update 'b' to be the absolute difference between both numbers
    *b = abs(original_a - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
