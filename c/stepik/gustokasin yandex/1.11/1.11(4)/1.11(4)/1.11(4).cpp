#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

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
    std::set<int> commonNumbers;

    for (int i = 0; i < M; ++i) {
        std::cin >> number;
        if (firstList.count(number)) {
            commonNumbers.insert(number);
        }
    }

    std::vector<int> result(commonNumbers.begin(), commonNumbers.end());
    std::sort(result.begin(), result.end());

    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
