#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100] = { 0 };

    int num = 1;

    for (int d = 0; d < n + m - 1; d++) {
        int rowStart = d < m ? 0 : d - m + 1;
        int colStart = d < m ? d : m - 1;

        for (int i = rowStart, j = colStart; i < n && j >= 0; i++, j--) {
            if (i < n) {
                matrix[i][j] = num++;
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
