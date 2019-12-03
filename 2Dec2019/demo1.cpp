#include<iostream>
using namespace std;

class Student{
    public:
       int roll_No;
       string name; 

};


int main(){
    //Student class Object.
    Student object={101,"Vikrant"};
    // object.roll_No = 101;
    // object.name = "Vikrant";

    cout<<object.roll_No<<endl;
    cout<<object.name<<endl;


    return 0;
}