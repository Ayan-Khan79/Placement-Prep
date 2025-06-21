#include<bits/stdc++.h>
using namespace std;

int findways(string &s1, string &s2, int i, int j){
    if(i>=s1.size() || j>=s2.size()){
        return 0;
    }
    int ans = 0;
    if(s1[i]==s2[j]){
        ans = 1 + findways(s1,s2,i+1,j+1);
    }
    else{
        ans = max(findways(s1,s2,i+1,j),findways(s1,s2,i,j+1));
    }
    return ans;
}

int findwaysbyDp(string &s1, string &s2, int i, int j,vector<vector<int>> &dp){
    if(i>=s1.size() || j>=s2.size()){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int ans = 0;
    if(s1[i]==s2[j]){
        ans = 1 + findwaysbyDp(s1,s2,i+1,j+1,dp);
    }
    else{
        ans = max(findwaysbyDp(s1,s2,i+1,j,dp),findwaysbyDp(s1,s2,i,j+1,dp));
    }
    return  dp[i][j] =  ans;
}

int main(){
    string s1,s2;
    cout<<"Enter the two strings "<<endl;
    cin>>s1>>s2;
    int i=0;
    int j=0;
    vector<vector<int>> dp(s1.size()+1,vector<int>(s2.size()+1,-1));
    int ans = findwaysbyDp(s1,s2,i,j,dp);
    cout<<"Longest Common Subsequences are prsent are : "<<ans<<endl;
    return 0;
}