#include<bits/stdc++.h>
using namespace std;

vector<int> findIndex(vector<int> &arr){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==i+1){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans=findIndex(arr);
    cout<<"Printing number equal to their index"<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}