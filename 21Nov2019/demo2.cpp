#include<iostream>
using namespace std;

int main(){   
    int arr[5];
    
    cout<<"Enter the elements of the array"<<endl;
    
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"Array Elements"<<endl;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }


    
    return 0;
}