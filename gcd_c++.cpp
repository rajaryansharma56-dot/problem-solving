#include<iostream>

using namespace std;

int main(){
    int n1;
    cout<<"enter first number :"<<endl;
    cin>>n1;

    int n2;
    cout<<"enter second number :"<<endl;
    cin>>n2;
    
    int gcd=1;


    for(int i=1; i<=min(n1,n2); i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;

        }
    cout<<endl;
    }
cout << "The GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;

}
