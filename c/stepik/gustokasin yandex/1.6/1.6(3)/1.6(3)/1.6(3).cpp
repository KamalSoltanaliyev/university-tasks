#include <iostream>
#include <math.h>
using namespace std;


int main() {
    double a, b, c, p, s;
    cin >> a;
    cin >> b;
    cin >> c;
    p = (a + b + c) / 2.0;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << s;
    return 0;
}