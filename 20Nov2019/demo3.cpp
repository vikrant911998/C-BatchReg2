#include<iostream>
using namespace std;
//function declaration.
//1. No return type and with arguments
void sum(int,int);


int main(){
    int a=0,b=0;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    sum(a,b);

    return 0;
}


//1. No return type and No arguments
//function definition.
void sum(int a,int b){
    cout<<"SUM = "<<a+b<<endl;
}