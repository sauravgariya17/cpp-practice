#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    
    //composite

    // for(int i=2;i<=n-1 ;i++){
    //     if(n%i==0){
    //         cout<<n <<" is a composite number"<<endl;
    //      break;
    //     }
    //     else {
    //         cout<<"prime number";
    //         break;
    //     }
        
    // }
     bool flag=true;
     for(int i=2; i<=n-1;i++){
        if(n%i==0){
            flag= false;
            break;
        }
     }
     if(n==1) cout<<"neither prime nor composite";
     else if(flag==true) cout<<"prime";
     else cout<<"composite";

}