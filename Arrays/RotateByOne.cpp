#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &nums, int k){
    int n = nums.size();
    if(k==1){
        int i=0;
        int j=n-2;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        reverse(nums.begin(),nums.end());
        return;
    }
    else{
        int i=0;int j=n-k-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        reverse(nums.begin()+n-k,nums.end());
        reverse(nums.begin(),nums.end());
        return;
    }
}

int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    rotateArray(nums,k);
    cout<<"Printing Array by "<<k<<" steps"<<endl;
    for(auto it:nums){
        cout<<it<<" ";
    }
    return 0;
}