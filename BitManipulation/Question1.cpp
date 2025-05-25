#include<bits/stdc++.h>
using namespace std;

int count1(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter a number here"<<endl;
    cin>>n;
    int ans = count1(n);
    cout<<"The number of 1 bits in "<<n<<" is "<<ans<<endl;
    return 0;
}