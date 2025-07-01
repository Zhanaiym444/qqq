#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {4, 1, 2, 4, 6, 4, 3};
    int target = 4;

    int countTar = count(nums.begin(), nums.end(), target);
    int minV = *min_element(nums.begin(), nums.end());
    int maxV = *max_element(nums.begin(), nums.end());

    cout << "Count of " << target << ": " << countTar << endl;
    cout << "Min: " << minV << endl;
    cout << "Max: " << maxV << endl;

    return 0;
}
