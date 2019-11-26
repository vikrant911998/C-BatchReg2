#include<iostream>
using namespace std;

int main(){
    int a[7] = {1,2,3,4,5,6};
    int index,number;

    cout<<"Enter the Number to be inserted"<<endl;
    cin>>number;

    cout<<"Enter the index"<<endl;
    cin>>index;

    for(int i=6;i>index;i--){
        a[i] = a[i-1]; //a[6] = a[5];
    }
    a[index] = number;

    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }



    return 0;
}