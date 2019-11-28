#include<iostream>
using namespace std;

typedef struct Employee{
    int id;
    string name;
    double salary;
}Employee;

int main(){
    // char c = 'A';
    // // int *p = &c;
    Employee e1;
    Employee *ptr = &e1;

    cout<<&e1<<endl;
    cout<<ptr<<endl;

    return 0;
}