#include <iostream>
#include <map>
#include <sstream>

int main() {
    std::string input = "this is a test this is only a test";
    std::map<std::string, int> wordCount;

    std::istringstream iss(input);
    std::string word;
    while (iss >> word) {
        wordCount[word]++;
    }

    for (const auto& pair : wordCount) {
        std::cout << pair.first << " -> " << pair.second << std::endl;
    }

    return 0;
}
