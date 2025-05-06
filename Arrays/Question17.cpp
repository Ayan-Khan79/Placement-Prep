#include<bits/stdc++.h>
using namespace std;

double findMedian(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    double ans = 0.0;
    if(n%2==0){
        ans = (arr[n/2] + arr[n/2-1])/2.0;
    }
    else{
        ans=arr[n/2];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    double ans = findMedian(arr);
    cout<<"The median of given array is "<<ans<<endl;
    return 0;
}