#include<iostream>
using namespace std;

int main(){
    int a[5]={10,20,30,40,50};
    int index;

    cout<<"Enter the index"<<endl;
    cin>>index;

    for(int i=0;i<5;i++){
        if(i == index){
            a[i] = 100;
        }
    }


    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}