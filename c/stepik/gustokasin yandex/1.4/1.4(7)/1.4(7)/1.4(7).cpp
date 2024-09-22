#include <iostream>
#include <cmath>

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if (std::abs(x1 - x2) <= 1 && std::abs(y1 - y2) <= 1) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}