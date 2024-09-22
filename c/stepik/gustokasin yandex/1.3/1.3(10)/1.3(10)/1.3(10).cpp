#include <iostream>

using namespace std;

int main() {
    int totalSeconds;

    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    hours = hours % 24;

    cout << hours << ":";

    if (minutes < 10) {
        cout << "0";
    }
    cout << minutes << ":";

    if (seconds < 10) {
        cout << "0";
    }
    cout << seconds;

    return 0;
}