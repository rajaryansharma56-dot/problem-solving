
#include<iostream>

using namespace std;

int main(){
    string password;
    cout<<"enter your password :";
    cin>>password;

    int uppercase=0,lowercase=0,digit=0,special=0;

    for(char ch:password){

        if(isupper(ch)){
            uppercase++;
        }

        else if(islower(ch)){
            lowercase++;
        }

        else if(isdigit(ch)){
            digit++;
        }

        else{
            special++;
        }
    }

    if(password.length()>=8 && uppercase>0 && lowercase>0 && digit>0 && special>0){
        cout<<"strong password :"<<endl;
    }

    else{
        cout<<"weak password :"<<endl;
    }

    cout<<"uppercase :"<<uppercase<<endl;
    cout<<"lowercase :"<<lowercase<<endl;
    cout<<"digit :"<<digit<<endl;
    cout<<"special character :"<<special<<endl;

    return 0;
}
