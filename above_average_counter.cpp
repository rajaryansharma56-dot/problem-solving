#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size of array:"<<endl;
    cin>>size;

    int num[size];

    for(int i=0; i<size; i++){
        cin>>num[i];

    }

    int sum=0;

    for(int i=0; i<size; i++){
        sum=sum+num[i];
    }

    int average=sum/size;

    int above_average_count=0;

    for(int i=0; i<size; i++){
        if(num[i]>average){
            above_average_count=above_average_count+1;
        }
    }
   
    cout<<"average: "<<average<<endl;
    cout<<"count of above average numbers :"<<above_average_count<<endl;
   return 0;
}
