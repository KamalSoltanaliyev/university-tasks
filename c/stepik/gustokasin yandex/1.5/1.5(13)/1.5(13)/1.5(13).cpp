#include <iostream>

int main() {
    int number, previous = -1, current, count = 0;
    bool first = true;

    while (true) {
        std::cin >> number;
        if (number == 0) break;

        if (!first) {
            if (current > previous && current > number) {
                count++;
            }
        }
        previous = current;
        current = number;
        first = false;
    }

    std::cout << count << std::endl;
    return 0;
}
