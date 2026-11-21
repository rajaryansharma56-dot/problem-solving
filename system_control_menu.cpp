#include<iostream>

using namespace std;

int main(){

    int command;

    while(true){


        cout<<"\n ==== SYSTEM CONTROL ====="<<endl;
        cout<<"1.start"<<endl;
        cout<<"2.pause"<<endl;
        cout<<"3.stop"<<endl;
        cout<<"4.exit"<<endl;

        cout<<"enter command :";
        cin>>command;

        if(command==1){
            cout<<"system started "<<endl;

        }

        else if(command==2){
            cout<<"system paused"<<endl;

        }

        else if(command==3){
            cout<<"system stopped"<<endl;

        }

        else if (command==4){
            cout<<"program closed"<<endl;
        }

        else{
            cout<<"invalid command"<<endl;
        }
    }

    return 0;
    
}
