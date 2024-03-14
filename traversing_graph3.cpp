#include <iostream>
#include <vector>
using namespace std;

void traverse(int row, int col, vector<vector<int>> mat, vector<vector<int>>& visited) {
    int rows = mat.size();
    int cols = mat[0].size();

    visited[row][col] = 1;
    cout << row << "," << col << endl;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for (int i = 0; i < 4; i++) {
        int next_i = row + dx[i];
        int next_j = col + dy[i];

        if (next_i >= 0 && next_i < rows && next_j >= 0 && next_j < cols && !visited[next_i][next_j]) {
            traverse(next_i, next_j, mat, visited);
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
                traverse(i, j, mat, visited);
            }
        }
    }

    return 0;
}