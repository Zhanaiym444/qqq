#include <iostream>
#include <queue>
#include <string>

int main() {
    std::queue<std::string> q;

    std::cout << "Enter 5 names:\n";
    for (int i = 0; i < 5; ++i) {
        std::string name;
        std::getline(std::cin, name);
        q.push(name);
    }

    while (!q.empty()) {
        std::cout << "Now serving: " << q.front() << std::endl;
        q.pop();
    }

    std::cout << "Queue is empty.\n";
    return 0;
}
