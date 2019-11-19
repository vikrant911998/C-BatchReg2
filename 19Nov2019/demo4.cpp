#include<iostream>
using namespace std;

int main(){
    int number = 123405;
    int sum = 0;

    while(number != 0){
        int temp = number%10;
        
        sum = sum+temp;
        number = number/10;//12345/10->1234/10->123/10->12/10->1/10->0cp
    }

    cout<<"SUM = "<<sum<<endl;

    return 0;
}