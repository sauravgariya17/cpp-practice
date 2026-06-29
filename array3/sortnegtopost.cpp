//sort negative numbers to the top of the array
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]<0) i++;
        else if(v[j]>=0) j--;
        else {
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(-1);
    v.push_back(3);
    v.push_back(-9);
    v.push_back(4);
    v.push_back(-2);
    v.push_back(6);
    display(v);
    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}