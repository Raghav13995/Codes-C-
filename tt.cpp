#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        int ans=INT_MAX;
        int count=0;
        for(int i=1;i<strs.size();i++){
            cout<<"1--------"<<count<<endl;
            for(int j=0;j<strs[i].size(),j<s.size();j++){
                if(s[j]==strs[i][j]){
                    count++;
                }
                else{
                    cout<<"ans3247-----"<<ans<<endl;
                    ans=min(count,ans);
                    cout<<"count--------"<<count<<endl;
                    cout<<"fuck ans"<<ans<<endl;
                    break;
                }
            }
            ans=min(count,ans);
            cout<<"ans--------"<<ans<<endl;
            count=0;
        }
        ans=min(count,ans);
        string final1="";
        for(int i=0;i<ans;i++){
            final1+=s[i];
        }
        cout<<final1<<"odhfoi"<<endl;
        return final1;
    }
};
int main() {
	int arr[10]={9,4,3,2,2};
    // cout<<arr.length();
    // sort(arr,arr+10);
    // for(auto it:arr){
    //     cout<<it<<" ";
    // }



    // vector<int>v{4,2,10,4,7};
    // // cout<<find(v.begin(),v.end(),2)-v.begin();
    // cout<<*max_element(v.begin(),v.end());




    vector<string>s{"flower","flow","flight"};
    Solution s2;
    s2.longestCommonPrefix(s);
}