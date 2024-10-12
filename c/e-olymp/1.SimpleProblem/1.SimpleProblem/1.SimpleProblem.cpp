#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int first_digit = number / 10;
    int second_digit = number % 10;

    cout << first_digit << " " << second_digit << endl;

    return 0;
}