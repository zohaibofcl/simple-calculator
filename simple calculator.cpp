#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char x;
    cout<<"Enter number one"<<endl;
    cin>>num1;
    cout<<"Enter number two"<<endl;
    cin>>num2;
    cout<<"press a for addition"<<endl;
    cout<<"press b for subtraction"<<endl;
    cout<<"press c for multiplication"<<endl;
    cout<<"press d for division"<<endl;
    cout<<"press e for average"<<endl;
    cin>>x;
    if(x=='a');
    cout<<"the addition"<<num1+num2<<endl;
    if(x=='b');
     cout<<"the subtraction"<<num1-num2<<endl;
     if(x=='c');
     cout<<"the multiplication"<<num1*num2<<endl;
     if(x=='d');
     cout<<"the division"<<num1/num2<<endl;
     if(x=='e');
     cout<<"the average"<<(num1+num2)/2<<endl;
     return 0;
}
