```cpp
#include<iostream>

using namespace std;

int main(){

    int parking_hours;

    cout<<"enter parking hours :"<<endl;
    cin>>parking_hours;

    int base_fee=0;
    int extra_charge=0;
    int total_fee=0;

    if(parking_hours<=0){
        cout<<"invalid input :"<<endl;
    }

    else if(parking_hours<=2){
        base_fee=parking_hours*20;
    }

    else if(parking_hours<=5){
        base_fee=(2*20)+(parking_hours-2)*15;
    }

    else if(parking_hours<=9){
        base_fee=(2*20)+(3*15)+(parking_hours-5)*10;
    }

    else{
        base_fee=(2*20)+(3*15)+(4*10)+(parking_hours-9)*5;
    }

    if(parking_hours>12){
        extra_charge=50;
    }

    total_fee=base_fee+extra_charge;

    cout<<"parking hours :"<<parking_hours<<endl;
    cout<<"base fee :"<<base_fee<<endl;
    cout<<"extra charge :"<<extra_charge<<endl;
    cout<<"total fee :"<<total_fee<<endl;

    return 0;
}
```
