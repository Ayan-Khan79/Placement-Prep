#include<bits/stdc++.h>
using namespace std;

vector<int> findIndex(vector<int> &arr,int x){
    vector<int> ans;
    int first=-1;
    int last=-1;
    int i=0;
    int j=arr.size()-1;

    //Finding first Occurnce
    while(i<=j){
        int mid = i+ (j-i)/2;

        if(arr[mid]==x){
            first=mid;
            j=mid-1;
        }
        else if(arr[mid]>x){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    //Finding Last Occurence
    i=0;
    j=arr.size()-1;

    while(i<=j){
       int mid = i+ (j-i)/2;

        if(arr[mid]==x){
            last=mid;
            i=mid+1;
        }
        else if(arr[mid]>x){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
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
    int x;
    cout<<"Enter the element to find first and last occurence of "<<endl;
    cin>>x;

    vector<int> ans = findIndex(arr,x);

    cout<<"The first and last ocuurence of "<<x<<" is :"<<endl;
    for(auto it:ans){
        if(it==-1){
            cout<<"Element does not exist"<<it<<" ";
        }
        else{
            cout<<it<<" ";
        }
    }
    return 0;
}