//count the number of elements greater than x
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Enter array :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter x :";
    cin>>x;
    int count=0;
     for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}