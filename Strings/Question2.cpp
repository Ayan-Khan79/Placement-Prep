#include<bits/stdc++.h>
using namespace std;

void printDupliacate(string &st){
    unordered_map<char,int> mp;

    for(int i=0;i<st.size();i++){
        mp[st[i]]++;
    }

    for(auto it:mp){
        if(it.second >1){
            cout<<it.first<<" count = "<<it.second<<endl;
        }
    }
}

int main(){
    string st;
    cout<<"Enter a string here"<<endl;
    getline(cin,st);
    printDupliacate(st);
    return 0;
}