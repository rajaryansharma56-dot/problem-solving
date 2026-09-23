#include<iostream>

using namespace std;

int main(){
    int units;
    cout<<"enter units consumed :"<<endl;
    cin>>units;


    int bill=0;

    int charge=50;
    int total_bill=0;
    if (units < 0){
     cout << "Invalid input" << endl; 

    }



    else if (units<=100){
        bill=units*2; 

    }

    else if (units<=200){
    bill=100*2+(units-100)*3;
    }

    else{
        bill=100*2+100*3+(units-200)*5;

    
}

if (units>=0){
    total_bill=bill+charge;

    cout<<"no of units consumed :"<<units<<endl;
    cout<<"bill : Rs."<<bill<<endl;
    cout<<"fixed charge: Rs."<<charge<<endl;
    cout<<"total bill Rs."<<total_bill<<endl;

}

return 0;

}
