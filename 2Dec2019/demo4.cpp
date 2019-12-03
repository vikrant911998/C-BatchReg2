#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string name;
        string address;

        void input(int i,string n,string a){
            id = i;
            name = n;
            address = a;
        }

        void output(){
            cout<<"RollNo -> "<<id<<endl;
            cout<<"Name -> "<<name<<endl;
            cout<<"Address -> "<<address<<endl;
        }
};

int main(){
    int id;
    string name;
    string address;

    cout<<"Enter the Id"<<endl;
    cin>>id;
    cout<<"Enter the Name"<<endl;
    cin>>name;
    cout<<"Enter the Address"<<endl;
    cin>>address;

    Student s;
    s.input(id,name,address);
    s.output();

    return 0;
}