#include<iostream>

using namespace std;

int main(){
    int uppercase=0;
    int lowercase=0;
    int digit=0;
    int special=0;

    for(int i=1; i<=10; i++){
        char ch;
        cout<<"enter character "<<i<<" :";
        cin>>ch;

        if(ch>='A'  && ch<='Z'){
            uppercase++;

        }

        else if(ch>='a' && ch<='z'){
            lowercase++;

        }


        else if (ch>='0' && ch<='9'){
            digit++;
        }

        else{
            special++;

        }
        
    }


    cout<<endl;

    cout<<"uppercase ="<<uppercase<<endl;
    cout<<"lowercase ="<<lowercase<<endl;
    cout<<"digits="<<digit<<endl;
    cout<<"special characters ="<<special<<endl;

    return  0;

}
