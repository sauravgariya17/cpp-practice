#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines :";
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        //star
      
        for(int k=1;k<=i ;k++){
            cout<<k<<" ";
           
        }
        //reverse
        for(int l=i-1;l>=1;l--){
            cout<<l<<" ";
        }
        cout<<endl;
    }
}