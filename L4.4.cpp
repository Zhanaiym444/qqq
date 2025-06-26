#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& expr) {
    std::stack<char> s;
    for (char ch : expr) {
        if (ch == '(')
            s.push(ch);
        else if (ch == ')') {
            if (s.empty()) return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    std::string expression;
    std::cout << "Enter an expression: ";
    std::getline(std::cin, expression);

    if (isBalanced(expression))
        std::cout << "Correct\n";
    else
        std::cout << "Incorrect\n";

    return 0;
}
