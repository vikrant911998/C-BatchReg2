#include<iostream>
#include<fstream>
using namespace std;


int main(){
    fstream file;
    //C:\\Users\\ASUS\\Desktop\\example.txt
    file.open("example.txt",ios::out  );

    file<<"Test File Demo"<<endl;
    file<<"Test File Demo 2"<<endl;


    file.close();

    return 0;
}