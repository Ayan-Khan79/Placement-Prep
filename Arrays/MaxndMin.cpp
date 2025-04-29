#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &nums){
    int ans = INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>ans){
            ans = nums[i];
        }
    }
    return ans;
}

int findmin(vector<int> &nums){
    int ans = INT_MAX;
    for(int it:nums){
        if(it<ans){
            ans = it;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the number of Elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int max = findMax(nums);
    int min = findmin(nums);

    cout<<"The max num is "<<max<<" and the min num is "<<min<<endl;
    return 00;
}