#include<iostream>
using namespace std;

//Relational Operator
//>,<,<=,>=,==,!=
//Logical Operator
// &&(AND) ,||(OR), !(NOT).

//Conditional Statement
//if , if-else, if-elseif-else,switch,ternary operator(Conditional).

int main(){
    int a = 5,b=9;

    if(a>b){ //5>10->false
        cout<<"A is Greater than B"<<endl;
    }

    if(a<b){ //5<10->true
        cout<<"A is Smaller than B"<<endl;
    }

    if(a==b){
        cout<<"A is equal to B"<<endl;
    }

    if(a<=b){
        cout<<"A is less than or equal to B"<<endl;
    }
    if(a>=b){
        cout<<"A is greater than or equal to B"<<endl;
    }

    if(a != b){
        cout<<"A is not equal to B"<<endl;
    }

    
    

    return 0;
}