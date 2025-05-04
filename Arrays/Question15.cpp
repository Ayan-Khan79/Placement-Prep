#include<bits/stdc++.h>
using namespace std;

vector<int> findCommonByThreePointers(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
                int i=0;
                int j=0;
                int k=0;
                vector<int> ans;
                set<int> st;
                
                
                while(i<arr1.size() && j<arr2.size() && k<arr3.size()){
                    if(arr1[i] == arr2[j] && arr2[j]==arr3[k]){
                        st.insert(arr1[i]);
                        i++;
                        j++;
                        k++;
                    }
                    else if(arr1[i]<arr2[j]){
                        i++;
                    }
                    else if(arr2[j]<arr3[k]){
                        j++;
                    }
                    else{
                        k++;
                    }
                }
                for(auto i : st){
                    ans.push_back(i);
                }
     return ans;
}

bool binarySearch(vector<int> &arr, int target){
    int s=0;
    int e=arr.size()-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==target){
            return true;
        }
        if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return false;
}

vector<int> findCommonByBinarySearch(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
    set<int> st;
    for(int i=0;i<arr1.size();i++){
        int val=arr1[i];
        bool ans1 = binarySearch(arr2,val);
        bool ans2 = binarySearch(arr3,val);

        if(ans1 && ans2){
            st.insert(arr1[i]);
        }
    }
    vector<int> ans;
    if(st.size()==0){
        ans.push_back(-1);
        return ans;
    }
    for(auto it:st){
        ans.push_back(it);
    }
    return ans;
}

int main(){
    int n1,n2,n3;
    cout<<"Enter the size of all three arrays"<<endl;
    cin>>n1>>n2>>n3;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    vector<int> arr3(n3);

    cout<<"Enter the values of first array"<<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
     cout<<"Enter the values of second array"<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
     cout<<"Enter the values of third array"<<endl;
    for(int i=0;i<n3;i++){
        cin>>arr3[i];
    }
    vector<int> ans = findCommonByBinarySearch(arr1,arr2,arr3);
    cout<<"Printing common in all arrays and if output is -1 then there is no common"<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}