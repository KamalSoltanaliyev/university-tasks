#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int number;

    while (true) {
        cin >> number;
        if (number == 0) {
            break;
        }
        sum += number;
    }

    cout << sum << endl;
    return 0;
}
