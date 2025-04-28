#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeArray(vector<vector<int>> &arr){
    vector<vector<int>> ans;
    vector<int> prev = arr[0];

    for(int i=1;i<arr.size();i++){
        vector<int> temp = arr[i];

        if(prev[1]>=temp[0]){
            prev[1] = max(prev[1],temp[1]);
        }
        else{
            ans.push_back(prev);
            prev = temp;
        }
    }
    ans.push_back(prev);
    return ans;
}

int main(){
    int n;
    int m;
    cout<<"Enter the size of 2d array"<<endl;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter the values for the array "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> ans = mergeArray(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}