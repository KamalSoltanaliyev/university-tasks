#include <iostream>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    if ((K % N == 0 || K % M == 0) && K <= N * M) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
