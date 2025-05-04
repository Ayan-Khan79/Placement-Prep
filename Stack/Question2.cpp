#include<bits/stdc++.h>
using namespace std;


void insertAtBottom(stack<int> &st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int top = st.top();
    st.pop();
    insertAtBottom(st,val);
    st.push(top);
}

void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int top = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,top);
}

int main(){
    stack<int> st;
    cout<<"Push value to stack and to stop write -1"<<endl;
    int val;
    cin>>val;
    while(val!=-1){
        st.push(val);
        cin>>val;
    }
    reverseStack(st);
    cout<<"Stack after reversing"<<endl;
    while(!st.empty()){
        int val = st.top();
        cout<<val<<" ";
        st.pop();
    }
    return 0;
}