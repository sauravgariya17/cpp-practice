//Input a string of size n and update all the even positions in the strings to charachter 'a' . .


#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "raghav";
    cout<<str<<endl;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str;
}