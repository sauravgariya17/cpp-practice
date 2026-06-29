#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter y :";
    cin>>y;
    cout<<"Enter z :";
    cin>>z;
    if(x>y && x>z){
    cout<<x<<"is max";}
    else if(y>x && y>z){
    cout<<y<<"is max";}
    else {
    cout<<z<< "is max";
    }
}