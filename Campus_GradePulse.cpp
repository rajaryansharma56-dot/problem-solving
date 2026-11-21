#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size of the array:"<<endl;
    cin>>size;

    if(size<=0){
        cout<<"invalid number of students"<<endl;
        return 0;
    }

    int marks[size];

   
    for(int i=0; i<size; i++){
        cin>>marks[i];

    }

    int highest_marks=marks[0];
    int lowest_marks=marks[0];

    for(int i=0; i<size; i++){
        if(marks[i]>highest_marks){
            highest_marks=marks[i];
        }

        if(marks[i]<lowest_marks){
            lowest_marks=marks[i];
        }
    }

    int sum=0;
    
    for(int i=0; i<size; i++){
        sum=sum+marks[i];
    }

    int count_passed=0;
    int count_failed=0;

    for(int i=0; i<size; i++){
        if(marks[i]>=40){
            count_passed=count_passed+1;
        }

        else{
            count_failed=count_failed+1;
        }
    }

    double average=(double)sum/size;

    int above_average=0;

    for(int i=0; i<size; i++){
        if(marks[i]>=average){
            above_average=above_average+1;
        }
    }

    cout<<"class average:"<<average<<endl;
    cout<<"highest marks"<<highest_marks<<endl;
    cout<<"lowest marks"<<lowest_marks<<endl;
    cout<<"above average student :"<<above_average<<endl;
    cout<<"number of passed student"<<count_passed<<endl;
    cout<<"number of failed student"<<count_failed<<endl;

    return 0;


}
