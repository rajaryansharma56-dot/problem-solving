
#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size of array:"<<endl;
    cin>>size;

    if(size<2){
        cout<<"No second largest element"<<endl;
        return 0;
    }

    int numbers[size];

    for(int i=0; i<size; i++){
        cin>>numbers[i];
    }

    int largest_num=numbers[0];
    int second_num=0;
    int found=0;

    for(int i=1; i<size; i++){

        if(numbers[i]>largest_num){
            second_num=largest_num;
            
            largest_num=numbers[i];
            found=1;
        }

        else if(numbers[i]<largest_num){
            if(found==0 || numbers[i]>second_num){
                second_num=numbers[i];
                found=1;
            }
        }
    }

    if(found==1){


        cout<<"Second largest element: "<<second_num<<endl;
    }

    else{


        cout<<"No second largest element"<<endl;
    }

    return 0;
}
