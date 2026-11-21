#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size of array:"<<endl;
    cin>>size;
    
    int verify[size];

    for(int i=0;i<size; i++){
        cin>>verify[i];
    }

    int even_count=0;
    int odd_count=0;

    for(int i=0; i<size; i++){
        if(verify[i]%2==0){
            even_count=even_count+1;
        }

        else{
            odd_count=odd_count+1;
        }

    cout<<endl;
    }

    cout<<"size of array is "<<size<<endl;
    cout<<"count of even numbers is "<<even_count<<endl;
    cout<<"count of odd numbers is "<<odd_count<<endl;

    return 0;
}
