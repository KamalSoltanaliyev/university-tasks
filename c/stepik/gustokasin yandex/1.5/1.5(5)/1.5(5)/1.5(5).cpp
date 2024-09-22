#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int number;

    while (true) {
        cin >> number;
        if (number == 0) {
            break;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}
