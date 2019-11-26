#include<iostream>
using namespace std;

int main(){
    char n[]  = {'T','o','m'};
    char n1[] = "HELLO";

    string name="TomClancy"; //{'T','o','m','C','l'}

    char firstCharacter = name.at(0);
    // cout<<name.at(0)<<endl;
    cout<<firstCharacter<<endl;

    return 0;
}