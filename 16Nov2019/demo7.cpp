#include<iostream>
using namespace std;

//Logical Operator
// &&(AND) ,||(OR), !(NOT).

//Conditional Statement
//if , if-else, if-elseif-else,switch,ternary operator(Conditional).

int main(){
    int a = 9,b=9;

    if(!(a<b || a==b)){
        cout<<"A is equal to B"<<endl;
    }

    if(a%3==0  && a>5){
        cout<<"A is divisible by 3 and greater than 5"<<endl;
    }

    return 0;
}