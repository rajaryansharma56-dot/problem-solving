// Problem: Check whether a number is a palindrome
// Topic: Basic Problem Solving
// Language: C++
//
// Approach:
// Reverse the digits of the number and compare
// the reversed number with the original number.

#include<iostream>

using namespace std;

int main(){
    int n;
    int rev_num=0;
    int dup=n;

    while(n>0){
        int ld=n%10;
        rev_num=(rev_num*10)+ld;
        n=n/10;
    }
    if(dup==rev_num){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
