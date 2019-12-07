#include<iostream>
using namespace std;

class Member{
    protected:
        string name;
        int age;
        long mobile;
        string address;
        double salary;

    public:
        void print_Salary(){
            cout<<"Salary  = "<<this->salary<<endl;
        }
        void input(){
            
        }

};

class Manager : public Member{
    private:
        string specialization;
        string department;
    public:
        Manager(){
            this->specialization = "Management";
            this->department = "Accounts";
        }
        void output(){
            cout<<"Name = "<<this->name<<endl;
            cout<<"Age = "<<this->age<<endl;
            cout<<"Mobile = "<<this->mobile<<endl;
            cout<<"Address = "<<this->address<<endl;
            cout<<"Specialization = "<<this->specialization<<endl;
            cout<<"Department = "<<this->department<<endl;
        }
};


int main(){
    Manager obj;
    obj.output();
    obj.print_Salary();

    return 0;
}