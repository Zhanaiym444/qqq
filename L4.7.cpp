#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v;

    for (int i = 1; i <= 20; ++i)
        v.push_back(i);

    // Reverse
    std::reverse(v.begin(), v.end());

    std::cout << "Reversed vector: ";
    for (int num : v) std::cout << num << " ";
    std::cout << std::endl;

    // Count even numbers
    int evenCount = std::count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    std::cout << "Number of even elements: " << evenCount << std::endl;

    // Remove numbers divisible by 3
    v.erase(std::remove_if(v.begin(), v.end(), [](int x) { return x % 3 == 0; }), v.end());

    std::cout << "Vector after removing numbers divisible by 3: ";
    for (int num : v) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
