#include<iostream>
using namespace std;

//A is an interface as it contains only pure virtual functions.
class A{
        
    public:
        const int RATE_OF_INTEREST = 3.14;
        int a = 10;
        virtual void show()= 0;
        virtual void play() = 0;
};

class B:public A{
    public:
        B(){
            this->PI = 20;
        }
        void show(){

        }
        void play(){

        }
};



int main(){

    B obj;



    return 0;
}