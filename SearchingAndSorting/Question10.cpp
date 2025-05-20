#include<bits/stdc++.h>
using namespace std;

vector<int> findProduct(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n);
    int preproduct=1;
    for(int i=0;i<n;i++){
        ans[i]=preproduct;
        preproduct*=arr[i];
    }
    int postproduct = 1;
    for(int i=n-1;i>=0;--i){
        ans[i]*=postproduct;
        postproduct*=arr[i];
    }
    return ans;

}

int  main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elemenst of Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = findProduct(arr);
    cout<<"Printing the product Array"<<endl;
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}