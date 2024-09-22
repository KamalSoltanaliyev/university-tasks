#include <iostream>
#include <regex>

bool isValidIP(const std::string& ip) {
    std::regex ipPattern(
        R"((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?))"
    );
    return std::regex_match(ip, ipPattern);
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << (isValidIP(input) ? "YES" : "NO") << std::endl;
    return 0;
}
