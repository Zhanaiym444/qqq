#include <iostream>
using namespace std;

int main() {
    int A[4][4];
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            cin >> A[i][j];
    
    int maxSum = -1, rId = -1;
    for(int i = 0; i < 4; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++)
            sum += A[i][j];
        if(sum > maxSum) {
            maxSum = sum;
            rId = i;
        }
    }
    cout << "Row " << rId+1 << " has the maximum sum: " << maxSum << endl;
    return 0;
}