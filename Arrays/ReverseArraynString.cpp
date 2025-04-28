#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr){
    int i=0;
    int e = arr.size()-1;

    while(i<=e){
        swap(arr[i],arr[e]);
        i++;
        e--;
    }
}

void reverseString(string &st){
    int i=0;
    int e = st.size()-1;

    while(i<=e){
        swap(st[i],st[e]);
        i++;
        e--;
    }
}

int main(){
    int n;
    cout<<"Enter the size of aarray"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr);
    cout<<"Printing the reverse of Array"<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    string st;
    cout<<"Enter the string"<<endl;
    cin>>st;
    reverseString(st);
    cout<<"Printing the reverse of String"<<endl;
    cout<<st<<endl;


}