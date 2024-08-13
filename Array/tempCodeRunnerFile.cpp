#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long calculateWood(const vector<int>& heights, int cutHeight) {
    long long wood = 0;
    for (int height : heights) {
        if (height > cutHeight) {
            wood += height - cutHeight;
        }
    }
    return wood;
}

int findMaxSawHeight(vector<int>& heights, int M) {
    int low = 0;
    int high = *max_element(heights.begin(), heights.end());
    int bestHeight = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long collectedWood = calculateWood(heights, mid);

        if (collectedWood >= M) {
            bestHeight = mid;  // Valid height, try higher
            low = mid + 1;
        } else {
            high = mid - 1;  // Not enough wood, try lower
        }
    }

    return bestHeight;
}

int main() {
    // Example input: heights of the trees and the required amount of wood M
    vector<int> heights = {20, 15, 10, 17};
    int M = 7;

    // Find the maximum saw height
    int maxSawHeight = findMaxSawHeight(heights, M);
    cout <<maxSawHeight;
    return 0;
}
