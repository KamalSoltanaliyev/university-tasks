#include <iostream>

int main() {
    int number, currentCount = 1, maxCount = 1;
    int previous = -1;

    while (true) {
        std::cin >> number;
        if (number == 0) break;

        if (number == previous) {
            currentCount++;
        }
        else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 1;
        }
        previous = number;
    }

    if (currentCount > maxCount) {
        maxCount = currentCount;
    }

    std::cout << (maxCount > 1 ? maxCount : 1) << std::endl;
    return 0;
}
