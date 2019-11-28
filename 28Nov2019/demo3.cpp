#include<iostream>
using namespace std;

//Structure Definition.
typedef struct Employee{
    int id;
    string name;
    double salary;
}employee;


int main(){
    int      d;
    employee e1;

    cout<<"Enter the Id"<<endl;
    cin>>e1.id;

    cout<<"Enter the Employee Name"<<endl;
    cin>>e1.name;

    cout<<"Enter the Salary"<<endl;
    cin>>e1.salary;

    cout<<"Id :"<<e1.id<<endl;
    cout<<"Name :"<<e1.name<<endl;
    cout<<"Salary :"<<e1.salary<<endl;
    

    return 0;
}