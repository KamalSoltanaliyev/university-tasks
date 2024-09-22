#include <iostream>
using namespace std;

int min(int a, int b) {
    return (a < b) ? a : b;
}

int min4(int a, int b, int c, int d) {
    return min(min(a, b), min(c, d));
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d) << endl;
    return 0;
}
