#include<iostream>
using namespace std;
//function declaration.
//1. No return type and No arguments
void sum();


int main(){
    sum();

    return 0;
}


//1. No return type and No arguments
//function definition.
void sum(){
    int a=0,b=0;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    cout<<"SUM = "<<a+b<<endl;
}