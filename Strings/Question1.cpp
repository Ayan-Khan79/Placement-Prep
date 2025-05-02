#include<bits/stdc++.h>
using namespace std;

void reverseString(string &st){
    int i=0;
    int j=st.size()-1;

    while(i<=j){
        swap(st[i],st[j]);
        i++;
        j--;
    }
}

int main(){
    string st;
    cout<<"Enter a string here"<<endl;
    getline(cin,st);
    reverseString(st);
    cout<<"The reverse of string is "<<st<<endl;
    return 0;
}