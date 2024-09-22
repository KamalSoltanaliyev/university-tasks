#include <iostream>

int main() {
    int number;
    std::cin >> number;

    int digits[4];
    for (int i = 3; i >= 0; --i) {
        digits[i] = number % 10;
        number /= 10;
    }

    bool isSymmetric = true;

    for (int i = 0; i < 2; ++i) {
        if (digits[i] != digits[3 - i]) {
            isSymmetric = false;
            break;
        }
    }

    if (isSymmetric) {
        std::cout << "1";
    }
    else {
        std::cout << "37";
    }

    return 0;
}