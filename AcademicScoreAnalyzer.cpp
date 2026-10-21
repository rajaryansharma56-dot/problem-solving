#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of students :"<<endl;
    cin>>n;

    if(n<=0){
        cout<<"invalid input"<<endl;
        return 0;
    }

    int num[n];
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    int total_marks=0;
    for(int i=0; i<n; i++){
        total_marks=total_marks+num[i];
    }

    double average_marks=(double)total_marks/n;

    int highest_marks=num[0];
    int lowest_marks=num[0];

    for(int i=0; i<n; i++){
        if(num[i]>highest_marks){
            highest_marks=num[i];
        }

        if(num[i]<lowest_marks){
            lowest_marks=num[i];
        }
    }
        int passed_count=0;
        int failed_count=0;

        for(int i=0; i<n; i++){
            if(num[i]>=40){
                passed_count=passed_count+1;
            }
            else{
                failed_count=failed_count+1;
            }
        }

        int above90_count=0;

        for(int i=0; i<n; i++){
            if(num[i]>=90){
                above90_count=above90_count+1;
                
            }
        }
    
     double pass_percentage=(double)passed_count/n*100;

     cout<<"-------- STUDENT MARKS REPORT -------- "<<endl;
     cout<<"total marks:"<<total_marks<<endl;
     cout<<"average marks:"<<average_marks<<endl;
     cout<<"highest marks: "<<highest_marks<<endl;
     cout<<"lowest marks:"<<lowest_marks<<endl;
     cout<<"passed students: "<<passed_count<<endl;
     cout<<"failed students: "<<failed_count<<endl;
     cout<<"student scoring 90 or above :"<<above90_count<<endl;
     cout<<"pass percentage: "<<pass_percentage<<"%"<<endl;

     return 0;
    }
