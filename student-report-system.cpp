#include<iostream>
using namespace std;

int main(){

    int n;

    int passed=0;
    int failed=0;
    int student_A=0;

    int highest_total=-1;
    int lowest_total=100000;

    string highest_student;
    string lowest_student;

    int class_total=0;

    cout<<"Enter number of students: ";
    cin>>n;

    for(int i=0; i<n; i++){

        cout<<endl;
        cout<<"===== STUDENT "<<i+1<<" ====="<<endl;

        string name;
        cout<<"Enter student name: ";
        cin>>name;

        int roll_no;
        cout<<"Enter student roll number: ";
        cin>>roll_no;

        int phy,chem,bio,maths,hindi;

        cout<<"Enter physics marks: ";
        cin>>phy;

        cout<<"Enter chemistry marks: ";
        cin>>chem;

        cout<<"Enter biology marks: ";
        cin>>bio;

        cout<<"Enter maths marks: ";
        cin>>maths;

        cout<<"Enter hindi marks: ";
        cin>>hindi;

        int total=phy+chem+bio+maths+hindi;

        float average=total/5.0;

        char phy_grade;
        char chem_grade;
        char bio_grade;
        char maths_grade;
        char hindi_grade;

        if(phy>=90)
            phy_grade='A';
        else if(phy>=80)
            phy_grade='B';
        else if(phy>=70)
            phy_grade='C';
        else if(phy>=60)
            phy_grade='D';
        else if(phy>=50)
            phy_grade='E';
        else
            phy_grade='F';


        if(chem>=90)
            chem_grade='A';
        else if(chem>=80)
            chem_grade='B';
        else if(chem>=70)
            chem_grade='C';
        else if(chem>=60)
            chem_grade='D';
        else if(chem>=50)
            chem_grade='E';
        else
            chem_grade='F';


        if(bio>=90)
            bio_grade='A';
        else if(bio>=80)
            bio_grade='B';
        else if(bio>=70)
            bio_grade='C';
        else if(bio>=60)
            bio_grade='D';
        else if(bio>=50)
            bio_grade='E';
        else
            bio_grade='F';


        if(maths>=90)
            maths_grade='A';
        else if(maths>=80)
            maths_grade='B';
        else if(maths>=70)
            maths_grade='C';
        else if(maths>=60)
            maths_grade='D';
        else if(maths>=50)
            maths_grade='E';
        else
            maths_grade='F';


        if(hindi>=90)
            hindi_grade='A';
        else if(hindi>=80)
            hindi_grade='B';
        else if(hindi>=70)
            hindi_grade='C';
        else if(hindi>=60)
            hindi_grade='D';
        else if(hindi>=50)
            hindi_grade='E';
        else
            hindi_grade='F';


        if(phy<40 || chem<40 || bio<40 || maths<40 || hindi<40){
            failed++;
        }
        else{
            passed++;
        }


        if(average>=90){
            student_A++;
        }


        class_total=class_total+total;


        if(total>highest_total){
            highest_total=total;
            highest_student=name;
        }


        if(total<lowest_total){
            lowest_total=total;
            lowest_student=name;
        }


        cout<<endl;
        cout<<"===== STUDENT REPORT ====="<<endl;

        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<roll_no<<endl;

        cout<<"Physics: "<<phy<<" Grade: "<<phy_grade<<endl;
        cout<<"Chemistry: "<<chem<<" Grade: "<<chem_grade<<endl;
        cout<<"Biology: "<<bio<<" Grade: "<<bio_grade<<endl;
        cout<<"Maths: "<<maths<<" Grade: "<<maths_grade<<endl;
        cout<<"Hindi: "<<hindi<<" Grade: "<<hindi_grade<<endl;

        cout<<"Total Marks: "<<total<<endl;
        cout<<"Average: "<<average<<endl;


        if(phy<40 || chem<40 || bio<40 || maths<40 || hindi<40){
            cout<<"Result: FAIL"<<endl;
        }
        else{
            cout<<"Result: PASS"<<endl;
        }

    }


    float class_average=class_total/(5.0*n);

    cout<<endl;
    cout<<"============================"<<endl;
    cout<<"       CLASS SUMMARY"<<endl;
    cout<<"============================"<<endl;

    cout<<"Number of students: "<<n<<endl;
    cout<<"Students passed: "<<passed<<endl;
    cout<<"Students failed: "<<failed<<endl;
    cout<<"Students with Grade A: "<<student_A<<endl;

    cout<<"Class Average: "<<class_average<<endl;

    cout<<"Highest Total: "<<highest_total<<endl;
    cout<<"Student: "<<highest_student<<endl;

    cout<<"Lowest Total: "<<lowest_total<<endl;
    cout<<"Student: "<<lowest_student<<endl;

    return 0;
}
