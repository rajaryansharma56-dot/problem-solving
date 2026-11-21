#include<iostream>

using namespace std;

int main(){
    int even_count=0;
    int odd_count=0;

    for(int i=1; i<=10; i++){
        int n;
        cout<<"enter number "<<i<<":"<<endl;

        cin>>n;


        if (n%2==0){
            even_count+=1;

        }

        else{
            odd_count+=1;

        }
    }

    
        cout<<"count of even numbers "<<even_count<<endl;
        cout<<"count of odd numbers "<<odd_count<<endl;
    

    return 0;

}
