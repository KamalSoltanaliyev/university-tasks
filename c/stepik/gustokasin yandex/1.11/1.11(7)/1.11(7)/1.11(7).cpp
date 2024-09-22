#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <cctype>
#include <algorithm>

using namespace std;

int count_stress_errors(int n, const vector<string>& dictionary_words, const string& homework) {
    unordered_map<string, vector<string>> stress_patterns;

    for (const auto& word : dictionary_words) {
        string key = word;
        transform(key.begin(), key.end(), key.begin(), ::tolower);
        stress_patterns[key].push_back(word);
    }

    int errors = 0;
    istringstream iss(homework);
    string word;

    while (iss >> word) {
        int stress_count = 0;
        for (char ch : word) {
            if (isupper(ch)) stress_count++;
        }

        string lower_word = word;
        transform(lower_word.begin(), lower_word.end(), lower_word.begin(), ::tolower);

        if (stress_patterns.count(lower_word)) {
            bool correct_stress = false;
            for (const auto& pattern : stress_patterns[lower_word]) {
                if (pattern == word) {
                    correct_stress = true;
                    break;
                }
            }
            if (!correct_stress) errors++;
        }
        else {
            if (stress_count != 1) errors++;
        }
    }

    return errors;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string> dictionary_words(n);

    for (int i = 0; i < n; i++) {
        getline(cin, dictionary_words[i]);
    }

    string homework;
    getline(cin, homework);

    cout << count_stress_errors(n, dictionary_words, homework) << endl;
    return 0;
}
