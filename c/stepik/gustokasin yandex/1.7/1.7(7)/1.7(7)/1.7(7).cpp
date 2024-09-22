#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minOdd = numeric_limits<int>::max();
    bool foundOdd = false;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            foundOdd = true;
            if (a[i] < minOdd) {
                minOdd = a[i];
            }
        }
    }

    if (foundOdd) {
        cout << minOdd << endl;
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}
