//WAP to print the matrix in wave form
// 1 2 3             
// 4 5 6    ->       1 4 7 8 5 2 3 6 9   
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
        for(int j=0;j<n;j++){
            if(j%2==0){
                for(int i=0;i<n;i++){
                    cout<<a[i][j]<<" ";
                }
            }
            else{
                for(int i=n-1;i>=0;i--){
                    cout<<a[i][j]<<" ";
                }
            }
           
        }
} 