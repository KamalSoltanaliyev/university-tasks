#include <iostream>
using namespace std;
int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (n < m && n != 0 && m != 0) {
        swap(n, m);
        if (x < m - x && x < y && x < n - y) {
            cout << x;
        }
        else if (m - x < x && m - x < y && m - x < n - y) {
            cout << m - x;
        }
        else if (y < x && y < n - y && y < m - x) {
            cout << y;
        }
        else if (n - y < y && n - y < x && n - y << m - x) {
            cout << n - y;
        }
        else {
            cout << m / 2;
        }
    }
    else if (n == 0 || m == 0 || y == 0 || x == 0 || y > n || x > m || x == m || y == n) {
        cout << 0;
    }
    else {
        if (x < m - x && x < y && x < n - y) {
            cout << x;
        }
        else if (m - x < x && m - x < y && m - x < n - y) {
            cout << m - x;
        }
        else if (y < x && y < n - y && y < m - x) {
            cout << y;
        }
        else if (n - y < y && n - y < x && n - y << m - x) {
            cout << n - y;
        }
        else {
            cout << m / 2;
        }

    }


    return 0;
}