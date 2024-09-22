#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D > 0) {
        double x1 = (-b - sqrt(D)) / (2 * a);
        double x2 = (-b + sqrt(D)) / (2 * a);
        if (x1 > x2) swap(x1, x2);
        cout << fixed << setprecision(10) << x1 << " " << x2 << endl;
    }
    else if (D == 0) {
        double x = -b / (2 * a);
        cout << fixed << setprecision(10) << x << endl;
    }

    return 0;
}
