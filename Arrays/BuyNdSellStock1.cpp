#include<bits/stdc++.h>
using namespace std;

int MaxProfit(vector<int> &arr){
    int n = arr.size();
    int mini = arr[0];
    int profit =0;
    for(int i=1;i<n;i++){
        int diff = arr[i]-mini;
        profit = max(profit,diff);
        mini = min(mini,arr[i]);
    }
    return profit;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = MaxProfit(arr);
    cout<<ans;
    return 0;
}