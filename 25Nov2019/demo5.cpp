#include<iostream>
using namespace std;

int main(){
    int a[4][4];

    cout<<"Enter the elements of the first matrix"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }

    cout<<"MATRIX"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"PRIMARY DIAGONAL "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i == j)
                cout<<a[i][j]<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    cout<<"SECONDARY DIAGONAL "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i+j == 3)
                cout<<a[i][j]<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }   

    return 0;
}