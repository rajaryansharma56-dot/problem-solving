#include<iostream>

using namespace std;

int main(){
  int n;
cin>>n;
int rev_num=0;
int dup=n;
while(n>0){
int ld=n%10;
rev_num=(rev_num*10)+ld;
n=n/10;
}
if(dup==rev_num){
cout<<"true";
}
else{
cout<<"fasle";
}

return 0;
}
  
