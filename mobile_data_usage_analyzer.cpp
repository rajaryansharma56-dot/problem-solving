#include<iostream>

using namespace std ;

int main(){
    int data_usage;
    cout<<"enter monthly data usage :"<<endl;
    cin>>data_usage;



    double average_daily_usage=data_usage/30.0;

    if(data_usage<0){
        cout<<"invalid input :"<<endl;

    }

    else {
        if(data_usage<=2){
            cout<<"category : very low "<<endl;
      
        }

        else if(data_usage<=5){
            cout<<"category : low "<<endl;
        }

        else if(data_usage<=10){
            cout<<"category: moderate"<<endl;
        }

        else if(data_usage<=20){
            cout<<"category: high"<<endl;
        }

        else{
            cout<<"category : very high "<<endl;

        }

        cout<<"monthly usage:"<<data_usage<<ednl;
        cout<<"average daily usage :"<<average_daily_usage<<"data/day"<<endl;

    }

    return 0;
    
    
}
