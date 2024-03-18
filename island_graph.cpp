#include <iostream>
#include <vector>
using namespace std;

void traverse(int row, int col, vector<vector<int>>& mat, vector<vector<bool>>& visited) {
    int rows = mat.size();
    int cols = mat[0].size();

    visited[row][col] = true;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for (int i = 0; i < 4; i++) {
        int next_i = row + dx[i];
        int next_j = col + dy[i];

        if (next_i >= 0 && next_i < rows && next_j >= 0 && next_j < cols && mat[next_i][next_j] == 1 && !visited[next_i][next_j]) {
            traverse(next_i, next_j, mat, visited);
        }
    }
}

int countIslands(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();

    vector<vector<bool>> visited(rows, vector<bool>(cols, false));

    int islandCount = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 1 && !visited[i][j]) {
                islandCount++;
                traverse(i, j, mat, visited);
            }
        }
    }

    return islandCount;
}

int main() {
    vector<vector<int>> mat = {
        {1, 1, 0, 1, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1},
        {1, 0, 1, 0, 1}
    };

    int islandCount = countIslands(mat);

    cout << "Number of islands: " << islandCount << endl;

    return 0;
}