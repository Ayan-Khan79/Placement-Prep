#include<bits/stdc++.h>
using namespace std;

int findPerfectSquares(int n){
    int ans=0;
    for(int i=1;i<sqrt(n);i++){
        if(i*i<n){
            ans++;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int ans = findPerfectSquares(n);
    cout<<"Perfect squares from 1 to "<<n<<" are : "<<ans;
    return 0;
}