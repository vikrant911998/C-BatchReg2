#include<iostream>
using namespace std;

class A{
    public:
        //Virtual Function
        virtual void play(){
            cout<<"Play of Class A"<<endl;
        }

};

class B:public A{
    public:
        void play(){
            cout<<"Play of Class B"<<endl;
        }
        void show(){
            cout<<"Show of Class B"<<endl;
        }
};



int main(){
    A obj,*ptr;
    ptr = &obj;
    // ptr->play();

    B obj1,*ptr1;
    ptr1 = &obj1;
    // ptr1->show();


    A *p = &obj1;

    p->play();

    return 0;
}