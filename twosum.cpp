#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(i);
            for(int j=i+1;j<nums.size();j++){
                if((nums[ans[0]]+nums[j])==target){
                    ans.push_back(j);
                    return ans;
                }
            }
            ans.pop_back();

        }
        
        return ans;
    }
};
int main()
{
    vector<int>v={2,7,11,15};
    Solution s;
    s.twoSum(v,9);
}