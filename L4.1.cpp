#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

int main() {
    std::srand(std::time(0));
    std::vector<int> v;

  
    for (int i = 0; i < 10; ++i) {
        v.push_back(1 + std::rand() % 100);
    }

   
    std::cout << "Ori vector: ";
    for (int num : v) std::cout << num << " ";
    std::cout << std::endl;

    
    std::sort(v.begin(), v.end());

    
    std::cout << "Sort vector: ";
    for (int num : v) std::cout << num << " ";
    std::cout << std::endl;

    
    auto min_it = std::min_element(v.begin(), v.end());
    auto max_it = std::max_element(v.begin(), v.end());
    std::cout << "Min: " << *min_it << ", Max: " << *max_it << std::endl;

    
    auto it = std::unique(v.begin(), v.end());
    v.erase(it, v.end());

    std::cout << "Vector without duplicates: ";
    for (int num : v) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
