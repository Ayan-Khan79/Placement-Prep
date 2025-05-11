#include<bits/stdc++.h>
using namespace std;

vector<int> printSpiral(vector<vector<int>> &arr){
    int n=arr.size();
    int m=arr[0].size();
    
    int count=0;
    int finalCount=n*m;

    int startrow=0;
    int startcol=0;
    int endrow=n-1;
    int endcol=m-1;

    vector<int> ans;

    while(count<finalCount){
        //Printing first row
        for(int i=startcol;i<=endcol && count<finalCount;i++){
            ans.push_back(arr[startrow][i]);
            count++;
        }
        startrow++;

        //Prining last column
        for(int i=startrow;i<=endrow && count<finalCount;i++){
            ans.push_back(arr[i][endcol]);
            count++;
        }
        endcol--;

        //Printing last Row
        for(int i=endcol;i>=startcol && count<finalCount;i--){
            ans.push_back(arr[endrow][i]);
            count++;
        }
        endrow--;

        //Printing first Column
        for(int i=endrow;i>=startrow && count<finalCount;i--){
            ans.push_back(arr[i][startcol]);
            count++;
        }
        startcol++;
    }
    return ans;
}

int main(){
    int n,m;
    cout<<"Enter the dimension of 2d matrix"<<endl;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        cout<<"Entert the elemets for "<<i<<" row"<<endl;
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> ans=printSpiral(arr);
    cout<<"Printing elements in spiral"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}