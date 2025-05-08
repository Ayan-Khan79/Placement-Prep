#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int target){
    int s=0;
    int e=arr.size()-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid]==target){
            return true;
        }
        if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return false;
}

bool findAns(vector<vector<int>> &arr, int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(binarySearch(arr[i],target)){
            return true;
        }
    }
    return false;
}

int main(){
    int n,m;
    cout<<"Enter the size of 2d matrix"<<endl;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter the elements of the matrix"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the elements for "<<i<<" row"<<endl;
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter the target to find"<<endl;
    cin>>target;
    bool ans = findAns(arr,target);
    if(ans){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }
    return 0;
}