#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter value of size:";
    cin>>size;

    int marks[size];

    for(int i=0; i<size; i++){
        cin>>marks[i];
    }


    int smallest=marks[0];

    for(int i=0; i<size; i++){
        if(marks[i]<smallest){
            smallest=marks[i];
        }
    
    }
     cout<<"smallest number is"<<smallest<<endl;
    

  return 0;
}
