//WAP to print the multiplication of two matrices given by the user
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter first array row : ";
    cin>>m;
    int n;
    cout<<"Enter first array column : ";
    cin>>n;
    int p;
    cout<<"Enter second array row : ";
    cin>>p;
    int q;
    cout<<"Enter second array column : ";
    cin>>q;
    if(n==p){
        //input arrays
        int a[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        //resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j< q ;j++){
                res[i][j]=0;
                //res[i][j]=a[i][o]*b[0][j]+.....
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        //print
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Not Possile";
    }
}