#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findTripletbyHash(vector<int> &nums){
    int len = nums.size();
        set<vector<int>> st;
        for(int i=0;i<len;i++){
            set<int> hash;
            for(int j=i+1;j<len;j++){
                int third = -(nums[i]+nums[j]);
                if(hash.find(third) != hash.end()){
                    vector<int> temp = {nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hash.insert(nums[j]);
            }
        }   
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

vector<vector<int>> findTripletbypointers(vector<int> &nums){
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1]) continue;

            int j=i+1;
            int k=n-1;

            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];

                if(sum>0){
                    k--;

                }
                else if(sum<0){
                    j++;
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
            }
        }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans = findTripletbypointers(arr);
    cout<<"Printing the unique triplets that equals to 0"<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}