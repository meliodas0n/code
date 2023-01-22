#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool findElement(vector<vector<int>> &mat, int target) {
    int n = mat.size();
    if (n == 0) return false;
    int m = mat[0].size();

    int row = 0, col = m - 1;
    while (row < n && col >= 0) {
        if (mat[row][col] == target) return true;
        else if (mat[row][col] < target) col++;
        else row--;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << findElement(v, 8);
    return 0;
}