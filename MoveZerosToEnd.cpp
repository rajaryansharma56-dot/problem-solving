#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;

    int arr[1000];

    cout<<"enter the element:";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int index=0;

    for(int i=0; i<n; i++){
        if(arr[index]!=0){
            arr[index]=arr[i];
            index++;
        }
    }

    while(index<n){
        arr[index]=0;
        index++;
    }

    cout<<"array after moving zeros:";

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;



}