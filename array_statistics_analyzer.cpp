#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size of array :"<<endl;
    cin>>size;

    int list[size];
    
    for (int i=0; i<size; i++){
        cin>>list[i];
    }

    int largest_element=list[0];
    int smallest_element=list[0];

    int sum=list[0];
    float avg;


    for (int i=1;  i<size; i++){
        if(list[i]>largest_element){
            largest_element=list[i];
        }

        if (list[i]<smallest_element){
            smallest_element=list[i];

        }

        sum=sum+list[i];

    }


avg=(float)sum/size;

    cout<<"largest element is :"<<largest_element<<endl;
    cout<<"smallest element is :"<<smallest_element<<endl;
    cout<<"sum of all the elements :"<<sum<<endl;
    cout<<"average of all the elements :"<<avg<<endl;

    return 0;

}
