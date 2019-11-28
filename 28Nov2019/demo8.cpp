#include<iostream>
using namespace std;

typedef struct Employee{
    int id;
    string name;
};

int main(){
    Employee e1;

    e1.id = 101;
    e1.name = "vikrant";

    cout<<e1.id<<endl;
    cout<<e1.name<<endl;

    return 0;
}