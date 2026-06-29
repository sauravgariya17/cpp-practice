// given two string s and t, return true if t is an anagram of s and false otherwise
// input: s =physicswallah  t= wallahphysics
// output: yes

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="physicswallah";
    string t = "wallahphysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else cout<<false;
}