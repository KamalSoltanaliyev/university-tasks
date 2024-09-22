#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int z;
    cin >> x >> y >> z;
    x = (x / 2) + (x % 2);
    y = (y / 2) + (y % 2);
    z = (z / 2) + (z % 2);
    cout << x + y + z;
    return 0;
}