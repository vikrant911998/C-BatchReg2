#include<iostream>
using namespace std;

int main(){
    string name1 = "vikrant";
    string name2 = "vikas";

    cout<<name1<<endl;
    cout<<name2<<endl;

    name1.swap(name2);

    cout<<name1<<endl;
    cout<<name2<<endl;
 
    
    return 0;
}