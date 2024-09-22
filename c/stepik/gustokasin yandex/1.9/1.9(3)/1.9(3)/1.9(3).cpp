#include <iostream>

using namespace std;

bool IsPointInSquare(double x, double y) {
    const double x_l = -1, x_r = 1;
    const double y_b = -1, y_t = 1;

    return (x >= x_l && x <= x_r && y >= y_b && y <= y_t);
}

int main() {
    double x, y;

    cin >> x >> y;

    if (IsPointInSquare(x, y)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
