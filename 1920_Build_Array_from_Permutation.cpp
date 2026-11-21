
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[100], ans[100];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        ans[i]=arr[arr[i]];
    }

    cout<<"New array:"<<endl;

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
