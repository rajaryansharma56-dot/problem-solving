// Problem: Print number patterns using nested loops
// Topic: Nested Loops and Pattern Problems
// Language: C++
//
// Approach:
// Use nested loops to control rows and columns
// and generate the required number pattern.

#include<iostream>

using namespace  std;

int main(){
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

