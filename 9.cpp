#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (true) {
        cin >> s;
        if (s == "exit") break;
        if (s.length() > 5) cout << "long\n";
        else cout << "short\n";
    }
    return 0;
}
