#include<iostream>
using namespace std;

//Parent or Super Class
class Account{
   
    public:
        //instance variable of Account Class.
        int id;
        string name;
        int age;
        string address;

};


//Child or Sub Class.
class SavingAccount : public Account {
    private:
        //instance variable of Saving Account Class.
        string type;
        double rate;
    public:

        SavingAccount(){
            this->type = "Saving Account";
            this->rate = 3.5;
        }

        void input(){
            cout<<"Enter the Id"<<endl;
            cin>>id;
            cout<<"Enter the Customer Name"<<endl;
            cin>>name;
            cout<<"Enter the Age of the Customer"<<endl;
            cin>>age;
            cout<<"Enter the Address of the Customer"<<endl;
            cin>>address;
        }
   
        void output(){
            cout<<"Id "<<this->id<<endl;
            cout<<"Name "<<this->name<<endl;
            cout<<"Age "<<this->age<<endl;
            cout<<"Address "<<this->address<<endl;
            cout<<"Account Type "<<this->type<<endl;
            cout<<"Rate of Interest "<<this->rate<<endl;
        }

};


int main(){
    SavingAccount obj;
    obj.input();
    obj.output();

    return 0;
}