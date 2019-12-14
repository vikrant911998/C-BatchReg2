//Templates ->generics

#include<iostream>
using namespace std;

template <typename G,typename T>

G area(G  l, T  b){
    return l*b;
}


// int area(int l,int b){
//     return l*b;
// }

// float area1(float l,float b){
//     return l*b;
// }

int main(){
    
    cout<<"Area = "<<area(10,20.4)<<endl;
    cout<<"Area = "<<area(10.23,20)<<endl;


    return 0;
}