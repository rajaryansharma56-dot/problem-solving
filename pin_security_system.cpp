#include<iostream>

using namespace std;

int main(){
    int password;
    int attempts=0;


    while(attempts<3){
        cout<<"enter password :";
        cin>>password;

        if(password==0){
            cout<<"login cancelled"<<endl;

            break;
            
        }


        else if (password==1234){
            cout<<"access granted :";
            break;

        }

        else{
            attempts++;

            if(attempts<3){
                cout<<"incorrect password:"<<endl;
                cout<<"attempts remaining :"<<3-attempts<<endl;

            }
        }
    }

    if(attempts==3){
        cout<<"account locked!"<<endl;

    }

    return 0;

}
