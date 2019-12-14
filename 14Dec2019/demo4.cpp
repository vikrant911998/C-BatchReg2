#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    public:
        Student(int id, string name){
            this->id = id;
            this->name = name;
        }

        void show(){
            cout<<"Id = "<<this->id<<endl;
            cout<<"Name = "<<this->name<<endl;
        }
};

int main(){
    Student obj(101,"Vikrant");
    Student *temp = &obj;

    Student *s = new Student(102,"Vikas");

    obj.show();
    s->show();

    delete s;

    s->show();


    return 0;
}