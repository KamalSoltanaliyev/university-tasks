#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    if (n == 0) {
        count = 1;
    }
    else {
        while (n > 0) {
            n /= 10;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
