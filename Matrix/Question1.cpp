#include<bits/stdc++.h>
using namespace std;

void rotateBy90(vector<vector<int>> &arr){
    int n = arr.size();
    int m = arr[0].size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}

int main(){
    int n,m;
    cout<<"Enter the size of 2d matrix"<<endl;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter the elements of the matrix"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter elements for "<<i<<" row"<<endl;
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    rotateBy90(arr);
    cout<<"Matrix after rotating by 90 degree"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}