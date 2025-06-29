#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int mid, int low, int high){
    int count=0;
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            count+= (mid-left+1);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return count;
}

int mergeSort(vector<int> &arr, int low, int high){
    int count=0;
    if(low>=high){
        return count;
    }
    int mid = low + (high-low)/2;
    count+=mergeSort(arr,low,mid);
    count+=mergeSort(arr,mid+1,high);
    count+=merge(arr,mid,low,high);
    return count;
}

int findCount(vector<int> &arr){
    int low = 0;
    int high = arr.size()-1;

    return mergeSort(arr,low,high);
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

    int count = findCount(arr);
    cout<<"Total no of count inversion in this array is/are : "<<count;
    return 0;
}