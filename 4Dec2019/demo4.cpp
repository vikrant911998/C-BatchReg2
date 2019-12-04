#include<iostream>
using namespace std;

class Rectangle{
    private:
        string name;
        

    public:
       void setName(string name){
        //    if(name)
           this->name = name;
       } 
    private:
        int length;
        
};


int main(){
    Rectangle obj;
    
    obj.setName("-12");

    return 0;
}


//Access Specifiers
// public 
// private
// protected