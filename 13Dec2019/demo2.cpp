#include<iostream>
using namespace std;

//ABstract class because it contains pure virtual function.
class Account{
        int id;
        string name;
    public:
        //Pure Virtual Function.
        virtual void show()=0;

        void play(){
            cout<<"Play of Account Class"<<endl;    
        }
};

class SavingAccount:public Account{
    public:
        void show(){
            cout<<"Overridden Function ";
        }
};

int main(){
    // Account obj;
    SavingAccount obj;

    return 0;
}