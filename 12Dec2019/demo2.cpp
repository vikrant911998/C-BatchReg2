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
    int list[10];
    Person person_List[10];

    Person obj,obj1,obj2;
    obj.input();
    person_List[0] = obj;
    obj1.input();
    person_List[1] = obj1;
    obj2.input();
    person_List[2] = obj2;

    // obj.show();
    // obj1.show();
    // obj2.show();

    person_List[0].show();
    person_List[1].show();
    person_List[2].show();

    return 0;
}
