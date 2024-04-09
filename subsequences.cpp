#include<bits/stdc++.h>
using namespace std;
void solve(string str,string output,int index,vector<string>&ans){
    // BASE CASE:-
    if(index>=str.length()){
        if(output.size()>0)
        // by doing this space character is not taken at ans[0].
        ans.push_back(output);
        return;
    }

    // exclude:-
    solve(str,output,index+1,ans);

    // include
    output.push_back(str[index]);
    solve(str,output,index+1,ans);
}
vector<string> subsequences(string str){
    vector<string>ans;
    string output="";
    int index=0;
    solve(str,output,index,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return ans;
}
int main()
{
    string s;
    cout<<"enter the string\n";
    cin>>s;
    cout<<"the subsequences of the string are\n";
    subsequences(s);
}