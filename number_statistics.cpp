#include<iostream>

using namespace std;

int main(){
    int sum_all=0;
    float average=0;
    int highest_number;
    int lowest_number;
    int positive_count=0;

    for(int i=1; i<=10; i++){

        int number;

        cout<<"Enter number "<<i<<": ";
        cin>>number;

        if(number>0){
            positive_count++;
        }

        sum_all+=number;

        if(i==1){
            highest_number=number;
            lowest_number=number;
        }

        else{
            if(number>highest_number){
                highest_number=number;
            }

            if(number<lowest_number){
                lowest_number=number;
            }
        }
    }

    average=sum_all/10.0;

    cout<<"Sum: "<<sum_all<<endl;
    cout<<"Average: "<<average<<endl;
    cout<<"Highest number: "<<highest_number<<endl;
    cout<<"Lowest number: "<<lowest_number<<endl;
    cout<<"Positive numbers: "<<positive_count<<endl;

    return 0;
}
