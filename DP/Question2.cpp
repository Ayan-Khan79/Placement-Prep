#include<bits/stdc++.h>
using namespace std;

int findways(vector<int> &coins, int i, int sum){
    if(sum == 0) return 1;
    if(i>=coins.size()) return 0;

    int inc = 0;
    if(coins[i]<=sum){
        inc = findways(coins,i,sum-coins[i]);
    }
    int exc = findways(coins,i,sum);

    return inc + exc;
}

int findwaysbyDp(vector<int>&coins, int i, int sum,vector<vector<int>> &dp){
    if (sum == 0) return 1;   
    if(i>=coins.size()){
        return 0;
    }
    
    if(dp[i][sum] != -1){
        return dp[i][sum];
    }
    int inc = 0;
    if(coins[i]<=sum){
        inc = findwaysbyDp(coins,i,sum-coins[i],dp);
    }
    int exc = findwaysbyDp(coins,i+1,sum,dp);
    
    return  dp[i][sum] = inc+exc;
}

int main(){
    int n;
    cout<<"Enter the size of  coins array"<<endl;
    cin>>n;
    vector<int> coins(n);
    cout<<"Enter the value of coins"<<endl;
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int sum;
    cout<<"Enter the value of target sum"<<endl;
    cin>>sum;
    int i=0;
    vector<vector<int>> dp(n,vector<int>(sum+1,-1));
    int ans = findwaysbyDp(coins,i,sum,dp);
    cout<<"Total number of ways to make sum with coins are "<<ans<<endl;
    return 0;
}