#include<iostream>

using namespace std;

int main(){
    int s1;
    cout<<"enter side 1 of triangle :"<<endl;
    cin>>s1;


    int s2;
    cout<<"enter side 2 of traingle :"<<endl;
    cin>>s2;


    int s3;
    cout<<"enter side 3 of triangle :"<<endl;
    cin>>s3;

    

    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
        cout<<"valid triangle:"<<endl;
        
    }

    else{
        cout<<"invalid input :"<<endl;

    }

    if (s1==s2 && s2==s3){
        cout<<"Equilateral Triangle"<<endl;

    }
    else if(s1==s2 || s2==s3 || s1==s3){
        cout<<"Isosceles  Traingle "<<endl;

    }

    else{
        cout<<"Scalene Traingle"<<endl;

    }

    return 0;

}
