#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sortMatrix(vector<vector<int>> &arr){
    int n=arr.size();
    int m=arr[0].size();

    vector<int> temp(n*m);
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[k]=arr[i][j];
            k++;
        }
    }
    sort(temp.begin(),temp.end());
    vector<vector<int>> ans(n,vector<int>(m));
    int l=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j]=temp[l];
            l++;
        }
    }
    return ans;
}

int main(){
    int n,m;
    cout<<"Enter the dimensions of 2d array"<<endl;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter the elements for the matrix"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the elements for "<<i<<" row"<<endl;
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> ans = sortMatrix(arr);
    cout<<"Matrix after sorting"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}