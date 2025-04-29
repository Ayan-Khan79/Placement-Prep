#include<bits/stdc++.h>
using namespace std;

void moveNegative(vector<int> &nums){
    int n = nums.size();
    int i=0;
    int j=n-1;
    int k=0;

    while(k<=j){
        if(nums[k]<0){
            swap(nums[k],nums[i]);
            i++;
            k++;
        }
        else if(nums[k]>0){
            swap(nums[k],nums[j]);
            j--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    moveNegative(nums);
    cout<<"Pritning the array after moving negative to front"<<endl;
    for(auto it :nums){
        cout<<it<<" ";
    }
    return 0;
}