#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool bfs(int src, vector<int> adj[], int v){
    queue<pair<int,int>>q;
    vector<int> visited(v,0);
    q.push({src,-1});
    visited[src]=1;
    while(!q.empty()){
        int curr=q.front().first;
        int parent=q.front().second;
        q.pop();
        cout<<curr<<" ";
        for(auto nbr:adj[curr]){
            if (!visited[nbr]){
                visited[nbr]=1;
                q.push({nbr,curr});
            }
            else if(nbr!=parent){
                return true;
            }
        }
    }
    return false;
}
int main() {
    vector<vector<int>> graph = {
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0}
    };

    int startNode = 0;

    bfs(startNode, graph);

    return 0;
}