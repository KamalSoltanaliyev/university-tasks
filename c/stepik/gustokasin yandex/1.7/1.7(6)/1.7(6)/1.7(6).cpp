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

    int minPositive = numeric_limits<int>::max();
    for (int i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] < minPositive) {
            minPositive = a[i];
        }
    }

    cout << minPositive << endl;

    return 0;
}
