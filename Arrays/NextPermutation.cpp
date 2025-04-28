#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr){
    int n = arr.size();
    int index = -1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(arr.begin(),arr.end());
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(arr[i]>arr[index]){
                swap(arr[i],arr[index]);
                break;
            }
        }
        reverse(arr.begin() + index +1, arr.end());
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nextPermutation(arr);
    cout<<"Printing the next permutation"<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}