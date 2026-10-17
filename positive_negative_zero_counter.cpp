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

    int positive_count=0;
    int negative_count=0;
    int zeros_count=0;

    for(int i=0; i<size; i++){
        if(num[i]>0){
            positive_count=positive_count+1;
            
        }

        else if(num[i]==0){
            zeros_count=zeros_count+1;
        }

        else{
            negative_count=negative_count+1;
        }

    }

    cout<<endl;

    cout<<"Positive numbers are: "<<positive_count<<endl;
    cout<<"Negative numbers are: "<<negative_count<<endl;
    cout<<"Zeroes numbers are: "<<zeros_count<<endl;

    return 0;
}
