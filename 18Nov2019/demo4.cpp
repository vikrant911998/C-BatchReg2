#include<iostream>
using namespace std;

//Vowel -> a,e,i,o,u
//consonants

int main(){
    char alphabet;
    cout<<"Enter a character from alphabets"<<endl;
    cin>>alphabet;

    //Switch Syntax
    switch(alphabet){ 
        default: cout<<"Consonants"<<endl;
            break;
        case 'a' : cout<<"Vowel"<<endl;
            break;
        case 'e' : cout<<"Vowel"<<endl;
            break;
        case 'i' : cout<<"Vowel"<<endl;
            break;
        case 'o' : cout<<"Vowel"<<endl;
            break;
        case 'u' : cout<<"Vowel"<<endl;
            break;
        
    };

    return 0;
}