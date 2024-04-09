#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>num,vector<vector<int>>&ans,int index){

    // base case:-
    if(index>=num.size()){
        ans.push_back(num);
        return;
    }
    for(int j=index;j<num.size();j++){
        swap(num[index],num[j]);
        solve(num,ans,index+1);
        // backtrack:-
        //cout<<"hi"<<endl;
        swap(num[index],num[j]);
    }
}
vector<vector<int>>permute(vector<int>&num){
    cout<<"hi"<<endl;
    vector<vector<int>>ans;
    int index=0;
    solve(num,ans,index);
    //cout<<"hi"<<endl;
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

    return ans;
}
int main()
{
    vector<int>num;
    cout<<"enter the size of vector\n";
    int n;
    cin>>n;
    cout<<"enter the value of vector\n";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    //cout<<"hi"<<endl;
    permute(num);
    //cout<<"hi"<<endl;
    return 0;
}