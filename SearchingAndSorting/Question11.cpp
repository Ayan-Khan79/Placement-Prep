#include<bits/stdc++.h>
using namespace std;

bool findNum(int a, int b, int c){
    for(int i=a;i<=b;i+=c){
        if(i==b){
           return true;
            break;
        }
    }
    return false;
}

int main(){
    int a,b,c;
    cout<<"Enter the value of starting number , number to found and common diffrence"<<endl;
    cin>>a>>b>>c;
    bool ans = findNum(a,b,c);
    if(ans){
        cout<<b<<" exists in the series"<<endl;
    }
    else{
        cout<<b<<" does not exits in the series"<<endl;
    }
    
    return 0;
}