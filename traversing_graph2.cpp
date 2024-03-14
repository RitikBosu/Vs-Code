#include <iostream>
#include <bits/stdtr1c++.h>
#include <vector>
using namespace std;

void level_traverse(int row, int col, vector<vector<int>> mat, vector<vector<int>>& visited) {
    visited[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        cout << curr.first << ", " << curr.second << endl;
        q.pop();

        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};

        for (int i = 0; i < 4; i++) {
            int next_i = curr.first + dx[i];
            int next_j = curr.second + dy[i];

            if (next_i >= 0 && next_i < row && next_j >= 0 && next_j < col && !visited[next_i][next_j]) {
                q.push({next_i, next_j});
                visited[next_i][next_j] = 1;
            }
        }
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    int rows = mat.size();
    int cols = mat[0].size();

    vector<vector<int>> visited(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (!visited[i][j]) {
                level_traverse(i, j, mat, visited);
            }
        }
    }

    return 0;
}