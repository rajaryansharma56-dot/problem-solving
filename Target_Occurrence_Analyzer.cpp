#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size of the array:"<<endl;
    cin>>size;
    
    int num[size];

    for(int i=0; i<size; i++){
        cin>>num[i];

    }

    int target;
    cout<<"enter target value :"<<endl;
    cin>>target;

    int freq=0;

    for(int i=0; i<size; i++){
        if(num[i]==target){
            freq=freq+1;
            
        }

    }

    cout<<"frequecny of the number is:"<<freq<<endl;

    return 0;
}
