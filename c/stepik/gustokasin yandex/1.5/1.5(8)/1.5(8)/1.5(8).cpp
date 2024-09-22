#include <iostream>
using namespace std;

int main() {
    int maxNumber = 0;
    int count = 0;
    int number;

    while (true) {
        cin >> number;
        if (number == 0) {
            break;
        }
        if (number > maxNumber) {
            maxNumber = number;
            count = 1;
        }
        else if (number == maxNumber) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
