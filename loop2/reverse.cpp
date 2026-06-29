#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    int r=0;
    int ld=0;
    while(n>0){
        r=r * 10;
        ld =n%10;
        r=ld+r;
        n=n/10;
    }
    cout<<r;
}