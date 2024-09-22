#include <iostream>
using namespace std;

int main() {
    int maxNumber = 0;
    int number;

    while (true) {
        cin >> number;
        if (number == 0) {
            break;
        }
        if (number > maxNumber) {
            maxNumber = number;
        }
    }

    cout << maxNumber << endl;
    return 0;
}
