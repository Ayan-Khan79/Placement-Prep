#include<bits/stdc++.h>
using namespace std;

void sort0n1n2(vector<int> &nums){
    int n = nums.size();
    int i=0;
    int j=n-1;
    int k=0;

    while(k<=j){
        if(nums[k]==0){
            swap(nums[k],nums[i]);
            i++;
            k++;
        }
        else if(nums[k]==2){
            swap(nums[k],nums[j]);
            j--;
        }
        else{
            k++;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort0n1n2(nums);
    cout<<"Printing array after sorting"<<endl;
    for(auto it: nums){
        cout<<it<<" ";
    }
    return 0;
}