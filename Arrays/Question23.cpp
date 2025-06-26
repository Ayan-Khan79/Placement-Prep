#include<bits/stdc++.h>
using namespace std;

int findcount(vector<int> &arr, int k){
    int n = arr.size();
    map<int,int> mp;
    for(auto it:arr){
        mp[it]++;
    }
    int count=0;
    for(auto it:mp){
        if(it.second > n/k){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    int ans = findcount(arr,k);

    cout<<"Elements whose count are more than n/k times : "<<ans<<endl;
    return 0;
}