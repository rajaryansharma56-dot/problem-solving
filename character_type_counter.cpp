#include<iostream>

using namespace  std;

int main(){
    string text;
    cout<<"enter a text :";
    cin>>text;

    int uppercase_count=0;
    int lowercase_count=0;
    int digit_count=0;
    int special_count=0;

    for(char ch:text){

        if(ch>='A'&& ch<='Z'){
            uppercase_count+=1;
        }

        else if(ch>='a' && ch<='z'){
            lowercase_count+=1;
        }
        else if(ch>='0' && ch<='9'){
            digit_count+=1;
        }

        else{
            special_count+=1;
        }
    }

cout<<"uppercase :"<<uppercase_count<<endl;
cout<<"lowercase :"<<lowercase_count<<endl;
cout<<"digit :"<<digit_count<<endl;
cout<<"special :"<<special_count<<endl;


return 0;
        
}
