#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;

    int arr[1000];

    cout<<"enter array elements:";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max=arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"maximum element in array is:"<<max;

    return 0;
}