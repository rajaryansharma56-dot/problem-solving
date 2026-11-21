#include<iostream>

using namespace std;

int main(){
  
    double  bonus_amount=0;
    double  final_salary=0;


    for(int i=1; i<=5; i++){
        int original_salary;
        cout<<"enter original_salary:"<<endl;
        cin>>original_salary;

        if( original_salary<20000){
            bonus_amount=original_salary*0.1;

        }

        else if(original_salary>=20000 && original_salary<=50000){
            bonus_amount =original_salary*0.07;

        }

        else{
            bonus_amount=original_salary*0.05;

        }

        final_salary=bonus_amount+original_salary;

        cout<<"original salary of employee :"<<original_salary<<endl;
        cout<<"bonus gained by the employee :"<<bonus_amount<<endl;
        cout<<"final salary of the employee : "<<final_salary<<endl;


    }

    return 0;

}
