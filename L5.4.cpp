#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> line;
    cout << "Enter 3 names: ";
    for (int i = 0; i < 3; ++i) {
        string name;
        cin >> name;
        line.push(name);
    }

    while (!line.empty()) {
        cout << "Serving: " << line.front() << endl;
        line.pop();
    }
    return 0;
}
