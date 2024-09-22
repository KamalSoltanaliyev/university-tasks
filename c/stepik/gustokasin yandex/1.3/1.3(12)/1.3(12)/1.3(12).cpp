#include <iostream>

int main() {
    int V, T;
    std::cin >> V >> T;

    int position = (V * T) % 109;

    if (position < 0) {
        position += 109;
    }

    std::cout << position;

    return 0;
}