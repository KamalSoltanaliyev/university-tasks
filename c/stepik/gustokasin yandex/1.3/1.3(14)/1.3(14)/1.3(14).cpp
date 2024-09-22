#include <iostream>

int main() {
    int H, A, B;
    std::cin >> H >> A >> B;

    int days = (H - B - 1) / (A - B) + 1;
    std::cout << days;

    return 0;
}