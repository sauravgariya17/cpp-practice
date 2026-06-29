// return the total number of digits in a number without using any loops
#include<iostream>
#include<string>
using namespace std;
int main(){
    int x=12345;
    string s = to_string(x);
    cout<<s.length();
}