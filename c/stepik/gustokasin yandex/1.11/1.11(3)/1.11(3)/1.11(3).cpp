#include <iostream>
#include <set>

int main() {
    int N, M;
    std::cin >> N;
    std::set<int> firstList;
    int number;

    for (int i = 0; i < N; ++i) {
        std::cin >> number;
        firstList.insert(number);
    }

    std::cin >> M;
    int commonCount = 0;

    for (int i = 0; i < M; ++i) {
        std::cin >> number;
        if (firstList.count(number)) {
            commonCount++;
        }
    }

    std::cout << commonCount << std::endl;
    return 0;
}
