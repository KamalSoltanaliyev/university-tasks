#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num2 == num3 && num1 == num3)
    {
        cout << '3';
    }

    else if (num1 == num2 || num2 == num3 || num1 == num3)
    {
        cout << '2';
    }

    else
    {
        cout << '0';
    }

    return 0;
}