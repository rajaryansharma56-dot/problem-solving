#include<iostream>

using namespace std;

int main(){

    int units;

    cout<<"enter number of units consumed in a month :"<<endl;
    cin>>units;

    double average_units=units/30.0;

    if(units<0){
        cout<<"invalid input :"<<endl;
    }

    else{

        if(units<=100){
            cout<<"low usage :" <<endl;
        }

        else if(units<=200) {
            cout<<"moderate usage :"<<endl;
        }

        else if(units<=400){
            cout<<"high usage :"<<endl;
        }

        else{
            cout<<"very high usage :"<<endl;


        }


        cout<<"average daily usage :"<<average_units<<" units/day"<<endl;
    }

    return 0;
}
