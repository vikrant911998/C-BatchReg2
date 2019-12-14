#include<iostream>
#include<fstream>
#include<string.h>


using namespace std;

int main(){
    fstream file;
    string line;

    file.open("example.txt",ios::in | ios:: out);

    while(file){
        getline(file,line);

        if(line == "-1")
            break;

        cout<<line<<endl; 
    }

    file.close();
    return 0;
}