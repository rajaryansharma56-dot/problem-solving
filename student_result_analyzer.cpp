
#include<iostream>

using namespace std;

int main(){
    int total_marks=0;
    float percentage=0;
    int highest_marks=0;
    int lowest_marks=100;
    bool fail=false;

    for(int i=1; i<=5; i++){
        int marks;

        cout<<"Enter marks "<<i<<": ";
        cin>>marks;

        if(marks<0 || marks>100){
            cout<<"Invalid input"<<endl;
            return 0;
        }

        total_marks+=marks;

        if(marks>highest_marks){
            highest_marks=marks;
        }

        if(marks<lowest_marks){
            lowest_marks=marks;
        }

        if(marks<40){
            fail=true;
        }
    }

    percentage=total_marks/5.0;

    cout<<"Total marks: "<<total_marks<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Highest marks: "<<highest_marks<<endl;
    cout<<"Lowest marks: "<<lowest_marks<<endl;

    if(fail){
        cout<<"Grade: F"<<endl;
        cout<<"Result: FAIL"<<endl;
    }

    else if(percentage>=90){
        cout<<"Grade: A"<<endl;
        cout<<"Result: PASS"<<endl;
    }

    else if(percentage>=75){
        cout<<"Grade: B"<<endl;
        cout<<"Result: PASS"<<endl;
    }

    else if(percentage>=60){
        cout<<"Grade: C"<<endl;
        cout<<"Result: PASS"<<endl;
    }

    else{
        cout<<"Grade: D"<<endl;
        cout<<"Result: PASS"<<endl;
    }

    return 0;
}
