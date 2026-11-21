#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;

    if(n<=0){
        cout<<"invalid input"<<endl;
        return 0;

    }

    vector<int>num;

    int value;

    cout<<"enter elements:"<<endl;

    for(int i=0; i<n; i++){
        cin>>value;
        num.push_back(value);
    }

    cout<<"vector elements";

    int sum=0;

    for(int i=0; i<num.size(); i++){
        sum=sum+num[i];
        cout<<num[i]<<" ";
    }

    cout<<endl;

    cout<<"number of  elements:"<<num.size()<<endl;

    cout<<"sum of elements:"<<sum<<endl;

    return 0;

}
