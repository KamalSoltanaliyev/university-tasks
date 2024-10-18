#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;
    int len = n.length();
    int symmetry = 0;

    for (int i = 0; i < len / 2; ++i) {
        if (n[i] == n[len - 1 - i]) {
            ++symmetry;
        }
    }

    if (len % 2 == 1) {
        ++symmetry;
    }

    cout << symmetry << endl;
    return 0;
}
