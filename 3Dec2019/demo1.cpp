#include<iostream>
using namespace std;

class A{
    public:
        int id;
        string name;
        int age;

        //Default Constructor.
        A(){
            cout<<"Default Constructor Called"<<endl;
            // id = 101;
            // name= "XYZ";
            // age = 0;
        }

        void output(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Age = "<<age<<endl;
        }
};


int main(){
    A obj;
    // obj.output();

    return 0;
}