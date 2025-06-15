#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;
    switch(day) {
        case 1: cout << "Mon"; break;
        case 2: cout << "Tue"; break;
        default: cout << "Other";
    }
    return 0;
}
