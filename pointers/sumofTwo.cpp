#include<iostream>
using namespace std;
int main(){

    // int x=6;
    // int y=7;
    // int* p=&x;
    // int* t=&y;
    // int s = (*p) + (*t);
    // cout<<s;

    int x,y;
    int* p1 =&x;
    int* p2 =&y;
    cout<<"Enter first number :";
    cin>>*p1;
    cout<<"Enter second number :";
    cin>>*p2;
    cout<<*p1 + *p2<<endl;
    cout<<x+y;

}