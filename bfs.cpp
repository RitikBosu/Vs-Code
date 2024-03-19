#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int startNode, vector<vector<int>>& graph) {
    int n = graph.size();
    vector<bool> visited(n, false);

    queue<int> q;
    q.push(startNode);
    visited[startNode] = true;

    while (!q.empty()) {
        int currNode = q.front();
        q.pop();

        cout << currNode << " ";

        for (int i = 0; i < n; i++) {
            if (graph[currNode][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
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