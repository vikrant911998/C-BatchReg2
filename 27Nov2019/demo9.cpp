#include<iostream>
using namespace std;

int main(){
    string str = "Software";

    cout<<str<<endl;
    str.resize(5);
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    return 0;
}