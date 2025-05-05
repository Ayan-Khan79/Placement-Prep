#include<bits/stdc++.h>
using namespace std;

void sortAlternate(vector<int> &arr){
    int n=arr.size();
    vector<int> pos;
    vector<int> neg;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    int i=0;
    int j=0;
    int k=0;

    while(i<pos.size() && j<neg.size()){
        if(k%2==0){
            arr[k]=pos[i];
            i++;
            k++;
        }
        else{
            arr[k]=neg[j];
            k++;
            j++;
        }
    }

    while(i<pos.size()){
        arr[k++]=pos[i++];
    }
    while(j<neg.size()){
        arr[k++]=neg[j++];
    }
}

int main(){

    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortAlternate(arr);
    cout<<"Printing array after rearranging  them alternatively"<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}