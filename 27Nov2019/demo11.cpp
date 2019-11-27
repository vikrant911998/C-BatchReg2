#include<iostream>
using namespace std;

int main(){
    string name = "vikrant";
    int length = 5;
    char arr[length];

    name.copy(arr,length,1);

    for(int i=0;i<length;i++){
           cout<<arr[i];
    }
    cout<<endl;
    return 0;
}