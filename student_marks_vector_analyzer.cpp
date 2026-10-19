#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"enter number of students:"<<endl;
    cin>>n;

   if(n<=0){
    cout<<"invalid number of students"<<endl;
    return 0;
   }

   vector<int>marks;

   int value;

   cout<<"enter marks:"<<endl;

   for(int i=0; i<n; i++){
    cin>>value;

    if(value<0|| value>100){
        cout<<"invalid marks"<<endl;
        return 0;
    }

    marks.push_back(value);
   }

   int total=0;
    int highest=marks[0];
    int lowest=marks[0];

    cout<<"Student Marks: ";

    for(int i=0; i<marks.size(); i++){
        cout<<marks[i]<<" ";

        total=total+marks[i];

        if(marks[i]>highest){
            highest=marks[i];
        }

        if(marks[i]<lowest){
            lowest=marks[i];
        }
    }

    double average=(double)total/marks.size();

    int above_average_count=0;

    for(int i=0; i<marks.size(); i++){
        if(marks[i]>average){
            above_average_count++;
        }
    }

    cout<<endl;
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Average Marks: "<<average<<endl;
    cout<<"Highest Marks: "<<highest<<endl;
    cout<<"Lowest Marks: "<<lowest<<endl;
    cout<<"Students Above Average: "<<above_average_count<<endl;

    return 0;

    
}
