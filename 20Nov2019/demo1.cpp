#include<iostream>
using namespace std;

//1.Reusability of Code.
//2.Better Memory Utilization

// return_type function_name(arguments){

// }

//function definition.
void sum(int a,int b){
    cout<<"SUM = "<<a+b<<endl;
}


int main(){

    sum(2,3);
    sum(34,5);
    sum(12,16);
    sum(11,19);

    return 0;
}


// DRY -> Don't repeat yourself.
//SRP ->single responsibility principle.