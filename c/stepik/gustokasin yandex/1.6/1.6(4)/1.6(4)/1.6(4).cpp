#include <iostream>
using namespace std;

int main() {
    int P, X, Y;
    cin >> P >> X >> Y;

    long long total_cents = X * 100 + Y;

    total_cents += total_cents * P / 100;

    int final_rubles = total_cents / 100;
    int final_cents = total_cents % 100;

    cout << final_rubles << " " << final_cents << endl;

    return 0;
}
