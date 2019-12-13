#include<iostream>
using namespace std;


class Person{
    int id;
    string name;
    public:
        
        void input(){
            cout<<"Enter the ID"<<endl;
            cin>>this->id;
            cout<<"Enter the Name"<<endl;
            cin>>this->name;
        }

        void show(){
            cout<<"ID = "<<this->id<<endl;
            cout<<"Name = "<<this->name<<endl;
        }
};


int main(){
    
    Person list[5];
    Person obj;

    for(int i=0;i<5;i++){
        obj.input();
        list[i] = obj;
    }

    for(int i=0;i<5;i++){
        list[i].show();
    }
    

    return 0;
}
