//WAP to print the matrix in wave form
// 1 2 3             
// 4 5 6    ->       7 8 9 6 5 4 3 2 1
// 7 8 9         
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter first array row : ";
    cin>>m;
    int n;
    cout<<"Enter first array column : ";
    cin>>n;
    
    int a[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<endl;
        //wave print
        for(int i=m-1;i>=0;i--){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    cout<<a[i][j]<<" ";
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    cout<<a[i][j]<<" ";
                }
            }
            
        }
} 