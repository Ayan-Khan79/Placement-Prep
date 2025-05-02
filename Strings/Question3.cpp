#include<bits/stdc++.h>
using namespace std;

bool checkRotation(string &s1, string &s2){
    //Brute Force Approach
    // string temp = s1 + s1;
    // if(s1.find(s2) != std::string::npos){
    //     return true;
    // }
    // return false;

    //Optimised Approach
    string temp = s1 + s1;
    int j=0;
    int count=0;
    for(int i=0;i<temp.size();i++){
        if(j==s2.size()){
            break;
        }
        if(temp[i]==s2[j]){
            count++;
            j++;
        }
    }
    if(count==s2.size()){
        return true;
    }
    return false;
}

int main(){

    string s1,s2;
    cout<<"Enter the value of both strings"<<endl;
    cin>>s1>>s2;
    bool ans = checkRotation(s1,s2);
    if(ans){
        cout<<"s2 is the rotated version of s1"<<endl;
    }
    else{
        cout<<"s2 is not the rotated version of s1"<<endl;
    }
    return 0;
}