
#include<iostream>

using namespace std;

int main(){

    int tickets_number;
    cout<<"enter number of tickets :"<<endl;
    cin>>tickets_number;

    int age;
    cout<<"enter customer age :"<<endl;
    cin>>age;

    char student;
    cout<<"are you student (Y/N) :";
    cin>>student;

    int ticket_price=150;

    int original_amount=0;
    int age_discount=0;
    int student_discount=0;
    int bulk_discount=0;
    int final_amount=0;

    if(tickets_number<=0 || age<=0){
        cout<<"invalid input :"<<endl;
    }

    else if(student!='Y' && student!='N'){
        cout<<"invalid student input :"<<endl;
    }

    else{

        original_amount=tickets_number*ticket_price;

        if(age<5){
            age_discount=original_amount;
        }

        else if(age>=5 && age<=17){
            age_discount=original_amount*0.30;
        }

        else if(age>=18 && age<=59){
            age_discount=0;
        }

        else{
            age_discount=original_amount*0.40;
        }

        int amount_after_age_discount=original_amount-age_discount;

        if(student=='Y'){
            student_discount=amount_after_age_discount*0.10;
        }

        else{
            student_discount=0;
        }

        int amount_after_student_discount=amount_after_age_discount-student_discount;

        if(tickets_number>5){
            bulk_discount=amount_after_student_discount*0.05;
        }

        else{
            bulk_discount=0;
        }

        

        final_amount=amount_after_student_discount-bulk_discount;
     


        cout<<"number of tickets :"<<tickets_number<<endl;
        cout<<"original amount :"<<original_amount<<endl;
        cout<<"age discount :"<<age_discount<<endl;
        cout<<"student discount :"<<student_discount<<endl;
        cout<<"bulk discount :"<<bulk_discount<<endl;
        cout<<"final amount :"<<final_amount<<endl;
    }

    return 0;
}

