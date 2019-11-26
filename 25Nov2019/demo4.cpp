#include<iostream>
using namespace std;

int main(){
    int a[2][2],b[2][2],c[2][2];

    cout<<"Enter the elements of the first matrix"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of the second matrix"<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }


    cout<<"FIRST MATRIX"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"SECOND MATRIX"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = a[i][j]+b[i][j];
        }
    }

    cout<<"RESULT MATRIX"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}