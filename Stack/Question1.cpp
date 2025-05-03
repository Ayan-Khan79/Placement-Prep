#include<bits/stdc++.h>
using namespace std;

string reverseString(string &st){
    stack<char> s;
    string ans="";
    for(auto ch:st){
        s.push(ch);
    }
    while(!s.empty()){
        char c = s.top();
        s.pop();
        ans+=c;
    }
    return ans;
}

int main(){
    string st;
    cout<<"Enter the string here"<<endl;
    cin>>st;
    string ans = reverseString(st);
    cout<<ans<<endl;
    return 0;
}