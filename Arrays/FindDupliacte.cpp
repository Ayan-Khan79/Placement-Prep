// Leetcode 287
#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr){
     int slow = arr[0];
        int fast = arr[0];
        
        // Phase 1: Find the intersection point
        do {
            slow = arr[slow];
            fast = arr[arr[fast]];
        } while (slow != fast);
        
        // Phase 2: Find the entrance to the cycle
        slow = arr[0];
        while (slow != fast) {
            slow = arr[slow];
            fast = arr[fast];
        }
        
        return slow;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = findDuplicate(arr);
    cout<<ans;
    
    return 0;
}