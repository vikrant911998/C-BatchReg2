#include<iostream>
using namespace std;

int main(){
    int a[5]={10,20,30,40,50};
    int *ptr = a;

    cout<<"Array before"<<endl;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }

    cout<<endl;
    cout<<"Enter the Elements of the array"<<endl;

    for(int i=0;i<5;i++){
        cin>>*(ptr+i); //a[i]
    }

   
    cout<<"Array After"<<endl;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }

    cout<<endl;

    return 0;
}