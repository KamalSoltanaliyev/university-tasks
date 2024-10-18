#include <iostream>
#include <string>

using namespace std;

int romanToInt(string s) {
    int sum = 0;
    int prev_value = 0;

    for (char c : s) {
        int value = 0;
        switch (c) {
        case 'I': value = 1; break;
        case 'V': value = 5; break;
        case 'X': value = 10; break;
        case 'L': value = 50; break;
        case 'C': value = 100; break;
        case 'D': value = 500; break;
        case 'M': value = 1000; break;
        }

        if (prev_value < value) {
            sum += value - 2 * prev_value;
        }
        else {
            sum += value;
        }

        prev_value = value;
    }

    return sum;
}

int main() {
    string s;
    cin >> s;

    cout << romanToInt(s) << endl;

    return 0;
}
