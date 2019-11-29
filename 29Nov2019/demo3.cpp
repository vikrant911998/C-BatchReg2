#include<iostream>
using namespace std;

typedef struct Student{
    int roll_no;
    string name;
}Student;

Student * input(){
    
    Student *s = new Student;
    cout<<"Enter the rollno"<<endl;
    cin>>s->roll_no;
    
    cin.ignore(INT_MAX,'\n');

    cout<<"Enter the Name"<<endl;
    getline(cin,s->name);
    // cin>>s->name;

    return s;
}

void display(Student *s2){
    cout<<"Roll No - "<<s2->roll_no<<endl;
    cout<<"Name - "<<s2->name<<endl;
}

int main(){
    Student *s1 = input();
    display(s1);

    return 0;
}



