// Problem: Print a triangle pattern
// Topic: Nested Loops and Pattern Problems
// Language: C++
//
// Approach:
// Use nested loops to control the rows and
// columns and print the required triangle pattern.

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" *";

        }
        cout<<endl;

    }
    return 0;
    
}
