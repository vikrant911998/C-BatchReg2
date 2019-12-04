#include<iostream>
using namespace std;

class Area{
    public:
        int length,breadth;

        void setDim(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
        }

        int getArea(){
            return(length * breadth);
        }
};

int main(){

    Area object;
    object.setDim(23,4);
    cout<<"Area  = "<<object.getArea()<<endl;
    return 0;
}