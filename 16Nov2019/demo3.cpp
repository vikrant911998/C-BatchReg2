#include<iostream>
using namespace std;

int main(){
    int principal,rate,time;
    int simpleInterest;

    // cout<<"Enter the principal"<<endl;
    // cin>>principal;
    // cout<<"Enter the rate"<<endl;
    // cin>>rate;
    // cout<<"Enter the time"<<endl;
    // cin>>time;

    cout<<"Enter the principal, rate and time"<<endl;
    cin>>principal>>rate>>time;

    simpleInterest = (principal*rate*time)/100;

    cout<<"SimpleInterest = "<<simpleInterest<<endl;


    return 0;
}