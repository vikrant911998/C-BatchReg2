#include<iostream>
using namespace std;

class Rectangle{
    public:
        int id;
        string name;
        
        Rectangle(){
            cout<<"Default Constructor of Class Rectangle"<<endl;
        }

        
        Rectangle(int id){
            cout<<"Parameterised of ID Constructor of class Rectangle"<<endl;
            this->id = id;
        }
        //Different Arguments
        Rectangle (string name){
            cout<<"Parameterised constructor with different Arguments"<<endl;
            this->name = name;
        }


        //Different Number of Arguments
        Rectangle (int id,string name ){
            cout<<"Parameterised constructor with different number of Arguments"<<endl;
            this->id = id;
            this->name = name;
        }

        //Different Sequence of Arguments
        Rectangle(string name,int id){
            cout<<"Parameterised constructor with different sequence of Arguments"<<endl;
            this->name = name;
            this->id = id;
        }

        
};


int main(){
    Rectangle obj;//Default
    Rectangle obj1(101);
    Rectangle obj2("Vikrant");
    Rectangle obj3(105,"Vikas");
    Rectangle obj4("Vicky",106);


    return 0;
}


// Overloading rules 
// 1.More than One Constructor in the class.
// 2.Constructor should have different arguments or different number of arguments or sequence of Arguments.

// 3.All Constructor parameterised or Default will have same name as the Class.