#include<bits/stdc++.h>
using namespace std;

int findEle(vector<int> &arr, int k, int x){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x,k;
    cout<<"Enter the value of element to search  and steps of element diffrence"<<endl;
    cin>>x>>k;
    int ans = findEle(arr,k,x);
    cout<<ans;
    return 0;
}