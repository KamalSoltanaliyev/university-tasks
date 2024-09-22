#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> x(8), y(8);

    for (int i = 0; i < 8; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (x[i] == x[j] || y[i] == y[j] || abs(x[i] - x[j]) == abs(y[i] - y[j])) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
