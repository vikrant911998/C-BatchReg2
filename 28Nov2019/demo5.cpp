#include<iostream>
using namespace std;


typedef struct Employee{
    int id;
    string name;
    double salary;
}Employee;


int main(){
    Employee e[3];
    Employee *ptr = e;

    Employee e1;
    e1.id = 101;
    e1.name = "vikrant";
    e1.salary = 10000;

    e[0] = e1;
    
    Employee e2;
    e2.id = 102;
    e2.name = "vikas";
    e2.salary = 2000;

    e[1] = e2;

    Employee e3;
    e3.id = 103;
    e3.name = "rahul";
    e3.salary = 5000;

    e[2] = e3;


    cout<<e[0].id<<endl;
    cout<<e[1].id<<endl;
    cout<<e[2].id<<endl;
    
    // cout<<e1<<endl;
    // cout<<ptr<<endl;

    return 0;
}