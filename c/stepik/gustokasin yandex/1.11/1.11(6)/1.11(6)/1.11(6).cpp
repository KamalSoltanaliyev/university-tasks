#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <sstream>

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore();

    std::unordered_map<std::string, std::vector<std::string>> latinToEnglish;

    for (int i = 0; i < N; ++i) {
        std::string line;
        std::getline(std::cin, line);
        size_t dashPos = line.find(" - ");
        std::string englishWord = line.substr(0, dashPos);
        std::string latinWords = line.substr(dashPos + 3);
        std::istringstream ss(latinWords);
        std::string latinWord;

        while (std::getline(ss, latinWord, ',')) {
            latinWord.erase(0, latinWord.find_first_not_of(" "));
            latinWord.erase(latinWord.find_last_not_of(" ") + 1);
            latinToEnglish[latinWord].push_back(englishWord);
        }
    }

    std::vector<std::string> sortedLatinWords;
    for (const auto& entry : latinToEnglish) {
        sortedLatinWords.push_back(entry.first);
    }
    std::sort(sortedLatinWords.begin(), sortedLatinWords.end());

    std::cout << sortedLatinWords.size() << std::endl;
    for (const auto& latinWord : sortedLatinWords) {
        std::vector<std::string>& englishWords = latinToEnglish[latinWord];
        std::sort(englishWords.begin(), englishWords.end());
        std::cout << latinWord << " - " << englishWords[0];
        for (size_t j = 1; j < englishWords.size(); ++j) {
            std::cout << ", " << englishWords[j];
        }
        std::cout << std::endl;
    }

    return 0;
}
