#include<bits/stdc++.h>
using namespace std;

bool findPair(vector<int> &arr, int x){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int i=0;
    int j=1;

    while(j<n){
        int diff = arr[j]-arr[i];
        if(diff==x){
            return true;
        }
        else if(diff<x){
            j++;
        }
        else{
            i++;
        }
        if(i==j) j++;
    }
    return false;

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
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    bool ans = findPair(arr,x);

    if(ans){
        cout<<"Pair exist"<<endl;
    }
    else{
        cout<<"Pair doesnt exist"<<endl;
    }
    return 0;
}