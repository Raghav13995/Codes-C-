#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        string x;
        int i=0;
        for(;i<s.length();i++){
            if(s[i]==' '){
                 
                ans.push_back(x);
                cout<<"x-"<<x<<endl;
                x.clear();
            }else{
                x=x+s[i];
            }
        }
        cout<<"x-"<<x<<endl;
        if(s[s.length()-1]!=' '){
            ans.push_back(x);
        }
        string final1;
        for(int i=ans.size()-1;i>=0;i--){
            final1=final1+ans[i]+' ';
        }
        int k=0;
        while(final1[k]==' '){
            final1.erase(final1.begin());
        }
        int j=final1.size()-1;
        while(final1[j]==' '){
            final1.erase(final1.end()-1);
            j--;
        }
        for(int i=0;i<final1.length();i++){
            cout<<final1[i]<<endl;
        }
        return final1;
    }
};
int main()
{
    Solution s;
    string v="a good   example";
    s.reverseWords(v);
    
}