#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;

    int marks[size];

    for(int i=0; i<size; i++){
        cin>>marks[i];
    }

    int sum=0;

    for(int i=0; i<size; i++){
        sum=sum+marks[i];
    }

    cout<<"SUM ="<<sum<<endl;

    return 0;

}
