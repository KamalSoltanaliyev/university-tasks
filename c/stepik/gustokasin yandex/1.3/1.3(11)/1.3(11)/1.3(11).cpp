#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f;
    g = 3600 * a + 60 * b + c;
    h = 3600 * d + 60 * e + f;
    g < h;
    cout << h - g;
    return 0;
}