#include <iostream>
#include <vector>
#include <numeric>

double average(const std::vector<int>& v) {
    if (v.empty()) return 0.0;
    int sum = std::accumulate(v.begin(), v.end(), 0);
    return static_cast<double>(sum) / v.size();
}

int main() {
    std::vector<int> v = {10, 20, 30, 40, 50};

    double avg = average(v);
    std::cout << "Average: " << avg << std::endl;

    return 0;
}
