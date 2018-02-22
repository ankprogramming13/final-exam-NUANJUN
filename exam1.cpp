#include <iostream>
using namespace std;
int main() {
    int a,b,cgd,reuslt_1,reusult_2,reusult_3,reusult_4;
    cout<<"Welcome to CLI Calculator V1.00"<<endl;
    cout<<"Number 1 : ";
    cin>>a;
    cout<<"Number 2 : ";
    cin>>b;
    do{
            cout<<"menu\n1.+\n2.-\n3.*\n4/\n5.quit"<<endl;
            cin>>cmd;
            if(cmd==1){
                reuslt_1=a+b;
                cout<<"Resuit = "<<reuslt_1<<endl;
            }else if (cmd==2){
                reuslt_2=a-b;
                cout<<"Resuit = "<<reuslt_2<<endl;
            }else if (cmd==3){
                reuslt_3=a*b;
                cout<<"Resuit = "<<reuslt_3<<endl;
            }else if (cmd==4){
                reuslt_3=a/b;
                cout<<"Resuit = "<<reuslt_4<<endl;
            } {break;}
        {while(1);
        return 0;
}
