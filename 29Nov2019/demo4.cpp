#include<iostream>
using namespace std;

int main(){
    // int a = 2;
    // int *p = &a;


    int *ptr = new int;//new char,new string.
    *ptr = 4;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;




    return 0;
}