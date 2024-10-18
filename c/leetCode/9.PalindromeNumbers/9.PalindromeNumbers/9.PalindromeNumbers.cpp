#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false; 
    if (x % 10 == 0 && x != 0) return false; 

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    return x == reversed || x == reversed / 10;
}

int main() {
    int x;
    cin >> x;

    cout << (isPalindrome(x) ? "true" : "false") << endl;

    return 0;
}
