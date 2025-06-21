#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int i, int j){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string findLongestPlaindrom(string &s){
    string ans = "";
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(isPalindrome(s,i,j)){
                string t = s.substr(i,j-i+1);
                ans = t.size()>ans.size() ? t:ans;
            }
        }
    }
    return ans;
}

int main(){
    string t;
    cout<<"Enter the value of string"<<endl;
    cin>>t;

    string ans = findLongestPlaindrom(t);
    cout<<"The longest valid palindromic substring in "<<t<<" is "<<ans;
    return 0;
}