#include<iostream>

using namespace std;

int main(){



    int day, month, year;

    cout<<"enter day: ";
    cin>>day;

    cout<<"enter month: ";
    cin>>month;

    cout<<"enter year: ";

    cin>>year;

    if(month<1 || month>12){
        cout<<"Invalid date"<<endl;
    }

    else if(month==1 || month==3 || month==5 || month==7 ||
            month==8 || month==10 || month==12){

        if(day>=1 && day<=31){
            cout<<"Valid date"<<endl;
        }

        else{
            cout<<"Invalid date"<<endl;
        }
    }

    else if(month==4 || month==6 || month==9 || month==11){

        if(day>=1 && day<=30){
            cout<<"Valid date"<<endl;
        }



        else{
            cout<<"Invalid date"<<endl;
        }


    }

    else if(month==2){

        if(day>=1 && day<=28){
            cout<<"Valid date"<<endl;
        }

        else{
            cout<<"Invalid date"<<endl;
        }
    }

    return 0;
}
