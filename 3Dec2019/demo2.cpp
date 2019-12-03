#include<iostream>
using namespace std;

class A{
    public:
        int id;
        string name;
        int age;

        //Default Constructor.
        // A(){
        //     cout<<"Default Constructor Called"<<endl;
            
        // }

        //Parameterised Constructor
        A(int i,string s,int a){
            cout<<"Parameterised Constructor 1"<<endl;
        }

        A(int i,string s){
            cout<<"Parameterised Constructor 2"<<endl;
        }        

        
};


int main(){
    A obj,obj1(101,"vikrant");
    A obj2(102,"vikas",23);

    return 0;
}