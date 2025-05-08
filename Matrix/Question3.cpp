#include<bits/stdc++.h>
using namespace std;

int findMax1(vector<vector<int>> &arr){
    int n = arr.size();
    int m = arr[0].size();

    int ans=-1;
    int maxcount=INT_MIN;
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>maxcount){
            ans=i;
            maxcount=count;
        }
    }
    return ans;
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
    int ans = findMax1(arr);
    cout<<"The max number of 1 are present in "<<ans+1<<" row"<<endl;
    return 0;
}