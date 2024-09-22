#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[a[i]] == 1) {
            cout << a[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
