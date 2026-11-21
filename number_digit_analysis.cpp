#include<iostream>

using namespace std;

int main(){
    int n;

    int sum_digits=0;
    int count=0;

    cout<<"enter a number :";
    cin>>n;

    while(n>0){

        int last_digit=n%10;
        sum_digits+=last_digit;
        n=n/10;
        count++;
    }

    double average=(double)sum_digits/count;

    cout<<"\n ===== DIGIT ANALYSIS =====\n";

    cout<<"number of digits :"<<count<<endl;
    cout<<"sum of digits :"<<sum_digits<<endl;
    cout<<"average of digits :"<<average<<endl;

    return 0;

}
