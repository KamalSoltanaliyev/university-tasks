#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b = a / 100;
    int c = a % 100 / 10;
    int z = a % 10;
    cout << b + c + z;
    return 0;
}