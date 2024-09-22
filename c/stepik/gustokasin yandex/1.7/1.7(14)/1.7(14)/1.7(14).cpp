#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<bool> pins(N, true);

    for (int i = 0; i < K; i++) {
        int l, r;
        cin >> l >> r;
        for (int j = l - 1; j < r; j++) {
            pins[j] = false;
        }
    }

    for (int i = 0; i < N; i++) {
        if (pins[i]) {
            cout << "I";
        }
        else {
            cout << ".";
        }
    }

    cout << endl;

    return 0;
}
