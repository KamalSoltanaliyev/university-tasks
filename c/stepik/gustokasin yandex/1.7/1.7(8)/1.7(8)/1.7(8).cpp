#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int distinctCount = 1; 

    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            distinctCount++;
        }
    }

    cout << distinctCount << endl;

    return 0;
}
