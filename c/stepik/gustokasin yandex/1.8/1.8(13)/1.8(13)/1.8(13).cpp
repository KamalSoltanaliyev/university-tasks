#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100] = { 0 };
    int left = 0, right = m - 1, top = 0, bottom = n - 1;
    int num = 1;

    while (num <= n * m) {
        for (int i = left; i <= right && num <= n * m; i++) {
            matrix[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom && num <= n * m; i++) {
            matrix[i][right] = num++;
        }
        right--;

        for (int i = right; i >= left && num <= n * m; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        for (int i = bottom; i >= top && num <= n * m; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}
