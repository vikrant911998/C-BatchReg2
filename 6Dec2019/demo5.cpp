#include<iostream>
using namespace std;

class Area{
    private:
        int l,b;
    public:
        Area(){
            this->l = 0;
            this->b = 0;
        }

        Area(int a){
            this->l = a;
            this->b = a;
        }

        Area(int l,int b){
            this->l = l;
            this->b = b;
        }

        void getArea(){
            cout<<"Area = "<<(this->l*this->b)<<endl;
        }
};

int main(){
    Area obj,obj1(2),obj2(3,4);
    obj.getArea();
    obj1.getArea();
    obj2.getArea();

    return 0;
}