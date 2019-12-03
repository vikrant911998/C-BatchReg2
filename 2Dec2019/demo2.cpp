#include<iostream>
using namespace std;

class Student{
    public:
       int roll_No;
       string name; 

       void input(){
            cout<<"Enter the RollNo"<<endl;
            cin>>roll_No;
           
            cin.ignore(INT_MAX,'\n');
        
            cout<<"Enter the Name"<<endl;
            // cin>>name;
            getline(cin,name);
       }

       void output(){
           cout<<"Roll No "<<roll_No<<endl;
           cout<<"Name "<<name<<endl;
       }

};




int main(){

    Student obj;
    obj.input();
    obj.output();    

    return 0;
}