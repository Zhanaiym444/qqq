#include <iostream>
#include <set>

int main() {
    std::set<int> mySet;

    // Input 10 integers
    std::cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; ++i) {
        int num;
        std::cin >> num;
        mySet.insert(num);
    }

    // Ask user to search for a number
    int searchNum;
    std::cout << "Enter a number to search: ";
    std::cin >> searchNum;

    if (mySet.find(searchNum) != mySet.end())
        std::cout << searchNum << " exists in the set.\n";
    else
        std::cout << searchNum << " does not exist in the set.\n";

    // Print all elements of the set
    std::cout << "Set elements: ";
    for (int num : mySet)
        std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
