#include<iostream>
using namespace std;
int main(){
    cout<< "Enter a number :";
    int n;
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"yes it is divisible by 3 and 5";
    }
    else{
        cout<<"no it is not divisible by 3 and 5";
    }
    cout<<endl;
      if(n%3==0 || n%5==0){
        cout<<"yes it is divisible by 3 or 5";
    }
    else{
        cout<<"no it is not divisible by 3 or 5";
    }
}
