#include <iostream>

int main() {
    int A;
    std::cin >> A;

    int a = 0, b = 1, n = 1;

    while (b < A) {
        int c = a + b;
        a = b;
        b = c;
        n++;
    }

    if (b == A) {
        std::cout << n << std::endl;
    }
    else {
        std::cout << -1 << std::endl;
    }

    return 0;
}
