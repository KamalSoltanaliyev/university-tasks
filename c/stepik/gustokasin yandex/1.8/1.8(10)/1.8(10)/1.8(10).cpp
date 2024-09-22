#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[30][30];

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = i * m + j + 1;
            }
        }
        else {
            for (int j = 0; j < m; j++) {
                matrix[i][m - 1 - j] = i * m + j + 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}
