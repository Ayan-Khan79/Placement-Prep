#include<bits/stdc++.h>
using namespace std;

bool checkPower(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    if(count>1){
        return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    bool ans = checkPower(n);
    if(ans){
        cout<<n<<" is power of 2"<<endl;
    }
    else{
        cout<<n<<" is not  power of 2"<<endl;
    }
    return 0;
}