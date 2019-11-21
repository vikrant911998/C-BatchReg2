#include<iostream>
using namespace std;

int main(){   
    int arr[5]={13,24,51,6,62};
    
    int index;

    cout<<"Enter the index"<<endl;
    cin>>index;

    if(index < 5){
        cout<<"Element Found = "<<arr[index]<<endl;
    }
    else{
        cout<<"Invalid Index"<<endl;
    }
    
    

    
    return 0;
}