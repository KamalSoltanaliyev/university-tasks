#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string reversed_s = string(s.rbegin(), s.rend());

    if (s == reversed_s) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}
