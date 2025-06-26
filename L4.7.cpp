#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v;

    for (int i = 1; i <= 20; ++i)
        v.push_back(i);

  
    std::reverse(v.begin(), v.end());

    std::cout << "Reversed vector: ";
    for (int num : v) std::cout << num << " ";
    std::cout << std::endl;

   
    int evenCount = std::count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    std::cout << "Number of even elements: " << evenCount << std::endl;

    /
    v.erase(std::remove_if(v.begin(), v.end(), [](int x) { return x % 3 == 0; }), v.end());

    std::cout << "Vector after removing numbers divisible by 3: ";
    for (int num : v) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
