//linear search
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n  :";
    cin>>n;
    int arr[n];
    cout<<"Enter array";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter x :";
    cin>>x;
    //checkmark
    bool flag =false;
    for(int i=0;i<=n-1;i++){
        if(x==arr[i]) flag = true;
      
        
    }
    if(flag ==true) cout<<"exist";
    else cout<<"not exist";
}