#include<iostream>
using namespace std;

int main(){
    int a[5]={10,20,30,40,50};
    int *ptr = a;

    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<endl;
    }

    // cout<<ptr<<endl;
    // cout<<*(ptr+0)<<endl;
    // cout<<*(ptr+1)<<endl;
    // cout<<*(ptr+2)<<endl;
    // cout<<*(ptr+3)<<endl;
    // cout<<*(ptr+4)<<endl;

    return 0;
}