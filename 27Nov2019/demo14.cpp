#include<iostream>
using namespace std;

int main(){
    string name1 = "vikrant";
    string name2[5];

    for(int i=0;i<name1.length();i++){
        name2[i] = name1[i];
    }

    cout<<name2<<endl;
    

    return 0;
}