#include<iostream>
using namespace std;
//function declaration.
//1. No return type and with arguments
int sum();


int main(){

    int result = sum();
    cout<<"Result = "<<result<<endl;

    return 0;
}


//1. No return type and No arguments
//function definition.
int sum(){
    int a=0,b=0;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    return a+b;
}