#include<iostream>
using namespace std;

int main(){
    string name = "Programming";

    cout<<name<<endl;

    name.push_back('$');
    cout<<"Name after push back"<<endl;
    cout<<name<<endl;

    return 0;
}