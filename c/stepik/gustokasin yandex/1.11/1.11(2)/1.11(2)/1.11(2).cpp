#include <iostream>
#include <set>

int main() {
    int N;
    std::cin >> N;
    std::set<int> seenNumbers;
    int number;

    for (int i = 0; i < N; ++i) {
        std::cin >> number;
        if (seenNumbers.count(number)) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
            seenNumbers.insert(number);
        }
    }

    return 0;
}
