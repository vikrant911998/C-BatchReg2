#include<iostream>
using namespace std;


//Function Overloading
// 1.more than one function with same name. 
// 2.different sequence of arguments.
// 3.Different number of arguments.
// 4.Different types of arguments.

class Operations{

    public:
        void add(int a){
            cout<<"Int sum is "<<a+a<<endl;
        }
        void add(int a,float b){
            cout<<"Sum is "<<a+b<<endl;
        }
        void add(double f1,double f2){
            cout<<"Float Sum is "<<f1+f2<<endl;
        }

        void show(int number,string str){
            cout<<"String "<<str<<" is "<<number<<endl;
        }

        void show(string str,int number){
            cout<<"String Overloaded "<<str<<" is "<<number<<endl;
        }

        
};

int main(){
    Operations obj;
    // obj.add(2);
    // obj.add(2.3,3.5);
    // obj.add(2.4,6.7);
    obj.show(101,"Number 1");
    obj.show("Number 2",102);

    return 0;
}