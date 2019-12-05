#include<iostream>
using namespace std;

class Employee{
    private:
        double salary;
        int nh;
    public:
        void getInfo(int num,double salary){
            this->nh = num;
            this->salary = salary;
        }
        void addSal(){

            if(this->salary < 500)
                this->salary += 10;
        }
        
        void addWork(){
            if(this->nh > 6){
                this->salary += 5;
            }
        }

        void show(){
            cout<<"Salary "<<this->salary<<endl;
        }
};

int main(){
    Employee obj;
    obj.getInfo(24,4000);
    obj.addSal();
    obj.addWork();

    obj.show();
 
    return 0;
}