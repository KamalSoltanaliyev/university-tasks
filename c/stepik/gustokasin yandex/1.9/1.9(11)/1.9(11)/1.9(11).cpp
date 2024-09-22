#include <iostream>

using namespace std;

int sumNumbers() {
    int num;
    cin >> num;
    if (num == 0) return 0;
    return num + sumNumbers();
}

int main() {
    cout << sumNumbers() << endl;
    return 0;
}
