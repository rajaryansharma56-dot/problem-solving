
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array:"<<endl;
    cin>>size;

    int num[size];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    int palindrome=1;
    int i=0;
    int j=size-1;

    while(i<j){
        if(num[i]!=num[j]){
            palindrome=0;
            break;
        }

        i++;
        j--;
    }

    if(palindrome==1){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}array_palindrome_checker.cpparray_palindrome_checker.cpp
