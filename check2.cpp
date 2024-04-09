#include <bits/stdc++.h> 
using namespace std;
void prepareAdjList(unordered_map<int,set<int>> &adjList,
            vector<pair<int, int>> edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        adjList[u].insert(v);
        // adjList[v].insert(u);
    }
}

void bfs(unordered_map<int,set<int>> adjList,
                unordered_map<int,bool>&visited,
                            vector<int>&ans,int node){
    queue<int>q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int frontNode=q.front();
        q.pop();

        // store frontNode into Ans:- 
        ans.push_back(frontNode);

        // traverse all neighbours of front Node:
        for(auto i:adjList[frontNode]){
            if(!visited[i]){ 
                q.push(i);
                visited[i]=1;
            }
        }
    }
}
void bfsTraversal(vector<int>ans){
    for(auto i:ans){
        cout<<i<<" ";
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int,set<int>> adjList;
    vector<int>ans;
    unordered_map<int,bool>visited;

    prepareAdjList(adjList,edges);

    // Traverse all components of graph:-
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(adjList,visited,ans,i);
        }
    }
    bfsTraversal(ans);
    return ans;
}
int main(){
    // vector<pair<int,int>>edges={{0,1},{0,2},
    //             {0, 3},{1, 4},{1, 7},{2, 5},{3, 6}};
    // vector<pair<int,int>>edges={{0,1},{0,2},{1,2},{0,3}};
    vector<pair<int,int>>edges={{0,1},{0,2},{0,3},{1,4},{2,5}};
    int vertex=4;
    BFS(vertex,edges);
}
