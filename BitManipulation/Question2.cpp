#include<bits/stdc++.h>
using namespace std;

int numberOfFlips(int a, int b){
    int count=0;
    int xorres = a^b;
    while(xorres){
        if(xorres&1){
            count++;
        }
        xorres = xorres >>1;
    } 
    return count;
}

int main(){
    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    int ans = numberOfFlips(a,b);
    cout<<"The number of bits flips needed to make a equal to b is/are "<<ans<<endl;
    return 0;

}