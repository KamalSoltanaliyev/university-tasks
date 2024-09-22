#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double y = 0.0;
    cin >> y;
    double result = y - static_cast<int> (y);
    cout << static_cast<int> (result * 10);
    return 0;
}