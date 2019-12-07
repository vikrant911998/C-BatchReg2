#include<iostream>
using namespace std;

class A{
    private:
        int p;
    protected:
        int pro;
    public:
        int pub;

};

class B : public A{
    public:
        
        B(){
            this->pro = 10;
        }
        void show(){
            cout<<"Protected Member = "<<this->pro<<endl;
        }
};

int main(){
    B obj;
    obj.show();
    obj.pro;

    return 0;
}