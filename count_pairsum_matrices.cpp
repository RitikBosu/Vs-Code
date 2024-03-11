#include <iostream>
#include <vector>

using namespace std;

int countPairsWithSum(vector<vector<int>>& matrix, int targetSum) {
    int count = 0;
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = j + 1; k < cols; ++k) {
                if (matrix[i][j] + matrix[i][k] == targetSum) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int targetSum = 13;
    int count = countPairsWithSum(matrix, targetSum);

    cout << "The number of pairs with sum " << targetSum << " is: " << count << endl;

    return 0;
}