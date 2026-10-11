#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter value of size:"<<endl;
    cin>>size;

    int marks[size];

    for(int i=0; i<size; i++){
        cin>>marks[i];

    }

    int largest=marks[0];
    int smallest=marks[0];

    int l=0;
    int s=0;

    for(int i=0; i<size; i++){
        if(marks[i]>largest){
            largest=marks[i];
            l=i;
        }

        if(marks[i]<smallest){
            smallest=marks[i];
            s=i;
        }


        
    }

    cout<<"largest number is :"<<largest<<endl;
    cout<<"smallest number is:"<<smallest<<endl;
    cout<<"largest number index:"<<l<<endl;
    cout<<"smallest number index:"<<s<<endl;

retrun 0;

}
