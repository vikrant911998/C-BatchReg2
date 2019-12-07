#include<iostream>
using namespace std;

//Multiple Inheritance

class A{
    public:
        A(){
            cout<<"Default constructor of Class A"<<endl;
        }

        // void show(){
        //     cout<<"Show of Class A"<<endl;
        // }
};


class B {
    public:
        B(){
            cout<<"Default Constructor of Class B"<<endl;
        }
        void show(){
            cout<<"Show of Class B"<<endl;
        }
};

class C : public B , public A{
    public:
        C():B(),A(){
           cout<<"Default Constructor of Class C"<<endl; 
        }
};

int main(){
 
    C obj;
    obj.show();

    return 0;
}