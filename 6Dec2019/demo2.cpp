#include<iostream>
using namespace std;

//Constructor Chaining in Single Inheritance.

class A{
    public:
        A(){
            cout<<"Default Constructor of Class A"<<endl;
        }
        A(int a){
            cout<<"Parameterised Constructor of Class A"<<endl;
        }

};

class B : public A{
    public:
        B():A(){
            cout<<"Default Constructor of Class B"<<endl;
        }
        B(int a):A(34){
            cout<<"Parameterised  Constructor of Class B"<<endl;
        }
};


int main(){
    B obj,obj1(2);

    return 0;
}