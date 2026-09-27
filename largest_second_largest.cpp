#include<iostream>

using namespace std;

int main(){

    int largest, second_largest, smallest;
    int n;

    cout<<"enter number : ";
    cin>>n;

    largest=n;
    smallest=n;
    second_largest=n;

    for(int i=2; i<=10; i++){

        cout<<"enter number "<<i<<" : ";
        cin>>n;



        if(n>largest){
            second_largest=largest;
            largest=n;
        }

        else if(n>second_largest && n!=largest){
            second_largest=n;
        }

        if(n<smallest){
            smallest=n;
        }
    }

    cout<<endl;

    cout<<"largest = "<<largest<<endl;
    cout<<"second largest = "<<second_largest<<endl;
    cout<<"smallest = "<<smallest<<endl;

    return 0;
}
