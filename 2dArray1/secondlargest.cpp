// WAP to find the second largest element of a given 2d array 
 #include<iostream>
 #include<climits>
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
    //max
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    //second max
    int smax =INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=max && smax < arr[i][j]) smax=arr[i][j];
        }
    }
    cout<<smax;
 }