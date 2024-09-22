#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    int k;
    cin >> k;

    if (k == 0) {
        for (int i = 0; i < n; i++) {
            cout << matrix[i][i] << " ";
        }
    }
    else if (k > 0) {
        for (int i = k; i < n; i++) {
            cout << matrix[i][i - k] << " ";
        }
    }
    else {
        for (int i = 0; i < n + k; i++) {
            cout << matrix[i][i - k] << " ";
        }
    }

    cout << endl;

    return 0;
}
