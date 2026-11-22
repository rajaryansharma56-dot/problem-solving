#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[1000];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int largest=arr[0];
    int second_largest=0;
    bool found=false;

    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
            found=true;
        
        }

        else if(arr[i]<largest){

            if(found==false || arr[i]>second_largest){
                second_largest=arr[i];
                found=true;
            }
        }
    }

    if(found==false){
        cout<<"no second largest element";
    }
    
    else{
        cout<<"second largest element is :"<<second_largest;
    }

    return 0;


}