#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size:"<<endl;
    cin>>size;

    int num[size];

    for(int i=0; i<size; i++){
        cin>>num[i];

    }

    for(int i=0; i<size; i++){
        int duplicate=0;

        for(int j=0; j<i; j++){
            if(num[i]==num[j]){
                duplicate=1;
                break;
            }
        }

        if(duplicate==0){
            cout<<num[i]<<" ";
        }
    }
    
    cout<<endl;

    return 0;

}
