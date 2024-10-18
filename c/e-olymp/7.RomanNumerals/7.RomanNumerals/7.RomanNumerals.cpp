#include <iostream>
#include <string>

using namespace std;

int roman_to_integer(const string& s) {
    int sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'I') sum += 1;
        else if (s[i] == 'V') sum += 5;
        else if (s[i] == 'X') sum += 10;
        else if (s[i] == 'L') sum += 50;
        else if (s[i] == 'C') sum += 100;
        else if (s[i] == 'D') sum += 500;
        else if (s[i] == 'M') sum += 1000;

        if (i > 0) {
            if ((s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I') sum -= 2;
            else if ((s[i] == 'L' || s[i] == 'C') && s[i - 1] == 'X') sum -= 20;
            else if ((s[i] == 'D' || s[i] == 'M') && s[i - 1] == 'C') sum -= 200;
        }
    }
    return sum;
}

string int_to_roman(int num) {
    string roman[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    int value[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    string result = "";

    for (int i = 0; i < 13; ++i) {
        while (num >= value[i]) {
            num -= value[i];
            result += roman[i];
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;

    size_t plus_pos = input.find('+');
    string roman_A = input.substr(0, plus_pos);
    string roman_B = input.substr(plus_pos + 1);

    int A = roman_to_integer(roman_A);
    int B = roman_to_integer(roman_B);

    int sum = A + B;

    cout << int_to_roman(sum) << endl;
    return 0;
}
