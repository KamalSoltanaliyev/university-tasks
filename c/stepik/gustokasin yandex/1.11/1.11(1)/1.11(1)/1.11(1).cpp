#include <iostream>
#include <set>

int main() {
    int N;
    std::cin >> N;
    std::set<int> uniqueNumbers;
    int number;

    for (int i = 0; i < N; ++i) {
        std::cin >> number;
        uniqueNumbers.insert(number);
    }

    std::cout << uniqueNumbers.size() << std::endl;
    return 0;
}
