#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size of array :"<<endl;
    cin>>size;

    int num[size];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    int count_even=0;
    int count_odd=0;

    int even_sum=0;
    int odd_sum=0;

    for(int i=0; i<size; i++){
        if(num[i]%2==0){
            even_sum=even_sum+num[i];
            count_even=count_even+1;
        }

        else{
            odd_sum=odd_sum+num[i];
            count_odd=count_odd+1;
        }
    }

    cout<<"even number count"<<count_even<<endl;
    cout<<"odd number count"<<count_odd<<endl;
    cout<<"sum of even numbers:"<<even_sum<<endl;
    cout<<"sum of odd numbers:"<<odd_sum<<endl;

    return 0;
}
