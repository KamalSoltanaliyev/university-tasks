#include <iostream>

using namespace std;

double power(double a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        double half = power(a, n / 2);
        return half * half;
    }
    else {
        return a * power(a, n - 1);
    }
}

int main() {
    double a;
    int n;
    cin >> a >> n;

    cout << power(a, n) << endl;

    return 0;
}
