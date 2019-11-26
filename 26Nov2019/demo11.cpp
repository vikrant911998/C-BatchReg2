#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int *p = &a;

    cout<<a<<endl; //2
    cout<<p<<endl;  //address.
    cout<<*p<<endl; //2

    return 0;
}