  #include<iostream>

  using namespace std;

  int main(){
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;


    int largest_num=0;

    while(n>0){
        int last_digit=n%10;


        if(last_digit>largest_num){
            largest_num=last_digit;

        }
        n=n/10;

    }

    cout<<"the largest digit in a number is :"<<largest_num<<endl;
    


    return 0;

  }
