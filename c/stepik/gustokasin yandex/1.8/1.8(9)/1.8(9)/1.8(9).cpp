#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    vector<vector<int>> rotated(m, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            rotated[j][n - 1 - i] = matrix[i][j];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
