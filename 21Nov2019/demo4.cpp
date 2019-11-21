#include<iostream>
using namespace std;

int main(){   
    int arr[5]={13,24,51,6,62};
    
    int number;

    cout<<"Enter the Number to be searched"<<endl;
    cin>>number;

    for(int i=0;i<5;i++){
        if(number == arr[i])
            cout<<"Element Found "<<endl;
    }
    
    
    

    
    return 0;
}