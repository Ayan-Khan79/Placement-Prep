#include<bits/stdc++.h>
using namespace std;

int countSize(vector<int> &a, vector<int> &b){
    unordered_set<int> st;
    for(auto i:a){
        st.insert(i);
    }
    for(auto j:b){
        st.insert(j);
    }

    return st.size();
}

int main(){
    int n,m;
    cout<<"Enter the size of both arrays"<<endl;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    cout<<"Enter the values for the first array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the values for second array"<<endl;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    int ans = countSize(a,b);
    cout<<"The size of merged array is "<<ans<<endl;
    return 0;
}