#include<iostream>
using namespace std;

template <class T,class T1,class T2>

class Student{
    T id;
    T1 name;
    T2 percent;
    public:
        Student(T id, T1 name,T2 percent){
            this->id = id;
            this->name = name;
            this->percent = percent;
        }

        void show(){
            cout<<"Id  = "<<this->id<<endl;
            cout<<"Name = "<<this->name<<endl;
            cout<<"Percent = "<<this->percent<<endl;
        }
};


int main(){
    Student<int,string,double> obj(101,"Vikrant",95.67);
    obj.show();

    return 0;
}