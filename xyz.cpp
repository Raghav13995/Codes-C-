#include<bits/stdc++.h>
using namespace std;
int findJudge(int n, vector<vector<int>>& trust) {
        map<int,set<int>>m;
        for(int i=0;i<trust.size();i++){
            int last=trust[i].size()-1;
            for(int j=0;j<last;j++){
                m[trust[i][last]].insert(trust[i][j]);
            }
        }
        for(auto i:m){
            cout<<"size-"<<i.second.size()<<endl;
            cout<<"mapped with-"<<i.first<<endl;
            for(auto j:i.second){
                cout<<"*"<<j;
            }
            cout<<endl;
        }
        for(auto i:m){
            if(i.second.size()==n-1){
                return i.first;
            }
        }
        return -1;
    }
int main()
{
    int n=3;
    vector<vector<int>>v={{1,3},{2,3},{3,1}};
    cout<<findJudge(n,v);
}