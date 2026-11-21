#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter a positive number "<<endl;
    cin>>n;

    if (n<0){
        cout<<"invalid input"<<endl;

    }

    else{ 

    int original=n;
    int sum=0;
    int reverse=0;

    int count=0;

    if(n==0){
        count=1;

    }

    while(n>0){
      int last_digit=n%10;
      

        count++;
        sum=sum+last_digit;
        reverse=reverse*10+last_digit;

        n=n/10;

    }

    cout<<"number of digits:"<<count<<endl;
    cout<<"sum of digits :"<<sum<<endl;
    cout<<"reversed number :"<<reverse<<endl;

    if (original==reverse){
        cout<<"palindrome: yes"<<endl;

    }

    else{
        cout<<"palindrome :no"<<endl;

    }

    return 0;

    }

}number_property_analyzer.cppnumber_property_analyzer.cppnumber_property_analyzer.cpp
