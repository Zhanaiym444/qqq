#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    if (str.empty()) return "";
    return reverseString(str.substr(1)) + str[0];
}

int main() {
    string s;
    cin >> s;
    cout << reverseString(s);
    return 0;
}
