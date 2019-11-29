#include<iostream>
using namespace std;

typedef struct Student{
    int roll_no;
    string name;
}Student;

// int input(){
//     int a;
//     cout<<"Enter the value"<<endl;
//     cin>>a;

//     return a;
// }

Student input(){
    Student s;
    cout<<"Enter the rollno"<<endl;
    cin>>s.roll_no;
    
    cin.ignore(INT_MAX,'\n');


    cout<<"Enter the name"<<endl;
    // cin>>s.name;
    getline(cin,s.name);

    return s;
}

void display(Student s2){
    cout<<"Rollno - "<<s2.roll_no<<endl;
    cout<<"Name - "<<s2.name<<endl;
}

int main(){
    Student s1 = input();
    display(s1);
    return 0;
}



