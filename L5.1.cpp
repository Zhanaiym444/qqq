#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        int num;
        cin >> num;
        s.push(num);
    }

    cout << "Stack (Top to Bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
