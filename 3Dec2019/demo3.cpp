#include<iostream>
using namespace std;

class A{
    public:
        int id;
        string name;
        

        A(int id,string name){
            cout<<"Parameterised Constructor "<<endl;

            this->id = id;
            this->name = name;

        }    

        void output(){
            cout<<"Id = "<<this->id<<endl;
            cout<<"Name  = "<<this->name<<endl;
        }    
     
};


int main(){
    A obj(101,"Vikrant");
    obj.output();
    cout<<obj<<endl;

    return 0;
}