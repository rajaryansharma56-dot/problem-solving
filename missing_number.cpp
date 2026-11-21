#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a size of array:"<<endl;
    cin>>n;

    int arr[n];
    int sum=0;

    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }

    int expected_sum=n*(n+1)/2;
    int missing_num=expected_sum-sum;

cout<<"missing number is :"<<missing_num<<endl;
return 0;

}
