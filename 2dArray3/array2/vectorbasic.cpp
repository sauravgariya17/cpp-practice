#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //you need not mention the size //vector<int>v
    //inserting /input do not use []
    v.push_back(6);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);

    // if you want to update  / access 
    v[0]=88;
    //output
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" "<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

}