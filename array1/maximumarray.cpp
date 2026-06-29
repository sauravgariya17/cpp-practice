//maximum array element
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    cout<<"Enter array :";
    for(int i=0;i<=n-1;i++){
    
    cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1;i<=n-1;i++){
    if(max<arr[i]) max=arr[i];
    }
    cout<<max;
}