#include<iostream>
using namespace std;

int main(){
    int i =1;
    int *p = &i;

    while(*p < 10){
        cout<< *p<<endl;
        // *p++;   p =p+1;
        (*p)++; //*p = *p + 1
    }

    return 0;
}