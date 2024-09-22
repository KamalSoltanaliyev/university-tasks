#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    int wordCount = 0;
    size_t pos = 0;

    while ((pos = line.find(' ', pos)) != string::npos) {
        wordCount++;
        pos++;
    }

    cout << wordCount + 1 << endl;

    return 0;
}
