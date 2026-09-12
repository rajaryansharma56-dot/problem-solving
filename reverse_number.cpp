#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter a number :"<<endl;
      cin>>n;

    int rev_num=0;
    

    while(n>0){
        rev_num=rev_num*10+ n%10;
        n=n/10;


    }

    cout<<rev_num;

    return 0;



}
