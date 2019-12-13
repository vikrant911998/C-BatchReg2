#include<iostream>
using namespace std;

class Shape{
    public:
        void print(){
            cout<<"This is print of Shape Class"<<endl;
        }

};

class Rectangle:public Shape{
    public:
        void print1(){
            cout<<"This is print of Rectangle Class"<<endl;
        }
};

class Circle:public Shape{
    public:
        void print2(){
            cout<<"This is print of Circle Class"<<endl;
        }
};

class Square :public Rectangle{
    public:
        void print3(){
            cout<<"Square is Rectangle"<<endl;
        }
};


int main(){

    Square obj;
    obj.print();
    obj.print1();
    obj.print3();

    return 0;
}