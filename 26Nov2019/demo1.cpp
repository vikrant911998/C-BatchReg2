#include<iostream>
using namespace std;

int main(){
    string name ;

    cout<<"Enter your name"<<endl;
    // cin>>name; //single word input for string.

    getline(cin, name); //multi word input or line input.

    cout<<"Name : "<<name<<endl;


    return 0;
}