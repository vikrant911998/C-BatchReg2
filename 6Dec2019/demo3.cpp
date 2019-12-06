#include<iostream>
using namespace std;

//Multilevel Inheritance.
class A{
    public:
        A(){
            cout<<"Default Constructor of Class A"<<endl;
        }
        A(int a){
            cout<<"parameter of Class A"<<endl;
        }

};

class B : public A{
    public:
        B():A(23){
            cout<<"Default of Class B"<<endl;
        }
};

class C : public B{
    public:
        C():B(){
            cout<<"Default of Class C"<<endl;
        }
};


int main(){
    B obj;
    C obj1;

    return 0;
}