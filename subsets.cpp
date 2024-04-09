#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
    void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>>&ans){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        // exclude
        solve(nums,output,index+1,ans);

        // include
        output.push_back(nums[index]);
        solve(nums,output,index+1,ans);
    }
    
    public:
     vector<vector<int>> subsets(vector<int>&nums){
    vector<vector<int>>ans;
    vector<int>output;
    int index=0;
    solve(nums,output,index,ans);
    cout<<"size of vector ANS "<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<"size of inside vector "<<ans[i].size()<<" ";
        cout<<"{";
        for(int j=0;j<ans[i].size();j++){
            if(j==ans[i].size()-1){
                cout<<ans[i][j];
            }
            else{
            cout<<ans[i][j]<<" ";
            }
        }
        cout<<"}";
        cout<<endl;
    }
    //cout<<ans[3].size();
    return ans;
    }
};
int main(){
    Solution s;
    vector<int>nums;
    cout<<"enter the size of vector\n";
    int n;  
    cin>>n;
    cout<<"enter the value of vector"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    s.subsets(nums);
}