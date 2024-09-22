#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';
    }
    else if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';
    }

    cout << ch << endl;

    return 0;
}
