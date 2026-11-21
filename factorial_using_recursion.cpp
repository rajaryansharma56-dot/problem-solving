#include<iostream>

using namespace std;

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }

}

int main(){
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;

    if(n<0){
        cout<<"invalid input ,enter a non-negative integer"<<endl;

    }
    else{
        cout<<"factorial is :"<<fact(n)<<endl;
    }

    return 0;
}
