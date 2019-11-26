#include<iostream>
using namespace std;

//call by reference.

void show(int *a, int *b){
    *a = 1000;
    *b = 2000;
    cout<<"a value inside the show "<<*a<<endl;

}

int main(){
    int a=10,b=20;

    show(&a,&b);    
    cout<<"a value inside the main "<<a<<endl;
    return 0;
}