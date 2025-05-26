#include<bits/stdc++.h>
using namespace std;

int findPos(int n){
    int count=0;
    int pos=0;
    while(n!=0){
        pos++;
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    if(count>1 || count==0){
        return -1;
    }
    return pos;
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int ans = findPos(n);

    if(ans==-1){
        cout<<"There more than 1 set bits in "<<n<<endl;
    }
    else{
        cout<<"The position at which set bit is present is "<<ans<<endl;
    }
    return 0;
}