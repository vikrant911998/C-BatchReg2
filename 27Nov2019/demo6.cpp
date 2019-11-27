#include<iostream>
using namespace std;

int main(){
    string name = "Programming";

    cout<<name<<endl;

    name.pop_back();
    cout<<"Name after pop back"<<endl;
    cout<<name<<endl;

    return 0;
}