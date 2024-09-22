#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    int N;
    std::cin >> N;
    std::unordered_map<std::string, std::string> synonyms;
    std::string word1, word2;

    for (int i = 0; i < N; ++i) {
        std::cin >> word1 >> word2;
        synonyms[word1] = word2;
        synonyms[word2] = word1;
    }

    std::string query;
    std::cin >> query;

    std::cout << synonyms[query] << std::endl;

    return 0;
}
