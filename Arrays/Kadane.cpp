#include<bits/stdc++.h>
using namespace std;

int findMaxSum(vector<int> &nums){
    int sum=nums[0];
    int currMax = nums[0];
    //This variation also handles if the all numbers are negative
    for(int i=1;i<nums.size();i++){
        sum=max(nums[i],sum+nums[i]);
        currMax = max(currMax,sum);
    }
    return currMax;
}

int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the values of Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = findMaxSum(nums);
    cout<<"The maximum sum of subarray is "<<ans<<endl;
    return 0;
}