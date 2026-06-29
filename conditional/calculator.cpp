#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter problem :";
    cin>>a>>op>>b;

    //if else 
    // if(op == '+') cout<<a+b;
    // if(op == '-') cout<<a-b;
    // if(op == '*') cout<<a*b;
    // if(op == '/') cout<<a/b;

    // switch
    switch(op){
        case '+' :
            cout<<a+b;
            break;
        case '-' :
            cout<<a-b;
            break;
        case '*' :
            cout<<a*b;
            break;
        case '/' :
            cout<<a/b;
            break;
    }
}