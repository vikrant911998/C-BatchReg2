#include<iostream>
using namespace std;
//function declaration.
//1. with return type and with arguments
int sum(int,int);


int main(){
    int a=0,b=0;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    int result = sum(a,b);
    cout<<"Result = "<<result<<endl;

    return 0;
}


//1. No return type and No arguments
//function definition.
int sum(int a,int b){
    return a+b;
}