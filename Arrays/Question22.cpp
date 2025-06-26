#include<bits/stdc++.h>
using namespace std;

bool checkSubset(vector<int> &arr1, vector<int> &arr2){
    map<int,int> mp1;
    for(auto it:arr1){
        mp1[it]++;
    }
    map<int,int> mp2;
    for(auto it:arr2){
        mp2[it]++;
    }

    for(int i=0;i<arr2.size();i++){
        if(mp1[arr2[i]]<mp2[arr2[i]]){
            return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cout<<"Enter the size of both arrays"<<endl;
    cin>>n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout<<"Enter the element of first array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the element of second array"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    bool ans = checkSubset(arr1,arr2);
    
    if(ans){
        cout<<"Array 2 is the subset of Array 1"<<endl;
    }
    else{
        cout<<"Array 2 is not the subset of Array 1"<<endl;
    }
    return 0;
}