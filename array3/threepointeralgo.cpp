//
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
    int lo=0;
    int mid=0;
    int hi=n-1;
    while(mid<=hi){
        if(v[mid]==2){
            int temp =v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        if(v[mid]==0){
            int temp =v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
        }
        if(v[mid]==1) mid++;
    }
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);

    display(v);
    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}