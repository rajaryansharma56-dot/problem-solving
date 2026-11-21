#include<iostream>

using namespace std;

int main(){
    int units;
    cout<<"enter number of units consumed :"<<endl;
    cin>>units;

    double bill;
    double surcharge=0;
    double fixed_charge=100;


    if (units<0){
        cout<<"invalid input ,check your inputs "<<endl;

    }

    else if (units<=100){
        bill=units*2.50;
       
    }

    else if (units<=200){
        bill=(100*2.50)+(units-100)*4.00;

    }

    else if (units<=400){
        bill=(100*2.50)+(100*4.00)+(units-200)*5.50;

    }

    else{
        bill=(100*2.50)+(100*4.00)+(200*5.50)+(units-400)*7.00;
    }

    bill=bill+fixed_charge;

    if (bill>2000){
        surcharge=bill*0.05;
    }

    bill=bill+surcharge;

    cout<<"energy charge :Rs. "<<bill-surcharge-fixed_charge<<endl;
    cout<<"fixed charge :Rs. "<<fixed_charge<<endl;
    cout<<"surcharge :Rs. "<<surcharge<<endl;
    cout<<"final bill :Rs. "<<bill<<endl;

    return 0;
    
}
