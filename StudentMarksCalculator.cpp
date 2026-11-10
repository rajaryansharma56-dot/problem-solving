
#include<iostream>
using namespace std;

int main(){

    int total_marks = 0;
    int maths, physics, chemistry;

    cout << "Enter maths marks: ";
    cin >> maths;

    cout << "Enter physics marks: ";
    cin >> physics;

    cout << "Enter chemistry marks: ";
    cin >> chemistry;

    total_marks = maths + physics + chemistry;

    double average_marks = total_marks / 3.0;

    cout << "Total marks: " << total_marks << endl;
    cout << "Average marks: " << average_marks << endl;

    return 0;
}
