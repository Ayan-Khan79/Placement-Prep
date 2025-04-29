#include<bits/stdc++.h>
using namespace std;

int findkSmallest(vector<int> nums, int k){
    sort(nums.begin(),nums.end());
    if(k>nums.size()){
        return -1;
    }
    return nums[k-1];
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the values of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter the value of k"<<endl;
    int k;
    cin>>k;
    int ans = findkSmallest(nums,k);
    if(ans==-1){
        cout<<"K is larger than array length";
        return 0;
    }
    cout<<"Kth smallest number in array is "<<ans<<endl;
    return 0;
}