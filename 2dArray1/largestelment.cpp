// WAP to find the largest element of a given 2d array 
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
    cout<<max;
 }