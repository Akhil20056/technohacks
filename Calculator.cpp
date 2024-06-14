#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the number a : ";
    cin>>a;
    cout<<"Enter the number b : ";
    cin>>b;
    cout<<"Enter the operation ('+','-','*','/') : ";
    char ch;
    cin>>ch;
    switch(ch){
        case '+' : cout<<"a + b = "<<a+b<<endl;
                  break;

        case '-' : cout<<"a - b = "<<a-b<<endl;
                  break;

        case '*' : cout<<"a x b = "<<a*b<<endl; 
                  break;

        case '/' : 
        if(b!=0){
        cout<<"a/b = "<<a/b<<endl;   
        }
        else{
            cout<<"Error ! Division by gero"<<endl;
        }
                 break;

        default :
            cout<<"Invalid operator"<<endl;
            break;

    }
}