#include<iostream>
using namespace std;

//Setter and Getters.

class Number{
    private:
        int num1,num2;
    public:
        void setNum1(int num1){
            this->num1 = num1;
        }

        void setNum2(int num2){
            this->num2 = num2;
        }

        int getNum1(){
            return num1;
        }

        int getNum2(){
            return num2;
        }
};

int main(){
    Number obj;
    obj.setNum1(10);
    obj.setNum2(30);

    cout<<"Num 1 "<<obj.getNum1()<<endl;
    cout<<"Num 2 "<<obj.getNum2()<<endl;

    return 0;
}