#include<bits/stdc++.h>
using namespace std;

void SortWithoutSpace(vector<int> &arr1, vector<int> &arr2){
    int i=arr1.size()-1;
    int j=0;

    while(i>=0 && j<arr2.size()){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            i--;
            j++;
        }
        else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
}

int main(){
    int n,m;
    cout<<"Enter the size of the both arrays"<<endl;
    cin>>n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout<<"Enter the lements of first array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the lements of second array"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    SortWithoutSpace(arr1,arr2);

    cout<<"Printing arrays after sorting without using extra space"<<endl;
    for(auto it:arr1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:arr2){
        cout<<it<<" ";
    }

    return 0;
}