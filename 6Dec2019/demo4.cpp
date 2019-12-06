#include<iostream>
using namespace std;

class Student{
    private:
        string name;

    public:
        Student(){
            this->name = "Unknown";
        }

        Student(string name){
            this->name = name;
        }

        void show(){
            cout<<this->name<<endl;
        }
};

int main(){
    Student obj,obj1("vikrant");
    obj.show();
    obj1.show();

    return 0;
}