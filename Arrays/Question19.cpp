#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findPair(vector<int> &arr){
    set<vector<int>> st;
    sort(arr.begin(),arr.end());
    int i=0;
    int j=arr.size()-1;

    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum==0 && i!=j){
            vector<int> temp = {arr[i],arr[j]};
            st.insert(temp);
            i++;
            j--;
        }
        else if(sum>0){
            j--;
        }
        else{
            i++;
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the Array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements for the Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans = findPair(arr);
    cout<<"Printing the pairs whose sum is equal to 0 and unique pairs"<<endl;
    for(auto it:ans){
        for(auto num:it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}