#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> seats(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> seats[i][j];

    int k;
    cin >> k;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            if (seats[i][j] == 0) {
                count++;
                if (count == k) {
                    cout << i + 1 << endl;
                    return 0;
                }
            }
            else {
                count = 0;
            }
        }
    }

    cout << 0 << endl;
    return 0;
}
