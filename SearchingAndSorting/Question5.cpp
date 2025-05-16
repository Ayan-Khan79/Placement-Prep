#include<bits/stdc++.h>
using namespace std;

//Time Complexity-O(n)
//Space Complexity-O(n)
vector<int> findNumbersBySpace(vector<int> &arr){
    int n = arr.size();
    vector<int> hash(n+1,0);

    for(int i=0;i<=n;i++){
        hash[arr[i]]++;
    }
    int repeat=-1;
    int missing=-1;

    for(int i=1;i<=n;i++){
        if(hash[i]==2){
            repeat=i;
        }
        else if(hash[i]==0){
            missing=i;
        }

        if(repeat != -1 && missing != -1){
            break;
        }
    }
    return {repeat,missing};
}

//Time Complexity-O(n)
//Space Complexity -O(1)
vector<int> findNumbersByMaths(vector<int> &arr){
    int n = arr.size();

    long long s1=(n*(n+1))/2;
    long long s2=(n*(n+1)*(2*n+1))/6;

    long long s1n=0,s2n=0;

    for(int i=0;i<n;i++){
        s1n+=arr[i];
        s2n+=1LL * arr[i] * arr[i];
    }

    long long equa1 = s1n-s1; // repeat-missing
    long long equa2 = s2n-s2;
    equa2=equa2/equa1;

    long long repeat = (equa1 + equa2)/2;
    long long missing = repeat-equa1;

    return {(int)repeat,(int)missing};

}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the value of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = findNumbersByMaths(arr);
    cout<<"pritning Repeated and Missing number"<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}