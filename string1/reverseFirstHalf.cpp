// input a string of even length and reverse the first of the string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    reverse(s.begin(),s.begin()+ n/2);
    cout<<s;
}