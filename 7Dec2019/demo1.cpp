#include<iostream>
using namespace std;

//Hierarchical Inheritance

class A{
    public:
        A(){
            cout<<"Default constructor of Class A"<<endl;
        }
};


class B : public A{
    public:
        B():A(){
            cout<<"Default Constructor of Class B"<<endl;
        }
};

class C : public A{
    public:
        C():A(){
           cout<<"Default Constructor of Class C"<<endl; 
        }
};



int main(){
    B obj1;
    C obj2;

    return 0;
}