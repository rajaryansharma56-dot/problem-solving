#include <iostream> 
using namespace std;

int sum(int a, int b) {
    
    cout<<"enter the first number :"<<endl;
    cout<<"enter  second number :"<<endl;

    cin>>a>>b;

    return a + b; 

}

int main() {
    cout << sum(10, 20) << endl; 
    return 0;
}
