#include <iostream>
#include <vector>

using namespace std;

int count = 0;

bool isSafe(int row, int col, const vector<int>& positions) {
    for (int i = 0; i < col; i++) {
        if (positions[i] == row ||
            positions[i] - i == row - col ||
            positions[i] + i == row + col) {
            return false;
        }
    }
    return true;
}

void solveNQueens(int col, int N, vector<int>& positions) {
    if (col >= N) {
        count++;
        return;
    }

    for (int row = 0; row < N; row++) {
        if (isSafe(row, col, positions)) {
            positions[col] = row;
            solveNQueens(col + 1, N, positions);
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> positions(N);
    solveNQueens(0, N, positions);

    cout << count << endl;
    return 0;
}
