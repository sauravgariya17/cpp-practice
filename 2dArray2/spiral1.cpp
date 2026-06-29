//WAP to print the matrix in spiral form
// 1 2 3
// 4 5 6    ->    1 2 3 6 9 8 7 4 5
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
        //spiral
        int minr =0,minc=0;
        int maxr=m-1,maxc=n-1;
        while(minr<=maxr && minc<= maxc){
            //right
            for(int j=minc;j<=maxc;j++){
                cout<<a[minr][j]<<" ";
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            //down
            for(int i=minr;i<=maxr;i++){
                cout<<a[i][maxc]<<" ";
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            //left
            for(int j=maxc;j>=minc;j--){
                cout<<a[maxr][j]<<" ";
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            //up
            for(int i=maxr;i>=minr;i--){
                cout<<a[i][minc]<<" ";
            }
            minc++;
        }
    }