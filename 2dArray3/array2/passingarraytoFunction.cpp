#include <iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }}
int main(){
    int arr[5]={1,4,7,3,5};
    //accessing the elements of array in another function
    //updation
    display(arr);
}