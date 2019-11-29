#include<iostream>
using namespace std;


typedef struct Student{
    int roll_no;
    string name;
}Student;


int main(){
    int a ;
    a = 2;
    int *p = &a;

    Student s1;
    s1.roll_no = 101;
    s1.name = "vikrant";
    Student *ptr = &s1;



    // cout<<"RollNo -"<<s1.roll_no<<endl;
    // cout<<"Name -"<<s1.name<<endl;

    cout<<"Rollno -"<<ptr->roll_no<<endl;
    cout<<"Name -"<<ptr->name<<endl;

    return 0;
}