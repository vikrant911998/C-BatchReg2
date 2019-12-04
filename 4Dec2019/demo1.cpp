//Constructor Overloading.

#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string name;

        Student(){
            cout<<"Default Constructor"<<endl;
        }

        Student(int id,string name){
            cout<<"Parameterised Constructor"<<endl;
            this->id = id;
            this->name = name;
        }
};


int main(){
    Student obj,obj1(101,"Vikrant");
    

    return 0;
}