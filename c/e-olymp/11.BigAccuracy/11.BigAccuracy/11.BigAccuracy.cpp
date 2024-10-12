#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cin >> n >> m >> k;

    cout << n / m << ".";

    int remainder = n % m;

    for (int i = 0; i < k; i++) {
        remainder *= 10;
        cout << remainder / m;
        remainder %= m;
    }

    cout << endl;
    return 0;
}
