#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, max;
    cin >> num1 >> num2 >> num3;

    max = num1;

    if (max < num2)
    {
        max = num2;
    }
    if (max < num3)
    {
        max = num3;
    }

    cout << max;
    return 0;
}