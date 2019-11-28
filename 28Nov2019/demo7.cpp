#include<iostream>
using namespace std;


typedef struct Employee{
    int id;
    string name;
    double salary;
}Employee;


int main(){
    Employee e[3];
    Employee e1;

    for(int i=0;i<3;i++){
        cout<<"Enter the id"<<endl;
        cin>>e1.id;
        cout<<"Enter the name"<<endl;
        cin>>e1.name;
        cout<<"Enter the salary"<<endl;
        cin>>e1.salary;
        
        e[i] = e1;
    }


    for(int i=0;i<3;i++){
        cout<<"*******"<<endl;
        cout<<e[i].id<<endl;
        cout<<e[i].name<<endl;
        cout<<e[i].salary<<endl;
        cout<<endl;
    }
    
   

    return 0;
}