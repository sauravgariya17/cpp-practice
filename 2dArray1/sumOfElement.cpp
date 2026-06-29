// WAP to print sum of all the elements of a 2D matrix
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows :";
    cin>>m;
    int n;
    cout<<"enter no of columns :";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //sum
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }

    }
    cout<<sum;
}