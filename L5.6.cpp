#include <iostream>
#include <deque>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    deque<char> d;
    for (char c : word)
        d.push_back(c);

    bool isPalindrome = true;
    while (d.size() > 1) {
        if (d.front() != d.back()) {
            isPalindrome = false;
            break;
        }
        d.pop_front();
        d.pop_back();
    }

    if (isPalindrome)
        cout << "It is a palindrome.";
    else
        cout << "It is not a palindrome.";

    return 0;
}
