#include<iostream>

using namespace  std;


int main(){
    int n;
    cout<<"enter number :"<<endl;
    cin>>n;

    if (n%5==0 &&  n%11==0){
        cout<<" number divisible by 5 and  11  :"<<endl;

    }

    else if (n%5==0){
        cout<<"number divisble by 5 only : ";

    }

    else if(n%11==0){
        cout<<"number of divisible by 11 only :";

    }

    else{
        cout<<" neither divisible :";
    }

    return 0;

}
