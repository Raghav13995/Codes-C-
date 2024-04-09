#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int x=1;
        for(int i=1;i<nums.size()+1;i++){
            if(nums[i]==nums[i-1]){
                x++;
                cout<<x<<endl;
                cout<<"count-"<<count<<endl;
            }
            else{
                if(x>count){
                    count=x;
                    x=1;
                }
            }
        }
        return count;
    }
};
int main()
{
    vector<int>num={2,2,1,1,1,2,2};
    Solution s1;
    cout<<"result:--  "<<s1.majorityElement(num);
}

