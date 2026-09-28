#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter a positive number :";
    cin>>num;

    if(num<0){
        cout<<"invalid input :"<<endl;

    }
    else{
        int original=num;
        int lastdigit=num%10;
        int count=0;

        while(num>0){
            num=num/10;
            count++;
        }

        int firstdigit=original;
        
        while(firstdigit>=10){
            firstdigit=firstdigit/10;

        }

        int difference=firstdigit-lastdigit;


         if (difference < 0) {
            difference = -difference;
        }

        cout << "First digit: " << firstdigit << endl;
        cout << "Last digit: " << lastdigit << endl;
        cout << "Number of digits: " << count << endl;

        if (firstdigit == lastdigit) {
            cout << "First and last digits are equal" << endl;
        }
        else {
            cout << "First and last digits are not equal" << endl;
        }

        cout << "Difference: " << difference << endl;
    }

    return 0;
}
