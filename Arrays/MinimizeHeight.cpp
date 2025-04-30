#include<bits/stdc++.h>
using namespace std;

int findMinHeight(vector<int> &arr, int k){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int diff = arr[n-1]-arr[0];
    int mini,maxi;
    for(int i=1;i<n;i++){
        if(arr[i]<k){
            continue;
        }
        maxi = max(arr[n-1]-k,arr[i-1]+k);
        mini = min(arr[0]+k,arr[i]-k);
        diff = min(diff,maxi-mini);
    }
    return diff;
}

int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    int ans = findMinHeight(arr,k);
    cout<<"The minimum height between max and min tower is "<<ans<<endl;
    return 0;
}