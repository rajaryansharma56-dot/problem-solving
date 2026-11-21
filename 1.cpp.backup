#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"enter size "<<endl;
    cin>>n;

    vector<int>num(n);

    cout<<"enter number ";

    for(int i=0; i<n; i++){
        cin>>num[i];

    }

    for(int i=1; i<n; i++){
        num[i]=num[i]+num[i-1];

    }

    cout<<"running sum ";

    for(int i=0; i<n; i++){
        cout<<num[i]<<endl;
    }

    return 0;
}