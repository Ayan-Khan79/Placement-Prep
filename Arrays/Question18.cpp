#include<bits/stdc++.h>
using namespace std;

vector<int> findIndex(vector<int> &arr, int t){
    set<int> st;
    int i=0;
    int j=arr.size()-1;

    while(i<j){
        if(arr[i]+arr[j]==t){
            st.insert(i+1);
            st.insert(j+1);
        }
        if(arr[i]+arr[j]>t){
            j--;
        }
        else{
            i++;
        }
    }
    vector<int> ans;
    for(auto i:st){
        ans.push_back(i);
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array in sorted manner"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cout<<"Enter the value of target"<<endl;
    cin>>t;
    vector<int> ans = findIndex(arr,t);
    cout<<"Printing indices (1 based indexing)"<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}