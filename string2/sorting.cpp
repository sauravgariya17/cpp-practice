// sorting means ascending order

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s;
}