#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x i.e cp :";
    cin>>x;
    cout<<"Enter y i.e sp:";
    cin>>y;
    if(x>y){
        cout<<"loss "<<x-y;

    }
    else{
        cout<<"profit "<<y-x;
    }
}