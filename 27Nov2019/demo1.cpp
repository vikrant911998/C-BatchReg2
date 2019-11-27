#include<iostream>
using namespace std;

int main(){
    int a =2;
    int *ptr = &a; //& addressof operator.

    int b[5] ={10,20,30,40,50};
    int *ptr1 = b;

    cout<<b<<endl;
    cout<<ptr1<<endl;


    return 0;
}