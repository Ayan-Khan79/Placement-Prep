#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the values of a , b and c"<<endl;
    cin>>a>>b>>c;
    cout<<"Printing the middle number in these three : ";
    if((a>b) == (a<c)){
        cout<<a<<endl;
    }
    else if((b>a) == (b<c)){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
    return 0;
}