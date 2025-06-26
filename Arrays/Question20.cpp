#include<bits/stdc++.h>
using namespace std;

int findMinLength(vector<int> &arr, int x){
    int ans = INT_MAX;
    int i=0;
    int j=0;
    int n = arr.size();
    int sum = 0;
    while(j<n){
        sum +=arr[j];

        while(sum>x){
            int len = j-i+1;
            ans = min(ans,len);
            sum-=arr[i];
            i++;
        }
        j++;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the value of target sum"<<endl;
    cin>>x;

    int ans = findMinLength(arr,x);
    cout<<"The smallest subarray with sum "<<x<<" is of length "<<ans<<endl;
    return 0;
}