#include<iostream>
using namespace std;
int main(){
    cout<< "Enter a number :";
    int n;
    cin>>n;

    
    //   if((n%3==0 || n%5==0) && (n%15!=0)){
    //     cout<<"yes it is divisible by 3 or 5 but not 15";
    // }
    // else{
    //     cout<<"not matching condition";
    // }

    // nested condition
    if(n%3==0 || n%5==0){
        if(n%15!=0){
            cout<<"yes it is divisible by 3 or 5 but not 15";
        }
        else{
            cout<<"not matching condition";
        }
    }
    else{
        cout<<"not matching condition";
    }
}
