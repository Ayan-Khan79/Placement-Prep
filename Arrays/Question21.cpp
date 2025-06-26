#include<bits/stdc++.h>
using namespace std;

bool isPali(string &s){
    int i=0;
    int j=s.size()-1;
    while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool checkPali(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        string temp = to_string(arr[i]);
        if(!isPali(temp)){
            return false;
        }
    }
    return true;

}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans = checkPali(arr);
    if(ans){
        cout<<"This array is palindrome array"<<endl;
    }
    else{
        cout<<"This array is not a palindrome array"<<endl;
    }

    return 0;
}