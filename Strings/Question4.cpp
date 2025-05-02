#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string st){
    int i=0;
    int j=st.size()-1;

    while(i<=j){
        if(st[i] != st[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string st;
    cout<<"Enter the string here"<<endl;
    getline(cin,st);
    bool ans = checkPalindrome(st);
    if(ans){
       cout<<"String "<<st<<" is palindrome"<<endl;
    }
    else{
        cout<<"String "<<st<<" is not palindrome"<<endl;
    }
    return 0;
}