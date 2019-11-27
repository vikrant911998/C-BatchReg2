#include<iostream>
using namespace std;

int main(){
    string name = "Programming";

    cout<<name.size()<<endl;
    // cout<<name.capacity()<<endl;
    name.shrink_to_fit();
    
    cout<<name.size()<<endl;
    // cout<<name.capacity()<<endl;
    return 0;
}