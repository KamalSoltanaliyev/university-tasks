#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}
