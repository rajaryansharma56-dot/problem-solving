#include<iostream>

using namespace std;

int main(){
    char ch;

    cout<<"enter character :";
    cin>>ch;

    if(ch=>'A' && ch<='Z'){
        cout<<"uppercase alphabet";

    }

    else if (ch>='a' && ch<='z'){
        cout<<"lowercase alphabet :";

    }

    else if (ch>='0' && ch<='9'){
        cout<<"digit";

    }

    else{
        cout<<"special character";

    }

    return 0;

}
