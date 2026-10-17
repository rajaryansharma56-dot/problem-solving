#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size of array:"<<endl;
    cin>>size;

    int num[size];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    int target;
    cout<<"enter target element:"<<endl;
    cin>>target;

    int target_count=0;

    for(int i=0; i<size; i++){
        if(num[i]==target){
          
            target_count=target_count+1;

        }

    }

cout<<"frequency counter of the target element"<<target_count<<endl;

    return 0;

}
