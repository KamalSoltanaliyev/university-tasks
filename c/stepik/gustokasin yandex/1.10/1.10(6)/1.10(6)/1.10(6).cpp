#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    string word, longest_word;
    while (ss >> word) {
        if (word.length() > longest_word.length()) {
            longest_word = word;
        }
    }

    cout << longest_word << endl;
    return 0;
}
