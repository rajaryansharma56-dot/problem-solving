#include<iostream>

using namespace std;

int main(){

    int units;
    int total_units=0;
    int highest_use_day=0;
    int  highest_units=0;

    for(int i=1; i<=7; i++){
        cout<<"enter number of units consumed :"<<i<< "day "<<endl;
        cin>>units;

        total_units+=units;

        if(units>highest_units){
            highest_units=units;
            highest_use_day=i;
        
        }
}       
double average_units=(double)total_units/7;

cout<<"average units consumed :"<<average_units<<endl;
cout<<"total units consumed :"<<total_units<<endl;
cout<<"highest units consumed :"<<highest_units<<endl;
cout<<"highest usage day :"<<highest_use_day<<endl;

 return 0;

}
