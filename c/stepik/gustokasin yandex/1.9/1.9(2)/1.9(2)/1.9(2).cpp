#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(5) << distance(x1, y1, x2, y2) << endl;
    return 0;
}
