#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b &&b<c){
        cout<<"increasing order :"<<a<<" "<<b<<" "<<c;
    }
    else if(a>b  && b>c){
        cout<<"decreasing order :"<<a<<" "<<b<<" "<<c;

    }

    else{
        cout<<"neither increasing nor decreasing order";
    }

    return 0;

}
