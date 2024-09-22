#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100] = { 0 };
    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
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
